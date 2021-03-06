#version 330 core
layout(location = 0) in vec3 Vertex_Position;
layout(location = 1) in vec3 Vertex_Normals;
layout(location = 2) in vec2 UV_Coords;

uniform mat4 Model;
uniform mat4 View;
uniform mat4 Projection;

out vec3 Normal;
out vec3 FragPos;
out vec2 TexCoords;


void main()
{
		gl_Position = Projection * View * Model * vec4(Vertex_Position,1);
		FragPos = vec3(Model * vec4(Vertex_Position,1.0f));
		//Normal = Vertex_Normals;
		Normal = mat3(transpose(inverse(Model))) * Vertex_Normals;
		TexCoords = UV_Coords;
}