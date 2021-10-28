#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <fstream>

#include "runCaesarCipher.hpp"

std::string runCaesarCipher(std::string& inputText,const size_t key,const bool encrypt )
{
    std::string uppercase{""};
    std::string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int k{1}; //encrypt flag

    if(!encrypt){
        k = -1; // check encrypt or decrypt
    }
   
    for(int i{0}; i<inputText.length(); i++){
        int flag{0};// uppercase flag
        uppercase[i] = std::toupper(inputText[i]);
        if (inputText[i] != uppercase[i]) {
            flag = 1; //check if it is uppercase
        }
        for(int j{0};j<26;j++){
            if (uppercase[i]==alphabet[j]){
                j = (j + k*key+26)%26;
                inputText[i] = alphabet[j];
                if(flag == 1){
                    inputText[i] = std::tolower(inputText[i]); //lowercase
                }
            }
        
        }
    }
    return inputText;
}

