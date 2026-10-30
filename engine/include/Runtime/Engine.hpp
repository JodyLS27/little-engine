//
// Created by jodystocks on 4/3/26.
//

#pragma once

#include <memory>
#include "core/defines.hpp" // Defines are here so any project including engine/ gets the Requried macros
#include "rendering/window.hpp"

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
		std::unique_ptr<rendering::Window> m_upWindow;
	};
}
