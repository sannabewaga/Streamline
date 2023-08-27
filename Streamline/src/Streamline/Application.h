#pragma once
#include "Core.h"

namespace Streamline {

	class STREAMLINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	//to be defined in a client

	Application* CreateApplication();

}

