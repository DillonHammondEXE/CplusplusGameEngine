#include "kmpch.h"
#include "Application.h"

#include "Kami/Events/ApplicationEvent.h"
#include "Kami/Log.h"

namespace Kami {

	Application::Application() 
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {}


	void Application::Run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}