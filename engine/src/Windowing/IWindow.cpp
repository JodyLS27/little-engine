#include "Windowing/IWindow.hpp"

#if defined(ENGINE_PLATFORM_WINDOWS)
	#include "Windowing/GLFWWindow.hpp"
#endif


namespace engine::windowing
{
	std::unique_ptr<IWindow> engine::windowing::IWindow::Create(const WindowProperties& Props)
	{
	#if defined(ENGINE_PLATFORM_WINDOWS)
		return std::make_unique<GLFWWindow>(Props);
	#endif
	}
}