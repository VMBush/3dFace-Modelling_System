#pragma once
#include <Python.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <vector>
#include <string>

#include "Shader.h"

extern std::vector<std::pair<int, int>> TESSELATION;

struct PolygonS {
	glm::vec3 vertex1;
	glm::vec3 vertex2;
	glm::vec3 vertex3;
	glm::vec3 meanColor;
	std::vector<PolygonS*> neighbours; //vector polygon*
	glm::vec3 coef;
};

class Mask {
public:
	std::vector <PolygonS> polygons;

	GLfloat translationX = 4.0f;

	Mask(std::string fPath);

	glm::mat4 getModelMatrix(glm::mat4 modelModel);

	void Draw(Shader shader);

	GLfloat* vertices;

private:

	unsigned int VBO, VAO, EBO;

	glm::mat4 model;

	PyObject* run_py(std::string fPath);

	GLfloat* getVertices_fromPy(PyObject*, int& size);

	GLuint* getIndices(std::vector<std::pair<int, int>> tess, int& size);

	void setFrontFlags();
	void setPolygons();
	void setupMask();
	

	int verticesSize;
	int verticesLineSize;

	std::vector<glm::vec3> verticesVector;

	int indicesSize;
	GLuint* indices;

};