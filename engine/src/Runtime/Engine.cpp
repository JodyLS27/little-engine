//
// Created by Jody Stocks on 4/3/26.
// Description: Holds the main game loop and represents the engine application lifecyle.
//

#include "Runtime/Engine.hpp"

engine::runtime::Engine::Engine()
{
	LL_LOG_INFO("Engine Application construction.");
}

engine::runtime::Engine::~Engine() {}

bool engine::runtime::Engine::Initialize()
{
	// TODO: Pass these through from the editor !
	m_upWindow = std::make_unique<windowing::Window>(800, 600, "Little Learners");
	m_upWindow->Initialize();
	LL_LOG_INFO("Engine Application initialize - Window:Complete");

	if (!m_upWindow->is_open())
	{
		LL_LOG_ERROR("ENGINE::CORE::APP:INITIALIZE: The window is NOT Open");
		return false;
	}

	LL_LOG_INFO("Engine Application initialized");

	return true;
}

void engine::runtime::Engine::Run()
{
	LL_LOG_INFO("engine main loop running");
	while (m_upWindow->is_open())
	{
		// TODO: Setup pollEvents
		// TODO: Do Sprite Drawing
		// TODO: Do window clear
		// TODO: Do Window Draw
	}

	LL_LOG_INFO("engine main loop ended");
}

void engine::runtime::Engine::Shutdown()
{
	LL_LOG_INFO("engine subsystems shutting down!");
	m_upWindow->Shutdown();
	m_upWindow.reset();
}
