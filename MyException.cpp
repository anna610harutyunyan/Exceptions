#include <iostream>
#include <exception>


class MyException :public std::exception
{
	std::string m_exception;

public:
	MyException( const std::string& exception) :m_exception(exception) {};

	const char* what() const noexcept override
	{
		return m_exception.c_str();
	}
};

int main(int argc, char** argv)
{
	try {


		throw MyException("My error:  ");

	}
	catch (const MyException& m_exception)
	{
		std::cout << "Exception " << m_exception.what() << std::endl;
	}


	return 0;
}
