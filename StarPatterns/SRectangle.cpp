// Goal is to create a rectangle of lenXbre size, of *.
#include<iostream>
int main(){
    int len;
    int bre;
    std::cin>>len>>bre;
    for (int i = 0; i < bre; i++)
    {
        for (int j = 0; j < len; j++)
        {
            std::cout<<"*  ";
        }
        std::cout<<std::endl;
        
    }
    
return 0;
}
