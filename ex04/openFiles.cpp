#include "sed.hpp"

/**
 * @brief open an infile.
 * @param filenameIn the name of the file to open.
 * @param fileIn the fd to open the file.
 * @result 0 if OK, 1 if KO.
 * 
 * Take an infile name and use fileIn as std::fstream::in to open it.
 */
int	open_infile(std::string filenameIn, std::ifstream *fileIn)
{
	(*fileIn).open(filenameIn, std::fstream::in);
	if (!(*fileIn).good())
		return (1);
	return (0);
}

/**
 * @brief open an outfile.
 * @param filenameOut the name of the file to open.
 * @param fileout the fd to open the file.
 * @result 0 if OK, 1 if KO.
 * 
 * Take an outfile name and use fileOut as std::fstream::out to open it.
 */
int	open_outfile(std::string filenameOut, std::ofstream *fileOut)
{
	(*fileOut).open(filenameOut, std::fstream::out);
	if (!(*fileOut).good())
		return (1);
	return (0);
}
