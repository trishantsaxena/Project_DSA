/*
    Number increasing reverse half pyramid
    1 2 3 4
    1 2 3
    1 2
    1
*/
#include<iostream>
int main(){
int size;
std::cin>>size;
for (int  row = size ; row > 0; row--)
{
    for (int  col = 0; col < row; col++)
    {
        std::cout<<col+1<<" ";
    }
    std::cout<<std::endl;
    
}

return 0;
}
