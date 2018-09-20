#ifndef CCUBE
#define CCUBE

#include <btBulletDynamicsCommon.h>
#include <SOIL.h>
#include <string>
#include "cShape.h"

class CCube :public CShape
{
public:
	CCube(glm::vec3 Dimensions, glm::vec3 Position);
	~CCube();

	void Render(GLuint& Shader, CCamera& Camera);

private:

};


#endif // !CCube
