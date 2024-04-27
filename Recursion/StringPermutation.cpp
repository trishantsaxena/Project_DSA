#include<iostream>
#include<string.h>
#include<algorithm>
void printPermutation(std::string &str, int index){
    if(index >= str.length()){
        std::cout<<str<<" ";
        return;
    }
    for (int j = index; j < str.length(); j++){
        std::swap(str[index],str[j]);
        printPermutation(str,index+1);
        std::swap(str[index],str[j]);
    }
    
}
int main(){
    std::string str = "abc";
    int i =0;
    printPermutation(str,i);
    return(0);
}