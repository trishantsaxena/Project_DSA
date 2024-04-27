#include<iostream>
#include<cmath>
void getRange(int &R){
    std::cout<<"\nEnter Range:\t";
    std::cin>>R;
}
int printGFseries(int r){
 if (r == 1 || r== 2)
 {
    return(r-1);
 }
    
    long recAns = (long)pow(printGFseries(r-2),2)-printGFseries(r-1);
    return(recAns);
}
int main(){
    int range;
    getRange(range);
    std::cout<<"\n"<<printGFseries(range);
    return(0);
}