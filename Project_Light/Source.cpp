#include "Source.h"


//Голова на 3212 точек
//Модель на 468 точек

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
void do_movement();
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
unsigned int loadTexture(char const* path);

void DrawPixels(int _Width, int _Height, GLenum _Format, GLenum _Type, const void* _Pixels);

void setPolygonColor(std::vector<PolygonS>& polygons, glm::mat4 model, glm::mat4 view, glm::mat4 projection);

glm::vec3 cameraPos(2.0f, 0.0f, 20.0f);
Camera camera(cameraPos);

const GLuint WIDTH = 1200, HEIGHT = 800;
GLfloat lastX = WIDTH / 2, lastY = HEIGHT / 2;

bool keys[1024];

GLfloat deltaTime = 0.0f;	// Время, прошедшее между последним и текущим кадром
GLfloat lastFrame = 0.0f;  	// Время вывода последнего кадра

std::vector<glm::vec3> lightPosStart{
	glm::vec3(1.0f, 1.0f, 8.0f),
	glm::vec3(-1.0f, 1.0f, 8.0f),
	glm::vec3(0.0f, -1.0f, 8.0f),
	glm::vec3(2.0f, 0.0f, 10.0f),
};





int lightFocused = 0;
 
int main() {
	std::string image = "py_modules/face2.jpg";
	setlocale(LC_ALL, "Russian");
	glfwInit();
	// Настройка GLFW
	//Задается минимальная требуемая версия OpenGL. 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "LearnOpenGL", nullptr, nullptr);
	if (window == nullptr)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}


	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, key_callback);
	glfwSetCursorPosCallback(window, mouse_callback);
	glfwSetScrollCallback(window, scroll_callback);
	glfwSetCursorPos(window, lastX, lastY);

	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

	if (glewInit() != GLEW_OK)
	{
		std::cout << "Failed to initialize GLEW" << std::endl;
		return -1;
	}

	stbi_set_flip_vertically_on_load(1);
	int width, height;
	width = WIDTH; height = HEIGHT;
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, WIDTH, HEIGHT);

	float vertices[] = {
		// positions          // normals           // texture coords
		-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f, 0.0f,
		 0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f, 0.0f,
		 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f, 1.0f,
		 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f, 1.0f,
		-0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f, 0.0f,

		-0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   0.0f, 0.0f,
		 0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   1.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   1.0f, 1.0f,
		 0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   1.0f, 1.0f,
		-0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,   0.0f, 0.0f,

		-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f, 0.0f,
		-0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f, 1.0f,
		-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f, 0.0f,
		-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f, 0.0f,

		 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 0.0f,
		 0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 1.0f,
		 0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f, 0.0f,

		-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  1.0f, 1.0f,
		 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f, 0.0f,
		 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f, 0.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  0.0f, 0.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f, 1.0f,

		-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 1.0f,
		 0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 1.0f,
		 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f, 0.0f,
		-0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 0.0f,
		-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f, 1.0f
	};

	unsigned int texture_img = loadTexture(image.c_str());
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture_img);



	Mask mask = Mask(image);



	GLuint VBO, VAO;
 	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	// Bind the Vertex Array Object first, then bind and set vertex buffer(s) and attribute pointer(s).
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), (GLvoid*)(3 * sizeof(GL_FLOAT)));
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), (GLvoid*)(6 * sizeof(GL_FLOAT)));
	glEnableVertexAttribArray(2);

	glBindVertexArray(0);


	GLuint lightVAO;
	glGenVertexArrays(1, &lightVAO);
	glBindVertexArray(lightVAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), (GLvoid*)0);
	glEnableVertexAttribArray(0);
	glBindVertexArray(0);
	


	Shader lampShader("lampshader.vs", "lampshader.frag");
	Shader modelShader("Model.vs", "Model.frag");
	Shader maskShader("MasKShader.vs", "MaskShader.frag");
	Model headModel("backpack/male_head.obj");
	//-8.47118f, 1.42893f, 10.5191f левый глаз

	while (!glfwWindowShouldClose(window)) {
		glViewport(0, 0, WIDTH, HEIGHT);
		glBindTexture(GL_TEXTURE_2D, texture_img);
		glEnable(GL_DEPTH_TEST);

		glfwPollEvents();
		do_movement();


		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



		GLfloat currentTime = glfwGetTime();
		deltaTime = currentTime - lastFrame;
		lastFrame = currentTime;

		glm::mat4 model, view, projection;
		projection = glm::perspective(camera.Zoom, (float)WIDTH / (float)HEIGHT, 0.1f, 100.0f);
		//projection = glm::ortho((float)-1 * WIDTH / 300, (float)WIDTH / 300, (float)-1 * HEIGHT / 300, (float)HEIGHT / 300, 0.1f, 100.0f);
		view = camera.GetViewMatrix();




		

		lampShader.Use();
		
		glUniformMatrix4fv(glGetUniformLocation(lampShader.Program, "projection"), 1, GL_FALSE, glm::value_ptr(projection));
		glUniformMatrix4fv(glGetUniformLocation(lampShader.Program, "view"), 1, GL_FALSE, glm::value_ptr(view));
		

		std::vector<glm::vec3> lightPos;
		
	
		for (int i = 0; i < lightPosStart.size(); i++) {
			model = glm::mat4();
			model = glm::translate(model, lightPosStart[i]);
			model = glm::scale(model, glm::vec3(0.2f));
			glUniformMatrix4fv(glGetUniformLocation(lampShader.Program, "model"), 1, GL_FALSE, glm::value_ptr(model));
			glBindVertexArray(lightVAO);
			glDrawArrays(GL_TRIANGLES, 0, 36);
			glBindVertexArray(0);
 			lightPos.push_back(glm::vec3(model * glm::vec4(glm::vec3(0.0f), 1.0f)));
			glm::vec4 g = projection * view * model * glm::vec4(0.5f, 0.5f, 0.5f, 1.0f);
		}
		float timer = glfwGetTime();
		modelShader.Use();
		glm::mat4 modelModel;
		model = glm::mat4();
		model = glm::rotate(model,currentTime * /*7*/0.0f, glm::vec3(0.0f, 1.0f, 0.0f));
		model = glm::scale(model, glm::vec3(0.1f));
		modelModel = model;
		glUniform1i(glGetUniformLocation(modelShader.Program, "lightCount"), lightPosStart.size());
		for (int i = 0; i < lightPosStart.size(); i++) {
			glUniform3f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].position").c_str()), lightPos[i].x, lightPos[i].y, lightPos[i].z);
			glUniform3f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].ambient").c_str()), 0.2f, 0.2f, 0.2f);
			glUniform3f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].diffuse").c_str()), 1.0f, 1.0f, 1.0f);
			glUniform3f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].specular").c_str()), 1.0f, 1.0f, 1.0f);

			glUniform1f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].constant").c_str()), 1.0f);
			glUniform1f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].linear").c_str()), 0.09f);
			glUniform1f(glGetUniformLocation(modelShader.Program, ("pointLights[" + std::to_string(i) + "].quadratic").c_str()), 0.032f);
		}
		


		glUniformMatrix4fv(glGetUniformLocation(modelShader.Program, "projection"), 1, GL_FALSE, glm::value_ptr(projection));
		glUniformMatrix4fv(glGetUniformLocation(modelShader.Program, "view"), 1, GL_FALSE, glm::value_ptr(view));
		glUniformMatrix4fv(glGetUniformLocation(modelShader.Program, "model"), 1, GL_FALSE, glm::value_ptr(model));
		glUniform3f(glGetUniformLocation(modelShader.Program, "cameraPos"), camera.Position.x, camera.Position.y, camera.Position.z);
		glUniform3f(glGetUniformLocation(modelShader.Program, "light.position"), lightPos[0].x, lightPos[0].y, lightPos[0].z);
		glUniform1f(glGetUniformLocation(modelShader.Program, "material.shininess"), 64.0f);
		glUniform3f(glGetUniformLocation(modelShader.Program, "material.diffuse"), 228.0f/256.0f, 185.0f/256.0f, 142.0f/256.0f);
		glUniform3f(glGetUniformLocation(modelShader.Program, "material.specular"), 1.0f, 1.0f, 1.0f);

		glUniform3f(glGetUniformLocation(modelShader.Program, "light.ambient"), 0.2f, 0.2f, 0.2f);
		glUniform3f(glGetUniformLocation(modelShader.Program, "light.diffuse"), 1.0f, 1.0f, 1.0f);
		glUniform3f(glGetUniformLocation(modelShader.Program, "light.specular"), 1.0f, 1.0f, 1.0f);

		glUniform1f(glGetUniformLocation(modelShader.Program, "light.constant"), 1.0f);
		glUniform1f(glGetUniformLocation(modelShader.Program, "light.linear"), 0.09f);
		glUniform1f(glGetUniformLocation(modelShader.Program, "light.quadratic"), 0.032f);

		headModel.Draw(modelShader);
		timer = glfwGetTime() - timer;

		maskShader.Use();
		model = mask.getModelMatrix(modelModel);
		glUniformMatrix4fv(glGetUniformLocation(maskShader.Program, "projection"), 1, GL_FALSE, glm::value_ptr(projection));
		glUniformMatrix4fv(glGetUniformLocation(maskShader.Program, "view"), 1, GL_FALSE, glm::value_ptr(view));
		glUniformMatrix4fv(glGetUniformLocation(maskShader.Program, "model"), 1, GL_FALSE, glm::value_ptr(model));
		mask.Draw(maskShader);
		
		headModel.polygons = mask.polygons;
		//setPolygonColor(mask.polygons, model, view, projection);


		std::vector<glm::vec3> maskKeys;
		maskKeys.resize(68);
		std::vector<glm::vec3> modelKeys;
		modelKeys.resize(68);


		const int landmark_points_68_mask[] = { 162, 234, 93, 58, 172, 136, 149, 148, 152, 377, 378, 365, 397, 288, 323, 454, 389, 71, 63, 105, 66, 107, 336,
			296, 334, 293, 301, 168, 197, 5, 4, 75, 97, 2, 326, 305, 33, 160, 158, 133, 153, 144, 362, 385, 387, 263, 373,
			380, 61, 39, 37, 0, 267, 269, 291, 405, 314, 17, 84, 181, 78, 82, 13, 312, 308, 317, 14, 87 
		};
		const int landmark_points_68_model[] = { 1246, 1189, 870, 893, 1052, 1052, 1047, 597, 595, 1032, 1040, 1051, 1051, 890, 865, 1186, 1241, 1204, 2516, 2500,
			2492, 444, 443, 2487, 2495, 2511, 1203, 531, 782, 2140, 427, 1827, 1550, 419, 1549, 1820, 3083, 2539, 2525, 2867, 2565, 2683, 2864, 2518, 2536, 3076,
			2680, 2590, 68, 343, 374, 59, 373, 342, 1360, 86, 94, 16, 22, 93, 115, 254, 43, 253, 328, 253, 43, 254
		};


		/*std::vector<Vertex> vertices = headModel.meshes[0].vertices;

		for (int i = 0; i < 68; i++) {
			maskKeys[i].x = mask.vertices[4 * landmark_points_68_mask[i]];
			maskKeys[i].y = mask.vertices[4 * landmark_points_68_mask[i] + 1];
			maskKeys[i].z = mask.vertices[4 * landmark_points_68_mask[i] + 2];
			maskKeys[i] = glm::vec3(model * glm::vec4(maskKeys[i], 1.0f));
			vertices[i].Position = glm::vec3(modelModel * glm::vec4(vertices[i].Position, 1.0f));
			maskKeys[i] -= vertices[i].Position;
			std::cout << maskKeys[i].x << maskKeys[i].y << maskKeys[i].z << "\n";
		}*/


		////Домножить на матрицу модели
		//int landmark_points_68_model[68];
		//std::cout << mask.vertices[0] << mask.vertices[1] << mask.vertices[2] << mask.vertices[3] << mask.vertices[4];
		//std::vector<glm::vec3> modelKeys;
		//modelKeys.resize(68);
		//int best;
		//float best_len, cur_len;
		//std::vector<Vertex> vertices = headModel.meshes[0].vertices;
		//for (int i = 0; i < 3212; i++) {
		//	vertices[i].Position = glm::vec3(modelModel * glm::vec4(vertices[i].Position, 1.0f));
		//}

		//for (int i = 0; i < 68; i++) {
		//	best = 0;
		//	best_len = abs(sqrt(pow(maskKeys[i].x - vertices[0].Position.x, 2) + pow(maskKeys[i].y - vertices[0].Position.y, 2) + pow(maskKeys[i].z - vertices[0].Position.z, 2)));
		//	for (int j = 1; j < 3212; j++) {
		//		cur_len = abs(sqrt(pow(maskKeys[i].x - vertices[j].Position.x, 2) + pow(maskKeys[i].y - vertices[j].Position.y, 2) + pow(maskKeys[i].z - vertices[j].Position.z, 2)));
		//		if (cur_len < best_len) {
		//			best_len = cur_len;
		//			best = j;
		//		}
		//	}
		//	landmark_points_68_model[i] = best;
		//	modelKeys[i] = vertices[best].Position;
		//}
		//std::cout << "\n\n" << landmark_points_68_model << "\n\n";
		//for(int i = 0; i < 10; i++) {
		//	std::cout << "\n" << modelKeys[i].x << "  " << modelKeys[i].y << "  " << modelKeys[i].z << "  ";
		//}
		//std::cout << "\n\n\n";
		//std::cout << "const int landmark_points_68_mask[] = {";
		//for (int i = 0; i < 68; i++) {
		//	std::cout << landmark_points_68_model[i] << ", ";
		//}

		//model = glm::translate(model, glm::vec3(-mask.translationX/WIDTH, 0.0f, 0.0f));
		
		//Средний цвет полигонов
		//setPolygonColor(headModel.polygons, modelModel, view, projection);


		/*GLubyte pixels[10*10*3];
 		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				pixels[i*10*3 + j*3] = 100;
				pixels[i * 10 * 3 + j * 3 + 1] = 100;
				pixels[i * 10 * 3 + j * 3 + 2] = 100;
			}
			
		}*/
		//GLubyte pixels[(int)WIDTH / 28 * (int)HEIGHT / 28 * 3];
		//glReadPixels((int)WIDTH / 2, (int)HEIGHT / 2, (int)WIDTH / 28, (int)HEIGHT / 28, GL_RGB, GL_UNSIGNED_BYTE, pixels);
		////glShadeModel(GL_FLAT);
		////glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
		//glRasterPos2i(0, 0);
		//glDrawBuffer(GL_BACK);
		//DrawPixels(10, 10, GL_RGB, GL_UNSIGNED_BYTE, pixels);


		glfwSwapBuffers(window);		
	}
	

	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	
	glfwTerminate();
	return 0;
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode) {
	
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);

	if (key == GLFW_KEY_LEFT_SHIFT) {
		if (action == GLFW_PRESS) {
			std::cout << "lol\n";
			camera.MovementSpeed *= 5;
		}
		else if (action == GLFW_RELEASE)
			camera.MovementSpeed /= 5;
	}

	std::cout << lightPosStart.size();
	if (key >= GLFW_KEY_1 && key <= GLFW_KEY_1 - 1 + lightPosStart.size() && key <= GLFW_KEY_9 && action == GLFW_PRESS) {
		lightFocused = key - GLFW_KEY_1;
		std::cout << lightFocused;
	}

	if (key == GLFW_KEY_UP && action == GLFW_PRESS)
		lightPosStart[lightFocused] += glm::vec3(0.0f, 1.0f, 0.0f);

	if (key == GLFW_KEY_DOWN && action == GLFW_PRESS)
		lightPosStart[lightFocused] -= glm::vec3(0.0f, 1.0f, 0.0f);

	if (key == GLFW_KEY_RIGHT && action == GLFW_PRESS)
		lightPosStart[lightFocused] += glm::vec3(1.0f, 0.0f, 0.0f);

	if (key == GLFW_KEY_LEFT && action == GLFW_PRESS)
		lightPosStart[lightFocused] -= glm::vec3(1.0f, 0.0f, 0.0f);

	if (key == GLFW_KEY_RIGHT_SHIFT && action == GLFW_PRESS)
		lightPosStart[lightFocused] -= glm::vec3(0.0f, 0.0f, 1.0f);
	
	if (key == GLFW_KEY_RIGHT_CONTROL && action == GLFW_PRESS)
		lightPosStart[lightFocused] += glm::vec3(0.0f, 0.0f, 1.0f);


	if (action == GLFW_PRESS)
		keys[key] = true;
	else if (action == GLFW_RELEASE)
		keys[key] = false;
}

