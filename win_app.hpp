#pragma once

#include "tk_window.hpp"
#include "tk_pipeline.hpp"

namespace Toolkid {
	class WinApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		TkWindow tkWindow{ WIDTH, HEIGHT, "TK Window" };
		TkPipeline tkPipeline{ "shader/test_shader.vert.spv", "shader/test_shader.frag.spv" };
	};
}