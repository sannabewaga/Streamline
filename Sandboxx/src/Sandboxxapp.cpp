
#include <Streamline.h>

class Sandboxx : public Streamline::Application
{
public:
	Sandboxx()
	{

	}

	~Sandboxx()
	{

	}
};

Streamline::Application* Streamline::CreateApplication()
{
	return new Sandboxx();
}