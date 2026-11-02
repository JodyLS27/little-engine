//
// Created by jodystocks on 4/3/26.
//

#pragma once

#include <memory>
#include "Core/Defines.hpp" // Defines are here so any project including engine/ gets the Requried macros
#include "Windowing/Window.hpp"

namespace engine::runtime
{
	class Engine
	{
	public:
		Engine();
		~Engine();

		// Setup any sub systems and internal classes
		bool Initialize();

		// Main engine loop that runs
		void Run();

		// used to destroy any objects and or subsystems
		void Shutdown();

	private:
		std::unique_ptr<windowing::Window> m_upWindow;
	};
}
