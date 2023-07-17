#include <info.hpp>

// To read from a file `std::ifstream variableName("infile.txt")` can
// be used followed by the `.is_open()` function.
// `.tellg` can be used in combination with `.seekg to check whether
// a file is or isn't empty.

// To create a file to write to `std::ofstream	variableName("outfile.txt")`
// can be used, again followed by `.is_open()`.

// `std::getline` is used to read lines.
// `.find` is used to locate a possible s1 (searchStr) while it continuously validates
// if it hasn't met the last character of the line.
// When a match is found the s1 is being replaced by s2 (replaceStr) using `.replace`.

// The modified lines are being written to the outfile.
// Finally, the infile and outfile are closed.

int	main(int argc, char **argv) {
	std::ifstream	inputFile(argv[1]);
	std::string		searchStr = argv[2];
	std::string		replaceStr = argv[3];

	if (argc != 4)
		return 0;
	std::ofstream	outputFile("outfile.txt");
	if (inputFile.is_open() && outputFile.is_open())
	{
		inputFile.seekg(0, std::ios::end);
		if (inputFile.tellg() != 0) {
			inputFile.seekg(0, std::ios::beg);
			std::string	line;
			while (std::getline(inputFile, line)) {
				size_t	pos = 0;
				while ((pos = line.find(searchStr, pos)) != std::string::npos) {
					line.replace(pos, searchStr.length(), replaceStr);
					pos += replaceStr.length();
				}
				outputFile << line << std::endl;
			}
		}
		else
			std::cout << "The file is empty." << std::endl;
		inputFile.close();
		outputFile.close();
	}
	else
		std::cout << "Failed to open the file or insufficient rights." << std::endl;
//	system("leaks sed");
	return 0;
}
