#include <Kami.h>

class ExampleLayer : public Kami::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		KM_INFO("ExampleLayer::Update");
	}

	void OnEvent(Kami::Event& event) override
	{
		KM_TRACE("{0}", event);
	}

};

class Sandbox : public Kami::Application {
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

Kami::Application* Kami::CreateApplication()
{
	return new Sandbox();
}
