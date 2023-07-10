#include <iostream>
#include <string>

std::string* split(std::string in, char limiter){
    unsigned long len = in.length();
    int delimiter = 0;
    int amount = 0;
    
    for (int i = 0; i < len; i++){
        if (in[i] == limiter){
            amount += 1;
        }
    }
    
    std::string *res = new std::string[amount + 1];
    int counter = 0;
    
    for (int i = 0; i < len; i++){
        if (in[i] == limiter){
            std::string temp = "";
            for (int j = delimiter; j < i; j++){
                temp += in[j];
            }
            res[counter] = temp;
            counter += 1;
            delimiter = i + 1;
        }
        if (i == len - 1){
            std::string temp = "";
            for (int j = delimiter; j < len; j++){
                temp += in[j];
            }
            res[counter] = temp;
            counter += 1;
        }
        res[counter] = "\0";
    }
    return res;
}

std::string join(std::string* array, char connecter){
    std::string res = array[0];
    for (int i = 1; array[i] != "\0"; i++){
        res += connecter + array[i];
    }
    return res;
}

int main() {
    srand(unsigned(int(time(0))));
    std::string p[4] = {"a", "b", "c", "\0"};
    std::cout << std::endl;
    std::cout << join(p, ';');
    std::cout << std::endl;
    return 0;
}

