#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "runCaesarCipher.hpp"

int main(int key, std::string inputText, bool encrypt)
{
    
    std::cout << "Your input is " << std::endl;
    std::cin >> inputText;

    std::cout << "Your key number is " << std::endl;
    std::cin >> key;

    int i{0};
    std::cout << "encrypt or decrypt? (1 for encrypt, 0 for decrypt)" << std::endl;
    std::cin >> i;
    encrypt = bool(i == 1);


    std::cout << "Your output is " << runCaesarCipher(inputText, key, encrypt) <<std::endl;
    
   
    return 0;
}