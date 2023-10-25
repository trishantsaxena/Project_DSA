#include<iostream>
bool checkPow2(int n){
    if(n <= 0)return(false);

    return(n & -n) == n;
}
int main(){
    int num;
    std::cin>>num;
    bool a = checkPow2(num);
    if(a)std::cout<<"\nPower of two";
    else std::cout<<"\nNot a power of two.";
    return(0);
}