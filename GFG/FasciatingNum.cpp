#include<iostream>
void getNum(int* num){
    std::cout<<"\nEnter number:\t";
    std::cin>>*(num);
}
bool checkFascinating(int *num){
    // std::cout<<"\nFunction:\t"<<*num;
    
}
int main(){
    int num;
    getNum(&num);
    if(checkFascinating(&num)){
        std::cout<<"\nNot Fascinating.";
    }
    else{
        std::cout<<"\nFascinating."
    }
    // std::cout<<"\nValue of Num:\t"<<num;
    return(0);                                              
}