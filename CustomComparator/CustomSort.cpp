#include<iostream>
#include<vector>
#include<algorithm>
void getSize(int &a){
    std::cout<<"\nEnter size:\t";
    std::cin>>a;
}
void getInput(std::vector<int> &vec,int size){
    std::cout<<"\nEnter Elements:\t";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
void printOutput(std::vector<int> &vec,int size){
    std::cout<<"\nSorted Array:\t";
    for (int i = 0; i < size; i++)
    {
        std::cout<<vec[i]<<" ";
    }

}
bool myComp(int &a , int &b){
    return(a > b);
}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    std::vector<std::vector<int>> vov;
    getInput(vec,size);
    std::sort(vec.begin(), vec.end(),myComp);
    printOutput(vec,size);
}