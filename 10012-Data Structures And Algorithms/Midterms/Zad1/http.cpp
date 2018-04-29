#include "http.h"
#include <random>

http::http(std::string url)
{
	this->url = url;
	port = 80;
}

http::http(std::string url, int port)
{
	this->url = url;
	this->port = port;
}

std::string http::get() const
{
	return getRandString();
}

std::string http::post() const
{
	return getRandString();
}

std::string http::getRandString() const
{
	std::string s;
	std::random_device device;
	std::mt19937 gen(device());
	std::uniform_int_distribution<int> dis(65, 90);
	for (size_t i = 0; i < 10; i++)
	{
		s = s + static_cast<char>(dis(gen));
	}
	return s;
}
