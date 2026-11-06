#pragma once

// ~ Third Party Libraries
#include <GLFW/glfw3.h>

// ~ Engine Internal
#include "Windowing/IWindow.hpp"

namespace engine::windowing
{
	class GLFWWindow : public IWindow
	{
	public:
		GLFWWindow(const WindowProperties& windowProperties);

		~GLFWWindow() override;

		void OnUpdate() override;

		uint32_t GetWidth() const override;
		uint32_t GetHeight() const override;

		void* GetNativeWindowHandle() const override;

	private:
		GLFWwindow* m_RawGlfwWindow;

		uint32_t m_uiWidth{};
		uint32_t m_uiHeight{};

	};
}