#include "Utils.h"

glm::vec3 vec3Conversion_bt_to_glm(btVector3 Val)
{
	return glm::vec3(Val.getX(), Val.getY(), Val.getZ());
}

btVector3 vec3Conversion_glm_to_bt(glm::vec3 Val)
{
	return btVector3(Val.x, Val.y, Val.z);
}

glm::quat quatConversion_bt_to_glm(btQuaternion val)
{
	glm::quat ToReturn;
	ToReturn.x = val.getX();
	ToReturn.y = val.getY();
	ToReturn.z = val.getZ();
	ToReturn.w = val.getW();
	return ToReturn;
}

btQuaternion quatConversion_glm_to_bt(glm::quat val)
{
	btQuaternion ToReturn;
	ToReturn.setX(val.x);
	ToReturn.setY(val.y);
	ToReturn.setZ(val.z);
	ToReturn.setW(val.w);
	return ToReturn;
}