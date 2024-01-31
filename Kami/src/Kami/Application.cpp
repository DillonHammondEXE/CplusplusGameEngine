#include "Application.h"

#include "Kami/Events/ApplicationEvent.h"
#include "Kami/Log.h"

namespace Kami {

	Application::Application() {}

	Application::~Application() {}


	void Application::Run()
	{
		KM_INFO("This is the application!");
		WindowResizeEvent e(1280, 720);

		if (e.IsInCategory(EventCategoryApplication))
		{
			KM_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			KM_TRACE(e);
		}

		while (true);
	}
}