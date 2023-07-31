#version 330 core

struct Material
{
    sampler2D diffuse;
    sampler2D specular;
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

struct Projector
{
    vec3 direction;
    float innerCutoff;
    float outerCutoff;
};

in vec3 FragPos;
in vec3 Normal;
in vec2 TexCoords;

out vec4 color;

uniform Material material;
uniform Light light;
uniform Projector projector;
uniform vec3 cameraPos;

void main()
{
    float distance = length(FragPos - light.position);
    float attenuation = 1.0f / (light.constant + light.linear * distance +
                light.quadratic * (distance * distance));

    vec3 ambient = vec3(texture(material.diffuse, TexCoords)) * light.ambient;

    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(light.position - FragPos);

    float diff = max(dot(norm, lightDir), 0.0f);
    vec3 diffuse = vec3(texture(material.diffuse, TexCoords)) * diff * light.diffuse;

    vec3 viewDir = normalize(vec3(cameraPos - FragPos));
    vec3 reflectDir = reflect(-lightDir, norm);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0f), material.shininess);
    vec3 specular = vec3(texture(material.specular, TexCoords)) * spec * light.specular;

    //Projector
    vec3 frontDir = normalize(projector.direction);
    float theta = dot(frontDir, -viewDir);
    if (theta > projector.outerCutoff)
    {
        float I = 1.0f;
        if (theta < projector.innerCutoff)
        {
            I = (theta - projector.outerCutoff) / (projector.innerCutoff - projector.outerCutoff);
        }
        ambient += 5*I*ambient;
        diffuse += 5*I*diffuse;
    }
   

    color = vec4((ambient + diffuse + specular) * attenuation, 1.0f);

}