void do_movement() {
	if (keys[GLFW_KEY_W])
		camera.ProcessKeyBoard(FORWARD, deltaTime);
	if (keys[GLFW_KEY_S])
		camera.ProcessKeyBoard(BACKWARD, deltaTime);
	if (keys[GLFW_KEY_A])
		camera.ProcessKeyBoard(LEFT, deltaTime);
	if (keys[GLFW_KEY_D])
		camera.ProcessKeyBoard(RIGHT, deltaTime);
	if (keys[GLFW_KEY_SPACE])
		camera.ProcessKeyBoard(UP, deltaTime);
	if (keys[GLFW_KEY_LEFT_CONTROL])
		camera.ProcessKeyBoard(DOWN, deltaTime);
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos) {
	GLfloat xoffset = xpos - lastX;
	GLfloat yoffset = lastY - ypos;
	lastX = xpos;
	lastY = ypos;

	camera.ProcessMouseMovement(xoffset, yoffset);
}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset) {
	camera.ProcessMouseScroll(yoffset);
}

unsigned int loadTexture(char const* path)
{
	unsigned int textureID;
	glGenTextures(1, &textureID);

	int width, height, nrComponents;
	unsigned char* data = stbi_load(path, &width, &height, &nrComponents, 0);
	if (data)
	{
		GLenum format = GL_RGB;
		if (nrComponents == 1)
			format = GL_RED;
		else if (nrComponents == 3)
			format = GL_RGB;
		else if (nrComponents == 4)
			format = GL_RGBA;

		glBindTexture(GL_TEXTURE_2D, textureID);
		glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);

		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

		stbi_image_free(data);
	}
	else
	{
		std::cout << "Ошибка в загрузке текстуры по пути: " << path << std::endl;
		stbi_image_free(data);
	}

	return textureID;
}

