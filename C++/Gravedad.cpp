#include <iostream>
#include <GLFW/glfw3.h>

GLFWwinow* StartGLWF();

int main(){
	
	GLFWwindow* window= StartGLWF();
	while(!glfwWindowShouldClose(window))
	
	glfwSwapBuffers(window);
	glfwPollEvents();
}

GLFWwinow* StartGLWF(){
	if (!glfwInit()){
		std::cerr<<"Falla en la glfw"<<std::endl;
		return nullptr;
	}
	GLFWwindow* window=glfwCreateWindow(800,600 "gravity", NULL, NULL);
	return window;
}
