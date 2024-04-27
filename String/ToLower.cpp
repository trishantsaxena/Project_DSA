#include<iostream>
#include<string.h>

int main()
{
    std::string str;
    std::cout<<"Enter Upercase string only:\t";
    std::getline(std::cin,str);

/*  
    char ch = 'A';
    char ch2 = ch + 97 - 65;
    std::cout<<ch2; 
*/
    for (int  i = 0; i < str.size(); i++)
    {   
        if (str[i] >= 65 && str[i] <= 96)
        {
            str[i] = str[i] + 97 - 65;
        }
        //else continue;

    }

    std::cout<<"Converted String:\t"<<str;

    return 0;
}

