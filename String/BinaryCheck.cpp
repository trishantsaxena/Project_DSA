#include<iostream>
#include<string>

bool checkBinary(std::string str){
    int i=0;
    while (str[i] != '\0')
    {
        if(str[i] != '0' && str[i] != '1')
            return(false);
        i++;
    }
    return(true);
}

int main(int argc, char const *argv[])
{
    std::string str;
    std::cout<<"\nEnter string:\t";
    std::getline(std::cin,str);
    // bool check = checkBinary(str);
    if(checkBinary(str))
        std::cout<<"\nBinary String!!!";
    else 
        std::cout<<"\nNot a Binary String!!";
    return 0;
}
