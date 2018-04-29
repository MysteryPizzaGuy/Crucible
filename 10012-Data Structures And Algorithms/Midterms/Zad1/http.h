#include <string>
#pragma once
class http
{
public:
	http(std::string url);
	http(std::string url, int port);
	std::string get() const;
	std::string post() const;

private:
	std::string getRandString() const;
private:
	std::string url;
	int port;
};

