#include<iostream>
int main(){
int size;
std::cin>>size;
for(int row=size-1;row>=0;row--){
    for(int col = 0; col<=row;col++)
    {
        std::cout<<"* ";
    }
    std::cout<<"\n";
}
return 0;
}
