#include <Automatica.h>

class Sandbox : public Automatica::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Automatica::Application* Automatica::CreateApplication()
{
	return new Sandbox();
}