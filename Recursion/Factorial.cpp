#include<iostream>
void getNum(long &num){
    std::cout<<"\nEnter number:\t";
    std::cin>>num;
}
long calcFac(long num){
    if(num == 1){
        return(1);
    }
    return(num*calcFac(num-1));
}
int main(){
    long num;
    getNum(num);
    std::cout<<"\n"<<num<<" !=\t"<<calcFac(num);
    return(0);
}