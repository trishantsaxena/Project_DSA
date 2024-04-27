/* 
    * * *
     * *
      *
 */
#include<iostream>
int main(){
    int n = 10;

    for(int i=0;i<n;i++){
        //std::cout<<"@ ";
        for(int j= 0;j<2*n-1;j++){
            //std::cout<<"* ";
            
            if (i == 0 || i == j || i+j == (2*n-2) )
            {
                std::cout<<"* ";
            }
/*             else if (i == 0 && (j>0 || j <(2*n-2)))
            {
                std::cout<<"& ";
            } */
            
            else std::cout<<"  ";
            

        }
        std::cout<<"\n";
    }
}