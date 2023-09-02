#include<iostream>
int main(){
int size;
std::cin>>size;
for(int row = size; row!=0; row--){
	for(int col = 1; col<=row; col++){
	std::cout<<col<<" ";
	}
std::cout<<std::endl;
}
return 0;
}
