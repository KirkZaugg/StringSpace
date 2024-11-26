#include<iostream>
#include<string>
#include<sstream>

void parseByStream(std::string instring, char delim) {
    std::stringstream sstr(instring);
    char ins[256];
    while (sstr.getline(ins, 256, delim)) {
        std::cout << ins << "\n";
    }
}

void parseByStrFunct(std::string instring, std::string delim) {
    std::string work;
    std::size_t x = instring.find(delim, delim.size());
    work = instring.substr(0, x);
    std::cout << work << "\n";
}

int main() {
    std::string hello = "Hello, World!";
    parseByStream(hello, 'l');
    parseByStrFunct(hello, ", ");
}