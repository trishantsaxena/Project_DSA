/*
zero-one half pyramid 
    1
    0 1
    1 0 1
    0 1 0 1
*/
#include<iostream>
int main(){
int size;
std::cin>>size;
int val =1;
for (int row = 0; row < size; row++)
{
    for (int  col = 0; col <= row; col++)
    {
        std::cout<<val<<" ";
        if (val>=1) val =0;
        else val =1;
    }
        //     if (val==1) val--;
        // else val++;
    std::cout<<std::endl;
}

return 0;
}
