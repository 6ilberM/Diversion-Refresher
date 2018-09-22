#include "Cube.h"

float vertices[] = {
	-0.5f, -0.5f, 0.0f,
	 0.5f, -0.5f, 0.0f,
	 0.0f,  0.5f, 0.0f
};

CCube::CCube(glm::vec3 Dimensions, glm::vec3 Position)
{
	m_objectColor = glm::vec3(1, 0, 0);
	m_position = Position;
#pragma region Verts and stuff
	/*FF*/
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, Dimensions.z));

	/*BF*/
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, -Dimensions.z));

	/*RF*/
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, -Dimensions.z));

	/*LF*/
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, Dimensions.z));

	/*TF*/
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, Dimensions.y, Dimensions.z));

	/*DF*/
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(Dimensions.x, -Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, -Dimensions.z));
	Vertices.push_back(glm::vec3(-Dimensions.x, -Dimensions.y, Dimensions.z));

	/*Filling in Normals*/
	Normals.push_back(glm::vec3(0, 0, 1));
	Normals.push_back(glm::vec3(0, 0, 1));
	Normals.push_back(glm::vec3(0, 0, 1));
	Normals.push_back(glm::vec3(0, 0, 1));
	Normals.push_back(glm::vec3(0, 0, 1));
	Normals.push_back(glm::vec3(0, 0, 1));

	Normals.push_back(glm::vec3(0, 0, -1));
	Normals.push_back(glm::vec3(0, 0, -1));
	Normals.push_back(glm::vec3(0, 0, -1));
	Normals.push_back(glm::vec3(0, 0, -1));
	Normals.push_back(glm::vec3(0, 0, -1));
	Normals.push_back(glm::vec3(0, 0, -1));

	Normals.push_back(glm::vec3(1, 0, 0));
	Normals.push_back(glm::vec3(1, 0, 0));
	Normals.push_back(glm::vec3(1, 0, 0));
	Normals.push_back(glm::vec3(1, 0, 0));
	Normals.push_back(glm::vec3(1, 0, 0));
	Normals.push_back(glm::vec3(1, 0, 0));

	Normals.push_back(glm::vec3(-1, 0, 0));
	Normals.push_back(glm::vec3(-1, 0, 0));
	Normals.push_back(glm::vec3(-1, 0, 0));
	Normals.push_back(glm::vec3(-1, 0, 0));
	Normals.push_back(glm::vec3(-1, 0, 0));
	Normals.push_back(glm::vec3(-1, 0, 0));

	Normals.push_back(glm::vec3(0, 1, 0));
	Normals.push_back(glm::vec3(0, 1, 0));
	Normals.push_back(glm::vec3(0, 1, 0));
	Normals.push_back(glm::vec3(0, 1, 0));
	Normals.push_back(glm::vec3(0, 1, 0));
	Normals.push_back(glm::vec3(0, 1, 0));

	Normals.push_back(glm::vec3(0, -1, 0));
	Normals.push_back(glm::vec3(0, -1, 0));
	Normals.push_back(glm::vec3(0, -1, 0));
	Normals.push_back(glm::vec3(0, -1, 0));
	Normals.push_back(glm::vec3(0, -1, 0));
	Normals.push_back(glm::vec3(0, -1, 0));

	//Setting the Texture from here allows the object to destroy the Data of the texture avoiding memory leaks.
	this->SetTexture("Assets/Textures/Tiles.jpg", 1.0f);


#pragma endregion

	glBindVertexArray(VertexArrayObject);
	glBindBuffer(GL_ARRAY_BUFFER, BufferArrayObject[POSITION]);
	glBufferData(GL_ARRAY_BUFFER, Vertices.size() * sizeof(glm::vec3), &Vertices[0], GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);

	glBindVertexArray(0);
}

CCube::~CCube()
{

}

void CCube::Render(GLuint & Shader, CCamera & Camera)
{
	glUseProgram(Shader);

	//Lets make our models matrix first
	m_positionMatrix = glm::translate(m_position);
	m_scaleMatrix = glm::scale(m_scale);
	m_modelMatrix = m_positionMatrix * m_scaleMatrix* m_rotationMatrix;



	//Now lets make that sweet MVP matrix
	glm::mat4 mvp = Camera.ProjectMatrix * Camera.ViewMatrix * m_modelMatrix;

	//and now hand it over to our shader to use
	glUniformMatrix4fv(glGetUniformLocation(Shader, "Model"), 1, GL_FALSE, &m_modelMatrix[0][0]);
	glUniformMatrix4fv(glGetUniformLocation(Shader, "View"), 1, GL_FALSE, &Camera.ViewMatrix[0][0]);
	glUniformMatrix4fv(glGetUniformLocation(Shader, "Projection"), 1, GL_FALSE, &Camera.ProjectMatrix[0][0]);
	glUniform3f(glGetUniformLocation(Shader, "ObjectColor"), m_objectColor.x, m_objectColor.y, m_objectColor.z);

	//RegularShader uniform
	GLuint MatrixID = glGetUniformLocation(Shader, "MVP");
	glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mvp[0][0]);

	//glActiveTexture(GL_TEXTURE0);
	//glBindTexture(GL_TEXTURE_2D, textures[0]);

	//Draw the polys
	glBindVertexArray(VertexArrayObject);
	glBindTexture(GL_TEXTURE_2D, m_texture);
	glDrawArrays(GL_TRIANGLES, 0, Vertices.size());
	glBindVertexArray(0);
}

void CCube::update()
{

}

void CCube::update(double _DeltaTime)
{
	DebugRotate(true,180, _DeltaTime);
}

//DebugFeatures 

//Function to rotate object for testing purposes.
void CCube::DebugRotate(bool _isDebug, int Scalar, double _DT)
{
	float temp_v = 1* (float)_DT;
	temp_v *= Scalar;

	m_rotationMatrix = glm::rotate(m_rotationMatrix, glm::radians(temp_v), glm::vec3(0, 1, 0));
}

//Setters
void CCube::SetObjectColor(glm::vec3 _colorValues)
{
	m_objectColor = _colorValues;
}

void CCube::SetTexture(std::string _path, float _texScale)
{
	glBindTexture(GL_TEXTURE_2D, m_texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	int width;
	int height;
	int Channels;
	unsigned char* data = SOIL_load_image(_path.c_str(), &width, &height, &Channels, 0);

	if (data)
	{
		std::cout << "texture success" << std::endl;
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
		delete data;
	}
	else
	{
		std::cout << "texture failed" << std::endl;
	}

	/*Texture coords*/
	m_textureScale = _texScale;
	UV_Coords.push_back(glm::vec2(0, m_textureScale));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));

	UV_Coords.push_back(glm::vec2(0, m_textureScale));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));

	UV_Coords.push_back(glm::vec2(0, m_textureScale));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));

	UV_Coords.push_back(glm::vec2(0, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(0, m_textureScale));

	UV_Coords.push_back(glm::vec2(0, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(0, m_textureScale));

	UV_Coords.push_back(glm::vec2(0, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, m_textureScale));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));
	UV_Coords.push_back(glm::vec2(m_textureScale, 0));
	UV_Coords.push_back(glm::vec2(0, 0));
	UV_Coords.push_back(glm::vec2(0, m_textureScale));

	glBindVertexArray(VertexArrayObject);
	glBindBuffer(GL_ARRAY_BUFFER, BufferArrayObject[TEXTURE_COORD]);
	glBufferData(GL_ARRAY_BUFFER, UV_Coords.size() * sizeof(glm::vec2), &UV_Coords[0], GL_STATIC_DRAW);
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(2);
	glBindVertexArray(0);

}
