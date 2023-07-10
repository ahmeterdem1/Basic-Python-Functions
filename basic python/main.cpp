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
    }
    res[amount + 1] = "\0";
    
    return res;
}

std::string join(std::string* list, char a){
    std::string r = list[0];
    for (int i = 1; list[i] != "\0"; i++){
        r += (a + list[i]);
    }
    
    return r;
}


int main() {
    srand(unsigned(int(time(0))));
    std::string input = "a;b;c;d;e;f";
    std::string* p = split(input, ';');
    std::cout << join(p, ';') << std::endl;
    delete[] p;
    return 0;
}

