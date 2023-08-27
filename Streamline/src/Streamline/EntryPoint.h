#pragma once


#ifdef SL_PLATFORM_WINDOWS

extern Streamline::Application* Streamline::CreateApplication();

int main(int argc, char** argv)
{
	printf("Streamline  engine");
	auto app = Streamline::CreateApplication();
	app->Run();
	delete app;
}


#endif
