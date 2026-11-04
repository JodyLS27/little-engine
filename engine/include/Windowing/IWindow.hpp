#pragma once

namespace engine::windowing
{
	class IWindow
	{
	protected:
		IWindow() {}

	public:
		virtual ~IWindow() = default;
		virtual void Initialize() = 0;

		// ~ Getters
		virtual uint32_t GetWidth() const = 0;
		virtual uint32_t GetHeight() const = 0;

		virtual void* GetNativeWindowHandle() const = 0;
		// ~ End Getters

	};

}