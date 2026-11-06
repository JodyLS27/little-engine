#pragma once

#include <string>
#include <memory>

namespace engine::windowing
{
	struct WindowProperties
	{
		uint32_t Width{ 1280 };
		uint32_t Height{ 720 };
		std::string WindowTitle{ "Little Engine" };
	};


	class IWindow
	{

	public:
		virtual ~IWindow() = default;

		virtual void OnUpdate() = 0;

		// ~ Getters
		virtual uint32_t GetWidth() const = 0;
		virtual uint32_t GetHeight() const = 0;

		virtual void* GetNativeWindowHandle() const = 0;
		// ~ End Getters

		static std::unique_ptr<IWindow> Create(const WindowProperties& Props = WindowProperties());
	};

}