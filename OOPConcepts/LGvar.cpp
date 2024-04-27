#include<iostream>
int x =2;
int main(){
   // ::x = 4;
    int x = 20;
    std::cout<<x<<"  "<<::x<<std::endl;

    {
        int x = 50;
        std::cout<<x<<"  "<<::x<<std::endl;
    }

    std::cout<<x<<"  "<<::x<<std::endl;

    return(0);
}