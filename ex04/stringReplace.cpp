#include "sed.hpp"

/**
 * @brief	Take an infile, an outfile, a string to find and a string to replace.
 * @param	fileIn  the infile.
 * @param	fileout	the outfile.
 * @param	to_find	the string to find in the infile.
 * @param	to_replace	the string to replace and put in the outfile.
 * @return	0 if ok, 1 if ko.
 * 
 * Get the infile, replace all the iterations of the string to find by the string
 * to replace and then put the result in the outfile.
 */
int	search_and_replace(std::ifstream *fileIn, std::ofstream *fileOut, std::string to_find, std::string to_replace)
{
	std::string		line;
	std::string		line_replace;
	size_t			found_pos;
	size_t			end_last_found;
	std::string		replaced_line;

	while(std::getline(*fileIn, line))
	{
		replaced_line.clear();
		end_last_found = 0;
		found_pos = line.find(to_find);
		if (found_pos != std::string::npos)
		{
			while (found_pos != std::string::npos)
			{
				replaced_line.append(line,end_last_found,found_pos - end_last_found);
				replaced_line += to_replace;
				end_last_found = found_pos + to_find.length();
				found_pos = line.find(to_find, end_last_found);
				if (found_pos == std::string::npos)
					replaced_line.append(line, end_last_found,line.length());
			}
		}
		else
			replaced_line = line;

		if (!(*fileIn).eof())
			*fileOut << replaced_line << std::endl;
		else
			*fileOut << replaced_line;
	}
	return (0);
}
