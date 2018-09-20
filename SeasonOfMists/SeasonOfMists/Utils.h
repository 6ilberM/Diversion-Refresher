#ifndef UTILS_H
#define UTILS_H
#include <btBulletCollisionCommon.h>
#include<glm.hpp>
#include <glm/gtc/quaternion.hpp>

/*Conversion functions By David*/

glm::vec3 vec3Conversion_bt_to_glm(btVector3 Val);
btVector3 vec3Conversion_glm_to_bt(glm::vec3 Val);

glm::quat quatConversion_bt_to_glm(btQuaternion val);
btQuaternion quatConversion_glm_to_bt(glm::quat val);
#endif // !UTILS_H
