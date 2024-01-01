#include "win_app.hpp"

namespace Toolkid {
	void WinApp::run() {
		while(!tkWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}