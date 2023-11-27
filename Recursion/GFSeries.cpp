#include<iostream>
#include<cmath>
void getRange(int &R){
    std::cout<<"\nEnter Range:\t";
    std::cin>>R;
}
void printGFseries(int &r){
    if (r == 0)
    {
        std::cout<<r<<" ";
    }
    if(r == 1){
        std::cout<<r<<" ";
    }
    std::cout<<r<<" ";
    printGFseries(std::)
    
}
int main(){
    int range;
    getRange(range);
    printGFseries(range);
    return(0);
}