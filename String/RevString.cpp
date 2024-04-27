#include<iostream>
#include<string.h>
#include<string>

std::string convertoString(char arr[]){
    std::string s = arr;
    return(s);
}

std::string ReverseString(std::string str){
    int size = str.size();
    char temp[size];
    temp[size] = '\0';

    //converting string to array
    for (int i = 0; i < size; i++)
    {
        temp[i] = str[i];;
    }

    //Reverse the char array
    int i = 0,j=size-1;
    while (i<j)
    {
        std::swap(temp[i],temp[j]);
        i++;
        j--;
    }
    //std::string ans = convertoString(temp);
    std::string ans(temp);
    return(ans);
}

int main(int argc, char const *argv[])
{
    std::string str;
    std::cout<<"\nEnter String:\t"<<str;
    std::getline(std::cin,str);

    std::string revstr = ReverseString(str);

    std::cout<<"\nReversed String:\t"<<revstr;
    


    return 0;
}
