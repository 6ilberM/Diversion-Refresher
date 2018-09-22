#version 330 core

in vec3 Normal;
in vec3 FragPos;

uniform vec3 ObjectColor;

out vec4 fragment;
in vec2 TexCoords;

uniform sampler2D Texture01;

void main(){
		float ambientStrength = 0.1f;
		vec3 ambient = ambientStrength * vec3(1,1,1);
		
		vec3 norm = normalize(Normal);
		vec3 lightDirection = vec3(0.3,0.6,0.2);
		
		float diff = max(dot(norm,lightDirection),0.0f);
		vec3 diffuse = diff * vec3(1,1,1);
		
		vec3 result = (ambient + diffuse) * ObjectColor;
		//fragment = vec4(result,1.0f);
		fragment = texture(Texture01,TexCoords) * vec4(result,1.0f);
		//fragment = vec4(ObjectColor,1.0f);
}