void setPolygonColor(std::vector<PolygonS>& polygons, glm::mat4 model, glm::mat4 view, glm::mat4 projection) {
	glm::mat4 transform = projection * view * model;
	int c = 0;
	for (int i = 0; i < polygons.size(); i++) {

		glm::vec2 ver1 = glm::vec2(transform * glm::vec4(polygons[i].vertex1, 1.0f));
		ver1.x = (ver1.x * WIDTH + WIDTH) / 2;
		ver1.y = (ver1.y * HEIGHT + HEIGHT) / 2;
		glm::vec2 ver2 = glm::vec2(transform * glm::vec4(polygons[i].vertex2, 1.0f));
		ver2.x = (ver2.x * WIDTH + WIDTH) / 2;
		ver2.y = (ver2.y * HEIGHT + HEIGHT) / 2;
		glm::vec2 ver3 = glm::vec2(transform * glm::vec4(polygons[i].vertex3, 1.0f));
		ver3.x = (ver3.x * WIDTH + WIDTH) / 2;
		ver3.y = (ver3.y * HEIGHT + HEIGHT) / 2;
		glm::vec2 temp;

		if (ver2.y < ver1.y) {
			temp = ver1;
			ver1 = ver2;
			ver2 = temp;
		}
		if (ver3.y < ver1.y) {
			temp = ver1;
			ver1 = ver3;
			ver3 = temp;
		}

		if (ver3.y < ver2.y) {
			temp = ver2;
			ver2 = ver3;
			ver3 = temp;
		}

		glm::vec2 leftVec, rightVec;
		if (ver2.x <= ver1.x) {
			//213
			if (ver1.x <= ver3.x) {
				leftVec = ver2;
				rightVec = ver3;
			}
			//231
			else if (ver2.x <= ver3.x) {
				leftVec = ver2;
				rightVec = ver1;
			}
			//321
			else {
				leftVec = ver3;
				rightVec = ver1;
			}
		}
		else {
			//123
			if (ver2.x <= ver3.x) {
				leftVec = ver1;
				rightVec = ver3;
			}
			//132
			else if (ver1.x <= ver3.x) {
				leftVec = ver1;
				rightVec = ver2;
			}
			//312
			else {
				leftVec = ver3;
				rightVec = ver2;
			}
		}

		float stepsNum = 3;
		float step_y1 = (ver2.y - ver1.y) / stepsNum;
		float step_y2 = (ver3.y - ver2.y) / stepsNum;

		float step_x1, step_x2, step_w;
		float h3_to_h2 = (ver3.y - ver1.y) / (ver2.y - ver1.y);

		glm::vec4 colors(0.0f);
		c++;
		//step_w * stepsNum не равно ширине  
		//Если 1-3 правее, чем 1-2
		if (glm::dot(glm::normalize(ver3 - ver1), glm::vec2(1.0f, 0.0f)) > glm::dot(glm::normalize(ver2 - ver1), glm::vec2(1.0f, 0.0f))) /*(ver2.x - ver1.x) < (ver3.x - ver1.x)/2)*/ {
			GLubyte* ixels = new GLubyte[(ver3.y - ver1.y + 1) * (rightVec.x - leftVec.x + 1) * 3];
			glReadPixels(leftVec.x, ver1.y, rightVec.x - leftVec.x, (ver3.y - ver1.y), GL_RGB, GL_UNSIGNED_BYTE, ixels);
			
			if (c == 121) {
				DrawPixels(rightVec.x - leftVec.x, (ver3.y - ver1.y), GL_RGB, GL_UNSIGNED_BYTE, ixels);
			}

			step_x1 = (ver2.x - ver1.x) / stepsNum;
			step_x2 = (ver3.x - ver2.x) / stepsNum;
			
			step_w = ((ver3.x - ver1.x) / (h3_to_h2) + (ver1.x - ver2.x)) / stepsNum;

			GLubyte* pixels = new GLubyte[(ver3.y - ver1.y) * (step_w * stepsNum) * 3];


			for (int j = 1; j < stepsNum; j++) {
				int x0 = (int)(ver1.x + step_x1 * j);
				int y0 = (int)(ver1.y + step_y1 * j);
				int width = (int)(step_w * j);
				int height = (int)(step_y1);
				if (width != 0 && height != 0) {
					glReadPixels(x0, y0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
					int areaSize = width * height;
					for (int k = 0; k < areaSize; k++) {
						colors.r += pixels[k * 3];
						colors.g += pixels[k * 3 + 1];
						colors.b += pixels[k * 3 + 2];
						colors.a++;
					}
				}

				x0 = (int)(ver2.x + step_x2 * j);
				y0 = (int)(ver2.y + step_y2 * j);
				width = (int)(step_w * (stepsNum - j));
				height = (int)(step_y2);
				if (width != 0 && height != 0) {
					glReadPixels(x0, y0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
					int areaSize = width * height;
					for (int k = 0; k < areaSize; k++) {
						colors.r += pixels[k * 3];
						colors.g += pixels[k * 3 + 1];
						colors.b += pixels[k * 3 + 2];
						colors.a++;
					}
				}
			}
			delete[] pixels;
			colors /= colors.a;
			delete[] ixels;

		}

		//Если 1-3 левее, чем 1-2
		else {
			step_x1 = (ver3.x - ver1.x) / h3_to_h2 / stepsNum;
			step_x2 = ver3.x / stepsNum - step_x1;

			step_w = ((ver1.x - ver3.x) / (h3_to_h2) + (ver2.x - ver1.x)) / stepsNum;

			GLubyte* pixels = new GLubyte[(ver3.y - ver1.y) * (step_w * stepsNum) * 3];


			for (int j = 1; j < stepsNum; j++) {
				int x0 = (int)(ver1.x + step_x1 * j);
				int y0 = (int)(ver1.y + step_y1 * j);
				//std::cout << x0 << "   " << y0 << "\n";
				int width = (int)(step_w * j);
				int height = (int)(step_y1);
				if (width != 0 && height != 0) {
					glReadPixels(x0, y0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
					int areaSize = width * height;
					for (int k = 0; k < areaSize; k++) {
						colors.r += pixels[k * 3];
						colors.g += pixels[k * 3 + 1];
						colors.b += pixels[k * 3 + 2];
						colors.a++;
					}
				}


				x0 = (int)(ver2.x - step_w * stepsNum);
				y0 = (int)(ver2.y + step_y2 * j);
				width = (int)(step_w * (stepsNum - j));
				height = (int)(step_y2);
				if (width != 0 && height != 0) {
					glReadPixels(x0, y0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
					int areaSize = width * height;
					for (int k = 0; k < areaSize; k++) {
						colors.r += pixels[k * 3];
						colors.g += pixels[k * 3 + 1];
						colors.b += pixels[k * 3 + 2];
						colors.a++;
					}
				}
			}
			colors /= colors.a;
			delete[] pixels;
		}

		polygons[i].meanColor = glm::vec3(colors);
		
	}

	for (int i = 0; i < polygons.size(); i++) {
		PolygonS polygon = polygons[i];
		polygon.coef = glm::vec3(0.0f);
		int size = polygon.neighbours.size();
		for (int j = 0; j < size; j++) {
			polygon.coef += polygon.meanColor / (*polygon.neighbours[j]).meanColor;
		}
		polygon.coef /= size;
		polygons[i] = polygon;
	}
}

void readPixels(int width, int height, int x0, int y0, GLubyte* pixels, glm::vec4& colors) {
	if (width != 0 && height != 0) {
		glReadPixels(x0, y0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
		int areaSize = width * height;
		for (int k = 0; k < areaSize; k++) {
			colors.r += pixels[k * 3];
			colors.g += pixels[k * 3 + 1];
			colors.b += pixels[k * 3 + 2];
			colors.a++;
		}
	}
}






#define STRINGIFY(text)              #text

void DrawPixels(int _Width, int _Height, GLenum _Format, GLenum _Type, const void* _Pixels) {
	GLuint texid;
	GLuint shaderProgram;
	GLuint handle;
	GLuint vertBuffer;
	GLuint vao;

	const char* vertexShader = STRINGIFY(
		attribute vec2 position;
	varying vec2 texCoord;
	void main() {
		gl_Position = vec4(position, 0.0, 1.0);
		texCoord = position * 0.5 + 0.5;
	}
	);

	const char* fragmentShader = STRINGIFY(
		varying vec2 texCoord;
	uniform sampler2D image;
	void main() {
		gl_FragColor = texture2D(image, texCoord);
	}
	);

	glGenTextures(1, &texid);
	glBindTexture(GL_TEXTURE_2D, texid);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1); // set 1-byte alignment
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, _Width, _Height, 0, _Format, _Type, _Pixels);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	shaderProgram = glCreateProgram();

	handle = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(handle, 1, &vertexShader, 0);
	glCompileShader(handle);
	glAttachShader(shaderProgram, handle);
	glDeleteShader(handle);

	handle = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(handle, 1, &fragmentShader, 0);
	glCompileShader(handle);
	glAttachShader(shaderProgram, handle);
	glDeleteShader(handle);

	glLinkProgram(shaderProgram);
	glValidateProgram(shaderProgram);
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glUniform1i(glGetUniformLocation(shaderProgram, "image"), 0);

	const float verts[4][2] =
	{
		{-1.0f, -1.0f},
		{ 1.0f, -1.0f},
		{-1.0f,  1.0f},
		{ 1.0f,  1.0f}
	};

	glGenBuffers(1, &vertBuffer);
	glBindBuffer(GL_ARRAY_BUFFER, vertBuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts), &verts[0][0], GL_STATIC_DRAW);

	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	GLint attribLocation = glGetAttribLocation(shaderProgram, "position");
	glEnableVertexAttribArray(attribLocation);
	glVertexAttribPointer(attribLocation, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);

	glViewport(0, 0, _Width, _Height);

	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glDisableVertexAttribArray(attribLocation);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glDeleteBuffers(1, &vertBuffer);
	glUseProgram(0);
	glDeleteProgram(shaderProgram);
	glDeleteTextures(1, &texid);
	glDeleteVertexArrays(1, &vao);
}