#include <string>
#include <iostream>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "The memory address of:" << std::endl;
    std::cout << "str: " << &str << std::endl;
    std::cout << "strPTR: " << &strPTR << std::endl;
    std::cout << "strREF: " << &strREF << std::endl;

    std::cout << "\nThe value of:" << std::endl;
    std::cout << "str: " << str << std::endl;
    std::cout << "strPTR: " << strPTR << std::endl;
    std::cout << "strREF: " << strREF << std::endl;
//	system("leaks brain");
    return (0);
}
