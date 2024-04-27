#include<iostream>
#include<string>

bool sameFrequency(std::string str){
     char arr [26];
 

}

int main(int argc, char const *argv[])
{
    std::string str;
    std::cout<<"\nEnter String:\t";
    std::getline(std::cin, str);
    bool ans = sameFrequency(str);
    if(ans) std::cout<<"\nSame Frequency";
    else std::cout<<"\nNot same frequency.";
    return 0;
}
