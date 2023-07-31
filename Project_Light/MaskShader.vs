#version 330 core
layout(location = 0) in vec3 position;
layout(location = 1) in float front;

out vec3 FragPos;
out vec2 TexCoord;
out float Front;
flat out int E;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;


/*
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;*/

void main()
{
    FragPos = vec3(model * vec4(position, 1.0f));
    gl_Position = projection * view * model * vec4(position, 1.0f);
    TexCoord = vec2(position.x, position.y);

    Front = front;
    if (position.x > 0.3)
    {
        E = 1;
    }
    else E = 0;
}