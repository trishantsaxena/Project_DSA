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

std::string RevVowel(std::string str){
    int i = 0,j=str.size()-1;

    while(i<j){
        bool right = isVowel(str[i]);
        bool left = isVowel(str[j]);

        if(right && left){
            std::swap(str[i],str[j]);
            i++;
            j--;
        }

        else if (right && !left)
            j--;

        else if (left && !right)
            i++;
            
        else{
            i++;
            j--;
        }
        
    }
    return(str);
}

int main(int argc, char const *argv[])
{
    std::string str;

    std::cout<<"\nEnter String:\t";

    std::getline(std::cin,str);

    std::cout<<"\nOriginal String:\t"<<str;

    std::string ans = RevVowel(str);

    std::cout<<"\nString After Reversing the vowels:\t"<<ans;

    return 0;
}
