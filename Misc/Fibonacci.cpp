#include<iostream>
void getRange(int &r){
    std::cout<<"\nEnter Range:\t";
    std::cin>>r;
}
void printFibonacci(int &R){
    int f =0;
    int s = 1;
    //std::cout<<f<<" "<<s<<" ";
    int n=0;
    for (int  i = 1; i < R; i++)
    {
        n = f+s;
        f = s;
        s = n;
        //std::cout<<n<<" ";
    }
    std::cout<<R<<" is "<<n;
    
}
int main(){
    int range;
    getRange(range);
    printFibonacci(range);
    return(0);
}