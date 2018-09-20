#include "cShape.h"

CShape::CShape()
{
	/*Set inital values to avoid NULL cases*/
	m_position = glm::vec3(0, 1, 0);
	m_scale = glm::vec3(1, 1, 1);

	/*Create buffers*/
	glGenVertexArrays(1, &VertexArrayObject);
	glBindVertexArray(VertexArrayObject);

	glGenBuffers(NUM_OF_BUFFERS, BufferArrayObject);
	glBindVertexArray(0);

	std::cout << "Base class called" << std::endl;
}

CShape::~CShape()
{
}