#include<iostream>
#include<string>
bool checkString(std::string str){
    int i=0,j=str.size()-1;
    while(i<j){
        if(str[i] != str[j])
            return(false);
        i++;
        j--;
    }    
    return(true);
}
int main(int argc, char const *argv[])
{
    std::string str;
    std::cout<<"\nEnter string:\t";
    std::getline(std::cin,str);
    if(checkString(str)){
        std::cout<<"\nSame";
    }
    else{
        std::cout<<"\nDifferent";
    }
    return 0;
}
