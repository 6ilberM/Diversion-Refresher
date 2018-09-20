#ifndef CSHAPE
#define CSHAPE

#include <iostream>
#include <glew.h>
#include <glfw3.h>
#include <glm.hpp>
#include <vector>
#include <glm/gtx/transform.hpp>

#include "Camera.h"

class CShape
{
public:
	CShape();
	~CShape();

protected:
	enum { POSITION, INDICES, NORMALS, NUM_OF_BUFFERS };

	/*Vertice information*/
	std::vector<glm::vec3> Vertices;
	std::vector<glm::vec3> Normals;
	std::vector<unsigned int> Indices;

	/*Object Information*/
	glm::vec3 m_position;
	glm::vec3 m_scale;

	/*Matrices*/
	glm::mat4 m_scaleMatrix;
	glm::mat4 m_positionMatrix;
	glm::mat4 m_modelMatrix;
	glm::mat4 m_rotationMatrix;

	/*Binds*/
	GLuint VertexArrayObject;
	GLuint BufferArrayObject[NUM_OF_BUFFERS];
};

#endif