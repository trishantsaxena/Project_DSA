#include<iostream>
void getRange(int &r){
    std::cout<<"\nEnter Term:\t";
    std::cin>>r;
}
int printFibonacci(int n){
    if (n ==1 | n==0) return(n);
    int a = printFibonacci(n-1)+printFibonacci(n-2);
    std::cout<<a<<" ";
}
int main(){
    int range;
    getRange(range);
    printFibonacci(range);
}