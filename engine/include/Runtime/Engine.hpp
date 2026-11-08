//
// Created by jodystocks on 4/3/26.
//

#pragma once

// ~ Engine Internal
#include "Core/Defines.hpp" // Defines are here so any project including engine/ gets the Requried macros
#include "Windowing/IWindow.hpp"

// ~ STL
#include <memory>

namespace engine::runtime
{
	class Engine
	{
	public:
		Engine() = default;
		~Engine() = default;

		// Setup any sub systems and internal classes
		bool Initialize();

		// Main engine loop that runs
		void Run();

		// used to destroy any objects and or subsystems
		void Shutdown();

	private:
		// IWindow will return a Unique Pointer to the correct windowing system based on the platform
		std::unique_ptr<windowing::IWindow> m_upWindow;
	};
}
