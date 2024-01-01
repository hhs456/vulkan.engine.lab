#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include<string>

namespace Toolkid {
	class TkWindow {
	public:
		TkWindow(int w, int h, std::string name);
		~TkWindow();
		bool shouldClose() { return glfwWindowShouldClose(window);
		}
	private:
		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;
	};
}