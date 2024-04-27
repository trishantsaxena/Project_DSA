#include<iostream>
void solve(int arr[], int size){
    std::cout<<arr;
    std::cout<<&arr;
}
int main(){
        int arr[] = {10,20,30,40};
        solve(arr,4);
        std::cout<<"\nSize\t"<<sizeof(arr);
    return(0);
}  