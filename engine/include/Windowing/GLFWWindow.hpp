#pragma once

// ~ Engine Internal
#include "Windowing/IWindow.hpp"

// ~ Third Party Libraries
#include <GLFW/glfw3.h>


namespace engine::windowing
{
	class GLFWWindow : public IWindow
	{
	public:
		GLFWWindow(const WindowProperties& windowProperties);

		~GLFWWindow() override;

		// ~ Main window functions
		void OnUpdate() override;

		void Shutdown() override;
		// ~ End Main window functions

		bool IsOpen() const override;

		uint32_t GetWidth() const override { return m_uiWidth; }
		uint32_t GetHeight() const override { return m_uiHeight; }

		void* GetNativeWindowHandle() const override;

	private:
		GLFWwindow* m_RawGlfwWindow;

		uint32_t m_uiWidth{};
		uint32_t m_uiHeight{};

	};
}