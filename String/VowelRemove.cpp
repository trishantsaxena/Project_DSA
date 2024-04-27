#include<iostream>
#include<string.h>
#include<string>

bool isVowel(char a){
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return(true); 
    default: 
        return(false);
    }
}

std::string RemoveVowel(std::string str){

    for(int i = str.size()-1;i>=0;i--)
    {
        if (isVowel(str[i]))
        {
            str.erase(i,1);
        }    
    }
/*     int i=0;
    while (str[i] !='\0')
    {
        if(isVowel(str[i])){
            str.erase(i,1);
            i++;
        }
        else
            i++;
    } */
    
    return(str);
    
}

int main(int argc, char const *argv[])
{
    std::string str;

    std::cout<<"\nEnter string:\t";

    std::getline(std::cin,str);

    std::cout<<"\nOriginal String:\t"<<str;

    std::string ans = RemoveVowel(str);

    std::cout<<"\nTrimmed String:\t"<<ans;

    return 0;
}
