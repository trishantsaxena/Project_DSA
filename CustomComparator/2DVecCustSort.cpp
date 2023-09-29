#include<iostream>
#include<algorithm>
#include<vector>
void getSize(int &a){
    std::cout<<"\nEnter size:\t";
    // std::cout<<"\nEnter row:\t";
    std::cin>>a;
    // std::cout<<"\nEnter row:\t";
    // std::cin>>b;
}
void getInput(std::vector<std::vector<int>> &vov,int &size){
    std::cout<<"\nEnter Elements:\t";
    for (int i = 0; i < size; i++)
    {
        int row,col;
        std::cin>>row>>col;
        std::vector<int> temp;
        temp.push_back(row);
        temp.push_back(col);
        vov.push_back(temp);
    }
    
    
}
void printOutput(std::vector<std::vector<int>> &vov,int &size){
    std::cout<<"\nSorted Array:\t";
    std::cout<<"[\t";

    for (int  i = 0; i < size; i++)
    {
        std::vector<int> &temp = vov[i];
        int &a = temp[0];
        int &b = temp[1];
        std::cout<<"["<<a<<" "<<b<<"]"<<"\t";
    }
     std::cout<<"]";
    
    
}
bool sortByFirst(std::vector<int> &a, std::vector<int> &b){
    return(a[1] < b[1]);
}
int main(){
    int size;
    getSize(size);
    std::vector<std::vector<int>> vov;
    getInput(vov,size);
    std::sort(vov.begin(),vov.end(),sortByFirst);
    printOutput(vov,size);
    return(0);
}