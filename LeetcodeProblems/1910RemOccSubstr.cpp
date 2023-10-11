#include<iostream>
#include<string.h>
void getString(std::string &name){
    std::cout<<"\nEnter String:\t";
    std::getline(std::cin, name);
}
void getPart(std::string &part){
    std::cout<<"\nEnter Substring you want to remove:\t";
    std::getline(std::cin, part);
}
 void removeAllPartOccur(std::string &name, std::string &part){
    while (name.find(part) != std::string::npos)
    {
        name.erase(name.find(part), part.length());
    }

    
}
void printString(std::string &name){
    std::cout<<"\nFinal String:\t"<<name;
}
int main(){
    std::string name,part;
    getString(name);
    getPart(part);
    removeAllPartOccur(name,part);
    printString(name);
    return(0);
}