#pragma once
#include <iostream>
#include <vector>

namespace TLang
{
	class Program
	{
		std::vector<std::string> lines;
		const char* name;
	public:
		Program(const char* name)
			: name(name){
			std::cout << "Created program with name '" << name << "'.\n";
		}
		
		void compile(const std::string& file, const char separator);
	private:
		void removeComments();
	};
}
