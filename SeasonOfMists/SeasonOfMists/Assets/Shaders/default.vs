#version 330 core
layout(location = 0) in vec3 Vertex_Position;
uniform mat4 MVP;


void main()
{
		gl_Position = MVP * vec4(Vertex_Position,1);
		// gl_Position = vec4(Vertex_Position,1);
}