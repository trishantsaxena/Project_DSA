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
void SelectionSort(std::vector<int> &nums){

    for (int  i = 0; i < nums.size()-1; i++)
    {   int min = i;
        for (int  j = i+1; j < nums.size(); j++){
        
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        std::swap(nums[i],nums[min]);
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
    SelectionSort(vec);
    printOutput(vec,size);
    return(0);
}