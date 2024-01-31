#pragma once

#ifdef KM_PLATFORM_WINDOWS

extern Kami::Application* Kami::CreateApplication();

int main(int argc, char** argv) {
	
	Kami::Log::Init();
	KM_CORE_WARN("Initialized Log!");
	int a = 5;
	KM_INFO("Hello! Var={0}", a);
	
	
	// Creates application, runs it, and deletes it (CreateApplication is in SandboxApp.cpp)
	auto app = Kami::CreateApplication();
	app->Run();
	delete app;
}

#endif