#include "Timer.h"

const long& TLang::Timer::endTimer(const bool sendMessage)
{
	endTime = std::chrono::high_resolution_clock::now();
	const auto difference = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
	this->difference = difference.count();

	std::cout << "Timer " << name << " has ended. It was alive for " << difference.count() << " microseconds.\n";

	return this->difference;
}