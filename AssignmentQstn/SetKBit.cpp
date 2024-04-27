/* 
    Given a number N and a value K. 
    From the right, set the Kth bit in 
    the binary representation of N. 
    The position of Least Significant 
    Bit(or last bit) is 0, the second 
    last bit is 1 and so on. 

    N = 10 
    K = 2
    Output:
    14
    Explanation:
    Binary representation of the given number
    10 is: 1 0 1 0, number of bits in the 
    binary reprsentation is 4. Thus 2nd bit
    from right is 0. The number after changing
    this bit to 1 is: 14(1 1 1 0).

 */
#include<iostream>
void getNum(int &n){
    std::cout<<"\nEnter Number:\t";
    std::cin>>n;
}
void getK(int &k){
    std::cout<<"Enter K:\t";
    std::cin>>k;
}
int setKBit(int num,int k){
    int mask = 1 << k;
    int ans = num | mask;
    return(ans);
}
int main(){

    int num,k;
    getNum(num);
    getK(k);
    
    std::cout<<"\n"<<setKBit(num,k);
    return(0);
} 