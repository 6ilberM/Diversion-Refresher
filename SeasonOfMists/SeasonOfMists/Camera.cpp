#include "Camera.h"

CCamera::CCamera()
{
	m_UpVector = glm::vec3(0, 1, 0);
	m_Localposition = glm::vec3(-6, 1.f, 0);//Why this val
	m_RightVector = glm::vec3(1, 0, 0);
	m_FrontVector = glm::vec3(0, 0, -1);

	//Make ProjMat
	ProjectMatrix = glm::perspective(glm::radians(45.0f), (float)740 / (float)680, 0.1f, 10000.0f);

	ViewMatrix = glm::lookAt(
		m_Localposition,	//Camera is where now?
		m_FrontVector,	//Camera looks at what now?
		m_UpVector	//Camera head is what way now?
	);
}

CCamera::~CCamera()
{
}

//CameraFunctionality

//ObserveObject ToDO: Overload this function from cShape
void CCamera::Observe(glm::vec3 _LocOrigin)
{
	ViewMatrix = glm::lookAt(m_Worldposition, _LocOrigin, m_UpVector);
}