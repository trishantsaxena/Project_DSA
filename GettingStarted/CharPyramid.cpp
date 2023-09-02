/*
A
AB
ABC
ABCD
*/
#include<iostream>
int main()
{
    int size; 
    std::cin>>size;
    char ch;
    for (int row = 0; row < size; row++)
    {   
        for (int  col = 0; col <= row; col++)
        {   
            ch = col+1+'A'-1;
            std::cout<<ch<<" ";
        }
        // char ch;
        for (char alphabet = ch; alphabet > 'A';)
        {    alphabet--;
            std::cout<<alphabet<<" ";
            /* code */
        }
        
        std::cout<<std::endl;
        
    }
    
}