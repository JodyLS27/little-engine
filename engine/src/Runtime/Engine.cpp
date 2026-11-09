//
// Created by Jody Stocks on 4/3/26.
// Description: Holds the main game loop and represents the engine application lifecyle.
//

#include "Runtime/Engine.hpp"
#include "windowing/IWindow.hpp"


namespace engine::runtime
{
	bool Engine::Initialize()
	{
		LL_LOG_INFO("Engine Application initialize - Window:Complete");
		
		// Create a windowing data struct to pass through
		engine::windowing::WindowProperties windowProperties{ 1920, 1080, "Little Engine" };
		
		m_upWindow = engine::windowing::IWindow::Create(windowProperties);


		// TODO: Pass these through from the editor !
		/*m_upWindow = windowing::
		m_upWindow->Initialize();

		if (!m_upWindow->is_open())
		{
			LL_LOG_ERROR("ENGINE::CORE::APP:INITIALIZE: The window is NOT Open");
			return false;
		}*/

		LL_LOG_INFO("Engine Application initialized");

		return true;
	}

	void Engine::Run()
	{
		LL_LOG_INFO("engine main loop running");
		while (m_upWindow->IsOpen())
		{
			// TODO: Setup pollEvents
			// TODO: Do Sprite Drawing
			// TODO: Do window clear
			// TODO: Do Window Draw
		}

		LL_LOG_INFO("engine main loop ended");
	}

	void Engine::Shutdown()
	{
		LL_LOG_INFO("engine subsystems shutting down!");
		//m_upWindow->Shutdown();
		m_upWindow.reset();
	}
}