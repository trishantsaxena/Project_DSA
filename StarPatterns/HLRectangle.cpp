#include<iostream>
int main(){
int len,bre;
std::cin>>len>>bre;
for (int  row = 0; row < bre; row++)
{
   if (row==0 || row==(bre-1))
   {
        for (int col = 0; col < len; col++)
        {
            std::cout<<"* ";
        }
   }
   else{
       for (int col = 0; col < len; col++)
       {
        if (col==0 || col==(len-1))       
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
