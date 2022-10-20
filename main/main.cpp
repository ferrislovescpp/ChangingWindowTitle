
#include "main.hpp"

int main(int argc, char* argv[]) {

    // take a guess retard
    std::cout << "test\n";

    // changes console title
    SetConsoleTitleA(utils::GenerateRandomString(50).c_str());

    // changes exe
    std::string filename = argv[0]; if (filename.find(xorstr(".exe")) == std::string::npos) filename += xorstr(".exe");
    std::string newExecutable = (utils::GenerateRandomString(25) + xorstr(".exe"));
    std::rename(filename.c_str(), newExecutable.c_str());

    system("pause");
}
