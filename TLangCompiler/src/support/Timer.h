#pragma once
#include<iostream>
#include<chrono>

namespace TLang
{
	class Timer
	{
	private:
		std::chrono::steady_clock::time_point startTime, endTime;
		const char* name;

		long long difference;

	public:
		Timer(const char* name = "")
			: startTime(std::chrono::high_resolution_clock::now()), name(name)
		{}

		inline const long& endTimer(const bool sendMessage = true);

	};
}

