#include "Program.h"
#include "../support/Utils.cpp"

void TLang::Program::compile(const std::string& file, const char separator)
{
	lines = split(file, separator);
	removeComments();
}

void TLang::Program::removeComments()
{
	for (unsigned i = 0; i < lines.size(); i++)
	{
		std::string line = lines[i];
		if (line.rfind("//", 0) == 0 || line == "//") {
			lines.erase(lines.begin() + i);
			i--;
			continue;
		}
		const int commentIndex = line.find("//");
		if(commentIndex == -1)
		{
			continue;
		}
		const std::string lineWithoutComment = line.substr(0, commentIndex);
		lines[i] = lineWithoutComment;
	}
}
