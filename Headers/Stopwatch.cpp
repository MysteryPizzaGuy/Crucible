#include "Stopwatch.h"



Stopwatch::Stopwatch()
{
}

Stopwatch::Stopwatch(bool start)
{
	if (start == true) {
		begin();
	}
	else
	{
		Stopwatch();
	}
}

void Stopwatch::stop()
{
	endpoint = std::chrono::high_resolution_clock::now();
}

void Stopwatch::begin()
{
	startpoint = std::chrono::high_resolution_clock::now();
}

std::chrono::nanoseconds Stopwatch::getNanoDuration() const
{
	return std::chrono::duration_cast<std::chrono::nanoseconds>(endpoint - startpoint);
}

std::chrono::milliseconds Stopwatch::getMilliDuration() const
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(endpoint-startpoint);
}
std::chrono::seconds Stopwatch::getSecDuration() const
{
	return std::chrono::duration_cast<std::chrono::seconds>(endpoint - startpoint);
}
std::chrono::microseconds Stopwatch::getMicroDuration() const
{
	return std::chrono::duration_cast<std::chrono::microseconds>(endpoint - startpoint);
}
