#pragma once
#include "Core.h"

namespace Automatica {

	class AUTOMATICA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//To be defined in CLIENT
	Application* CreateApplication();
}


