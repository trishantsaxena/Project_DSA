#include<iostream>
float caclArea(float radius){
return(radius*radius);
}
int main(){
float rad;
char ch;
do
{
    system("cls");
    std::cin>>rad;
    std::cout<<"Area : \t"<<caclArea(rad);
    std::cout<<"\n\nWant to calculate more?\t";
    std::cin>>ch;
} while (ch == 'y'||ch=='Y');
system("cls");
std::cout<<"Thanks for visiting!!\n\n";
return 0;
}
