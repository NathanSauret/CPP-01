#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

// openFiles.cpp
int	open_infile(std::string filenameIn, std::ifstream *fileIn);
int	open_outfile(std::string filenameOut, std::ofstream *fileOut);

// stringReplace.cpp
int	search_and_replace(std::ifstream *fileIn, std::ofstream *fileOut, std::string to_find, std::string to_replace);

#endif