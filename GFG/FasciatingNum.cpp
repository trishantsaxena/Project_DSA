#include<iostream>
void getNum(int* num){
    std::cout<<"\nEnter number:\t";
    std::cin>>*(num);
}
void checkFascinating(int *num){
    std::cout<<"\nFunction:\t"<<*num;
}
int main(){
    int num;
    getNum(&num);
    checkFascinating(&num);
    std::cout<<"\nValue of Num:\t"<<num;
    return(0);                                              
}