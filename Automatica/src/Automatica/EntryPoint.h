#pragma once

#ifdef AM_PLATFORM_WINDOWS

extern Automatica::Application* Automatica::CreateApplication();

int main(int argc, char** argv)
{
	printf("Automatica Engine");
	auto app = Automatica::CreateApplication();
	app->Run();
	delete app;
}

#endif