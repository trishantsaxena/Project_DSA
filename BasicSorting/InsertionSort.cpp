#include<iostream>
#include<vector>
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
void InsertionSort(std::vector<int> &nums){
    for (int i = 1; i < nums.size(); i++)
    {
        int key = nums[i];
        int j = i-1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j+1] =  nums[j];
            j--;
        }
        nums[j+1] =  key;
        
    }
    
        
}
void printOutput(std::vector<int> &vec,int size){
    std::cout<<"\nSorted Array:\t";
    for (int i = 0; i < size; i++)
    {
        std::cout<<vec[i]<<" ";
    }

}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    getInput(vec,size);
    InsertionSort(vec);
    printOutput(vec,size);
    return(0);
}