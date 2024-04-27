#include<iostream>
#include<string.h>
#include<string>
int main(int argc, char const *argv[])
{
    std::string str;
    std::cout<<"Enter String:\t";
    std::getline(std::cin,str);

    for (int  i = str.size(); i >= 0; i--)
    {
        if(str[i] == ' ') {
            str.erase(i,1);
        }
    }

    std::cout<<"Trimmed String:\t"<<str;
    

    return 0;
}
