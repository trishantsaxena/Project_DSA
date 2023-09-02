/*

1
2 3
3 4 5
4 5 6 7
*/
#include<iostream>
int main(){
int size;
std::cin>>size;
for (int row = 0; row < size; row++)
{
    for (int  col = 0; col <= row; col++)
    {
        std::cout<<(row+col+1)<<" ";
    }
    std::cout<<std::endl;
    
}

return 0;
}