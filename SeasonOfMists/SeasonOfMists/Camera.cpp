#include "Camera.h"

CCamera::CCamera()
{
	UpVector = glm::vec3(0, 1, 0);
	m_position = glm::vec3(0, 0, 5.0f);
	RightVector = glm::vec3(1, 0, 0);
	FrontVector = glm::vec3(0, 0, -1);

	//Make ProjMat
	ProjectMatrix = glm::perspective(glm::radians(45.0f), (float)740 / (float)680, 0.1f, 10000.0f);

	ViewMatrix = glm::lookAt(
		m_position,	//Camera is where now?
		m_position + FrontVector,	//Camera looks at what now?
		UpVector	//Camera head is what way now?
	);
}

CCamera::~CCamera()
{
}