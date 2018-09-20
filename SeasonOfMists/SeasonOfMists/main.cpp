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
#include "cShape.h"
#include "ShaderLoader.h"
#include "Cube.h"

using namespace std;

//Globals
GLFWwindow* Main_Window;
//Shader
GLuint Default_Shader;

CShaderLoader* ShaderLoader;

//Objs
CCube *Cubo;
CCamera* Camara;
//btDiscreteDynamicsWorld* m_world;

void DestroyerofWorlds()
{
	glfwTerminate();

	delete Cubo;
	delete Camara;
}
//In case of Exit
void KeyboardInput(GLFWwindow *_window, int _key, int _scancode, int _action, int mods)
{
	if (_key == GLFW_KEY_ESCAPE && _action == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(_window, true);
	}
}

void WindowResizeCall(GLFWwindow* _window, int _width, int _height)
{
	glViewport(0, 0, _width, _height);
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
	glfwSetFramebufferSizeCallback(Main_Window, WindowResizeCall);

}

int OnBeginPlay()
{
	CShaderLoader shaderloader;
	std::cout << "COMPILING SHADERS..." << std::endl;
	Default_Shader = shaderloader.loadShaders("Assets/Shaders/default.vs", "Assets/Shaders/default.fs");

	Camara = new CCamera();

	Cubo = new CCube(glm::vec3(1, 1, 1), glm::vec3(0, 0, -2.0f));

	return 1;
}

//RenderLoop
void Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
	Cubo->Render(Default_Shader, *Camara);

}

int main()
{
	init();
	OnBeginPlay();
	while (!glfwWindowShouldClose(Main_Window))
	{
		Render();

		glfwSwapBuffers(Main_Window);
		glfwPollEvents();
	}

	//you need this to avoid memory leaks 6 of them to be precise
	DestroyerofWorlds();
}