#include<iostream>
#include<cmath>
void getExp(int &n){
    std::cout<<"\nEnter Exponential:\t";
    std::cin>>n;
}
int printPower(int N){
    if (N == 1)
    {
        
        return(2);
    }
    int ans = 2*printPower(N-1);
    return(ans);
}

int main(){
    int exp;
    getExp(exp);
    std::cout<<printPower(exp);
    return(0);
}