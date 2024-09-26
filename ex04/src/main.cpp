#include "../inc/include.hpp"

std::string replacestr( const std::string &str, const std::string &oldstr, const std::string &newstr)
{
	std::string result = str;
	size_t pos = 0;

	while ((pos = result.find(oldstr, pos)) != std::string::npos)
	{
		result.erase(pos, oldstr.length());
		result.insert(pos, newstr);
		pos += newstr.length();
	}
	return result;
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "please enter right number of arguments <source_file> <target_string> <replacement_string>"<< std::endl;
		return 1;
	}

	std::string sourcefile = argv[1];
	std::string targetstring = argv[2];
	std::string replacementstring = argv[3];

	std::ifstream inputfile(sourcefile.c_str());
	if (!inputfile)
	{
		std::cerr << "cannot open " << sourcefile << std::endl;
		return 1;
	}

	std::string outputfile = sourcefile + ".replace";
	std::ofstream outputfilestream(outputfile.c_str());
	if (!outputfilestream)
	{
		std::cerr << "cannot create file";
		return 1;
	}
	
	std::string line;

	while(std::getline(inputfile, line))
	{
		std::string modifline = replacestr(line, targetstring, replacementstring);
		outputfilestream << modifline <<std::endl;
	}
	inputfile.close();
	outputfilestream.close();
	return 0;
}