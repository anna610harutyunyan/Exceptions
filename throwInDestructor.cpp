#include <iostream>

class A
{
public:
	A()
	{
		std::cout << "Call A constructor \n";
	}
	~A()
	{
		std::cout << "Call A destructor \n";
		throw "exception in destructor ";
	}
};


int main(int argc, char** argv)
{
	try
	{
		A obj;
	
	}
	catch (const char* textException)
	{
		std::cout << "Exception: " << textException << std::endl;
	}

	return 0;
}