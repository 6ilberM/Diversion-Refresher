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

	glm::vec3 m_UpVector;
	glm::vec3 m_RightVector;
	glm::vec3 m_FrontVector;
	glm::vec3 m_Localposition;
	glm::vec3 m_Worldposition;

	void Observe(glm::vec3 _LocOrigin);

private:

};

#endif // !CAMERA_H
