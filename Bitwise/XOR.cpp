#include<iostream>
void getNumber(int &a, int &b){
    std::cout<<"Enter Two numbers: \t";
    std::cin>>a>>b;
}
int printOutput(int &a, int &b){
 return(a^b);
}
int main(){
    int a ,b;
    getNumber(a,b);
    std::cout<<"a ^ b is \t"<<printOutput(a,b);
    return(0);
}