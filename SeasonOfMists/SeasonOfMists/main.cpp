/*
 _____                              _____  __  ___  ___          _
/  ___|                            |  _  |/ _| |  \/  |         | |
\ `--.  ___  __ _ ___  ___  _ __   | | | | |_  | .  . |_   _ ___| |_ ___
 `--. \/ _ \/ _` / __|/ _ \| '_ \  | | | |  _| | |\/| | | | / __| __/ __|
/\__/ /  __/ (_| \__ \ (_) | | | | \ \_/ / |   | |  | | |_| \__ \ |_\__ \
\____/ \___|\__,_|___/\___/|_| |_|  \___/|_|   \_|  |_/\__, |___/\__|___/
														__/ |
													   |___/
*/

#include <btBulletDynamicsCommon.h>
#include <glew.h>
#include <GLFW/glfw3.h>
#include<iostream>

#include <vld.h>
//My includes

using namespace std;
GLFWwindow* Main_Window;
GLuint Default_Shader;

//btDiscreteDynamicsWorld* m_world;

//In case of Exit
void KeyboardInput(GLFWwindow *_window, int _key, int _scancode, int _action, int mods)
{
	if (_key == GLFW_KEY_ESCAPE && _action == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(_window, true);
	}

}

int init()
{
	if (!glfwInit())
	{
		//init failed
		return -1;
	}

	Main_Window = glfwCreateWindow(1280, 720, "Season Of Mists", NULL, NULL);

	if (!Main_Window)
	{
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(Main_Window);

	GLenum GlewChk = glewInit();
	if (GLEW_OK != GlewChk)
	{
		return -1;
		glfwTerminate();
	}

	glEnable(GL_DEPTH_TEST);

	glfwSetKeyCallback(Main_Window, KeyboardInput);

}


int main()
{
	init();
	while (!glfwWindowShouldClose(Main_Window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

		glfwSwapBuffers(Main_Window);
		glfwPollEvents();
	}
	//you need this to avoid memory leaks 6 of them to be precise
	glfwTerminate();
}