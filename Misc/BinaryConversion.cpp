#include<iostream>
#include<cmath>
int convertDecimal(long n){
    int i=0;
    int binary;
    while (n>0)
    {
        int bit = n%2;
        std::cout<<bit;
        binary = bit*pow(10,i)+binary;
        std::cout<<binary;
        n=n/2;
        i++;
    }
    return binary;
    
}
int main(){
    long number;
    std::cout<<"Enter a decimal number:\t";
    std::cin>>number;
    std::cout<<"Binary Conversion:\t"<<convertDecimal(number);
    return 0;

}