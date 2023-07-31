#pragma once

#ifndef STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#endif // !STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include <assimp/config.h>

#include <iostream>
#include <vector>
#include <string.h>
#include <filesystem>
#include <Windows.h>


#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


#include "Mask.h"
#include "Shader.h"
#include "Camera.h"
#include "Mesh.h"
#include"Model.h"
#include <locale.h>