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

	void update();
	//OverLoadedVariant
	void update(double _DeltaTime);

	void DebugRotate(bool _isDebug, int Scalar, double _DT);

	void SetObjectColor(glm::vec3 ColoValues);

	void SetTexture(std::string _path, float _texScale);

private:

	//Color
	glm::vec3 m_objectColor;
	GLuint m_texture;
	float m_textureScale;

};


#endif // !CCube
