#version 330 core

in vec3 FragPos;
in vec2 TexCoord;
in float Front;
out vec4 color;
flat in int E;

uniform sampler2D ourTexture;

void main()
{
    if (Front == 1)
    {
        color = texture(ourTexture, TexCoord);
    }
    else
        color = vec4(1.0f, 1.0f, 1.0f, 1.0f);
    //color = vec4(FragPos.x, -FragPos.y * 3, FragPos.z, 1); // Устанавливает все 4 компоненты вектора равными 1.0f
}