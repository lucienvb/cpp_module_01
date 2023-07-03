#include <info.hpp>

int	main(int argc, char **argv) {
	std::ofstream	outputFile("outfile.txt");
	std::ifstream	inputFile(argv[1]);
	std::string		searchStr = argv[2];
	std::string		replaceStr = argv[3];

	if (argc != 4)
		return 0;
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
	return 0;
}
