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
    while(instring.size() > 0) {
        std::size_t x = instring.find(delim, 0);
        if (x == std::string::npos) {
            std::cout << instring << "\n";
            return;
        }
        std::cout << instring.substr(0, x) << "\n";
        instring.erase(0, x + delim.size());
    }
}

int main() {
    
    std::string hello = "Hello, World!, I know you, you know, but I don't, think you, know me";
    parseByStream(hello, 'l');
    std::cout << "\n";
    parseByStrFunct(hello, ", ");
}