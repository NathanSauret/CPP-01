#include "sed.hpp"

int	main(int argc, char **argv)
{
	std::string		filenameIn;
	std::string		filenameOut;
	std::string		to_find;
	std::string		to_replace;

	// check if enough parameters
	if (argc < 4)
	{
		std::cout << "Error: must have three parameters: <filename>, <string_to_find> and <string_to_replace>" << std::endl;
		return (1);
	}

	// get variables
	filenameIn = argv[1];
	filenameOut = filenameIn + ".replace";
	to_find = argv[2];
	to_replace = argv[3];

	// open infile
	std::ifstream	fileIn;
	if (open_infile(filenameIn, &fileIn))
	{
		std::cerr << "Error: can't open " << filenameIn << std::endl;
		fileIn.close();
		return (1);
	}

	// open files
	std::ofstream	fileOut;
	if (open_outfile(filenameOut, &fileOut))
	{
		std::cerr << "Error: can't open " << filenameOut << std::endl;
		fileIn.close();
		fileOut.close();
		return (1);
	}

	// replace text
	if (search_and_replace(&fileIn, &fileOut, to_find, to_replace))
	{
		fileIn.close();
		fileOut.close();
		return (1);
	}

	// close fds
	fileIn.close();
	fileOut.close();

	return (0);
}
