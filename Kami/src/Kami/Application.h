#pragma once
#include "Core.h"

#include "Window.h"
#include "Kami/LayerStack.h"
#include "Kami/Events/Event.h"
#include "Kami/Events/ApplicationEvent.h"


namespace Kami {

	class KAMI_API Application {

	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);

		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

