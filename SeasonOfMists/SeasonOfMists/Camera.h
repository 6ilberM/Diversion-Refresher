#ifndef CAMERA_H
#define CAMERA_H
#include<iostream>
#include <glew.h>
#include<glfw3.h>
#include <glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
class CCamera
{
public:
	CCamera();
	~CCamera();

	glm::mat4 ViewMatrix;
	glm::mat4 ProjectMatrix;

	glm::vec3 UpVector;
	glm::vec3 RightVector;
	glm::vec3 FrontVector;
	glm::vec3 m_position;

private:

};

#endif // !CAMERA_H
