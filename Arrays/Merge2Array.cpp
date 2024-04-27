#include<iostream>
#include<vector>
void getSize(int &m, int &n){
    std::cout<<"Enter Size1\t";
    std::cin>>m;
    std::cout<<"\nEnter Size2\t";
    std::cin>>n;
}
void takeInput(std::vector<int> &arr1,int m, std::vector<int> &arr2, int n){
    std::cout<<"\nEnter Array1: \t";
    for (int i = 0; i < m; i++)
        std::cin>>arr1[i];

    std::cout<<"\nEnter Array2: \t";
    for (int j = 0; j < n; j++)
        std::cin>>arr2[j];
    
}

void mergerSorted(std::vector<int> &arr1,int m, std::vector<int> &arr2, int n){
    std::cout<<"\nI'm in merger sorted.";

}
void printOutput(std::vector<int> &res){
    std::cout<<"\nMerged Sorted Array:\t";
    res.shrink_to_fit();
    for (int i = 0; i < res.size(); i++)
    {
        std::cout<<res[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int size1, size2;
    getSize(size1, size2);

    std::vector<int> arr1(size1+size2);
    std::vector<int> arr2(size2);

    takeInput(arr1, size1, arr2, size2);

    if(size1 == 0) printOutput(arr2);
    else if (size2 == 0) printOutput(arr1);
    else{

        mergerSorted(arr1, size1, arr2, size2);
        printOutput(arr1);
    }
    
    return 0;
}
