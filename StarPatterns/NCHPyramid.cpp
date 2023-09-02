/*
    Number changing half Pyramid
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include<iostream>

int main(){
int size;
std::cin>>size;
int count=1;
for (int row = 0; row < size; row++)
{
    for (int  col = 0; col <= row; col++)
    {
        std::cout<<count++<<" ";
        
    }
    
    std::cout<<std::endl;
    
}

return 0;
}
