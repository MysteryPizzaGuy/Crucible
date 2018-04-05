#pragma once
#include <chrono>
class Stopwatch
{
public:
	Stopwatch();
	Stopwatch(bool start);
	void stop();
	void begin();
	std::chrono::nanoseconds getNanoDuration() const;
	std::chrono::microseconds getMicroDuration() const;
	std::chrono::milliseconds getMilliDuration() const;
	std::chrono::seconds getSecDuration() const;

private:
	std::chrono::high_resolution_clock::time_point startpoint;
	std::chrono::high_resolution_clock::time_point endpoint;
};

