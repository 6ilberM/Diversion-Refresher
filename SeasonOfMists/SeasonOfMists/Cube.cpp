#include "Cube.h"

//float vertices[] = {
//	-0.5f, -0.5f, 0.0f,
//	 0.5f, -0.5f, 0.0f,
//	 0.0f,  0.5f, 0.0f
//};

CCube::CCube(glm::vec3 Dimensions, glm::vec3 Position)
{
	//Vertices.push_back(glm::vec3(vertices[0], vertices[1], vertices[2]));
	//Vertices.push_back(glm::vec3(vertices[3], vertices[4], vertices[5]));
	//Vertices.push_back(glm::vec3(vertices[6], vertices[7], vertices[8]));

	//Vertices.push_back(glm::vec3(-1, 1, -1));
	//Vertices.push_back(glm::vec3(-1, -1, -1));
	//Vertices.push_back(glm::vec3(1, 1, -1));

	glBindVertexArray(VertexArrayObject);
	glBindBuffer(GL_ARRAY_BUFFER, BufferArrayObject[POSITION]);
	glBufferData(GL_ARRAY_BUFFER, Vertices.size() * sizeof(glm::vec3), &Vertices[0], GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);

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
	m_modelMatrix = m_positionMatrix * m_scaleMatrix;

	//Now lets make that sweet MVP matrix
	glm::mat4 mvp = Camera.ProjectMatrix * Camera.ViewMatrix * m_modelMatrix;

	//and now hand it over to our shader to use
	GLuint MatrixID = glGetUniformLocation(Shader, "MVP");
	glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mvp[0][0]);

	//glActiveTexture(GL_TEXTURE0);
	//glBindTexture(GL_TEXTURE_2D, textures[0]);

	//Draw the polys
	glBindVertexArray(VertexArrayObject);

	glDrawArrays(GL_TRIANGLES, 0, Vertices.size());
	//glDrawElements(GL_LINES, Indices.size(), GL_UNSIGNED_INT, (GLvoid*)0);

	glBindVertexArray(0);
}
