#include "tk_window.hpp"

namespace Toolkid {
	TkWindow::TkWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{name}
	{
		initWindow();
	}
	TkWindow::~TkWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}
	void TkWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}
