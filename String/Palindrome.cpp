#include<iostream>
#include<string.h>
getInput(std::string &name){
    std::cout<<"\nEnter String:\t";
    std::getline(std::cin,name);
}
bool checkPalindrome(std::string name){
    int i=0;
    int j = name.size()-1;
    while (i<=j)
    {   
        if (name[i] != name[j])
        {
            return(false);
        }
        i++;
        j--;
        
    }

    return(true);
}
void printResult(std::string &name){
    if (checkPalindrome(name))
    {
        std::cout<<"\nPalindrome";
    }
    else{
        std::cout<<"\nNot Palindrome";
    }
    
}
int main(){
    std::string name;
    getInput(name);
    printResult(name);
    return(0);
}