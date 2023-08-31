#pragma once

#ifdef KM_PLATFORM_WINDOWS

extern Kami::Application* Kami::CreateApplication();

int main(int argc, char** argv) {
	// Creates application, runs it, and deletes it (CreateApplication is in SandboxApp.cpp)
	auto app = Kami::CreateApplication();
	app->Run();
	delete app;
}

#endif