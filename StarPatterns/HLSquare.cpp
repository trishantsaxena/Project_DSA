#include<iostream>
int main(){
int size;
std::cin>>size;
for (int row = 0; row < size; row++)
{
	if (row==0 || row==(size-1))
	{
		for (int col = 0; col < size; col++)
		{
			std::cout<<"* ";
		}
	}
	else{
		 for (int col = 0; col < size; col++)
		{
			if (col==0 || col==(size-1))
			{
				std::cout<<"* ";
			}
			else{
				std::cout<<"  ";
			}
		}
	}
	std::cout<<std::endl;
}
return 0;
}

