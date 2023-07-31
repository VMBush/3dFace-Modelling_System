#version 330 core
out vec4 FragColor;

in vec2 TexCoords;
in vec3 FragPos;
in vec3 Normal;

uniform sampler2D teture_diffuse1;

struct Material
{
    vec3 diffuse;
    vec3 specular;
    float shininess;
};

struct Light
{
    vec3 position;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;

    float constant;
    float linear;
    float quadratic;
};


uniform Material material;
uniform Light light;
uniform vec3 cameraPos;
uniform int lightCount;
uniform Light pointLights[9];



void main()
{
    vec3 res;
    

    for (int i = 0; i < lightCount; i++)
    {
		float distance = length(FragPos - pointLights[i].position);
		float attenuation = 1.0f / (pointLights[i].constant + pointLights[i].linear * distance +
					pointLights[i].quadratic * (distance * distance));

		vec3 ambient = vec3(0.1f) * material.diffuse * pointLights[i].ambient;

		vec3 norm = normalize(Normal);
		vec3 lightDir = normalize(pointLights[i].position - FragPos);

		float diff = max(dot(norm, lightDir), 0.0f);
		vec3 diffuse = vec3(1.0f) * material.diffuse * diff * pointLights[i].diffuse;

		vec3 viewDir = normalize(vec3(cameraPos - FragPos));
		vec3 reflectDir = reflect(-lightDir, norm);
		float spec = pow(max(dot(viewDir, reflectDir), 0.0f), float(material.shininess));
		vec3 specular = material.specular * spec * pointLights[i].specular * 0.1;

        res += (ambient + diffuse + specular) * attenuation;
	}
    
   

    FragColor = vec4(res, 1.0f) + vec4(0.2f, 0.2f, 0.2f, 1.0f);
    
    //FragColor = texture(teture_diffuse1, TexCoords) + vec4(0.2f, 0.2f, 0.2f, 1.0f);
}