#include<iostream>
int main(){
int i = 10;
int j = 20;
int diff =  &j - &i;

std::cout<<"\n &i = "<<&i<<"\t&j = "<< &j<<"\tdiff = "<<diff;

return(0);
}