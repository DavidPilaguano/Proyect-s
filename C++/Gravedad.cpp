#include <GLFW/glfw3.h>

GLFWwindow* StartGLFW();

int main() {
    GLFWwindow* window = StartGLFW();

    if (!window) return -1;

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}

GLFWwindow* StartGLFW() {
    if (!glfwInit()) return nullptr;

    GLFWwindow* window = glfwCreateWindow(640, 480, "Ventana GLFW", nullptr, nullptr);
    if (!window) {
        glfwTerminate();
        return nullptr;
    }

    glfwMakeContextCurrent(window);
    return window;
}
