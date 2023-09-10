#include<iostream>
long calcFact(long num){
long fac =1;
for(int i=num;i>=1;i--){
fac*=i;
}
return(fac);
}
int main(){
    system("cls");
    long number;
    std::cin>>number;
    std::cout<<number<<"! = "<<calcFact(number);
    return(0);
}
