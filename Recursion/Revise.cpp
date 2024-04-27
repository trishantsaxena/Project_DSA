#include<iostream>
void getNum(int& num){
    std::cout<<"\nEnter Number:\t";
    std::cin>>num;
}
int calcPower(int num){
    if(num == 1) return(2);

    return(2*calcPower(num-1));
}
void printCount(int num){
    int count = 0;
    if(num == 0) return;

    printCount(num-1);
    count++;
    std::cout<<num<<" ";
    if(count == 2){
        std::cout<<num;
        return;
    }
}
int calcSum(int num){
    int sum = 0;
    if (num == 0)
    {
        return(sum);
    }
    sum = num + calcSum(num-1);
    return(sum);
}
int main(){
    int num; 
    getNum(num);
    std::cout<<"Power of 2 raise to power "<<num<<" is - "<<calcPower(num);
    std::cout<<"\n";
    printCount(num);
    std::cout<<"\n";
    std::cout<<calcSum(10);
    return(0);
}