#pragma once

#include "Shader.h"
#include "Mesh.h"
#include "Mask.h" //Для структуры полигонов

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include <SOIL.h>
#include <vector>
#include <string>	


class Model {
public:
	std::vector<PolygonS> polygons;

	Model(std::string path) {
		loadModel(path);
	}

	void Draw(Shader shader);
	std::vector<Mesh> meshes;//вернуть в приват
private:
	/*  Данные модели  */
	
	std::string directory;
	std::vector<Texture> textures_loaded;
	/*  Методы   */
	void loadModel(std::string path);
	void processNode(aiNode* node, const aiScene* scene);
	Mesh processMesh(aiMesh* mesh, const aiScene* scene);
	std::vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType, std::string typeName);
};

unsigned int TextureFromFile(const char* path, const std::string& directory);