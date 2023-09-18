/* 
    Task is to reverse an array without taking an extra space.
 */
#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"Enter size: \t";
    std::cin>>size;
}
void getInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \t";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
void ReverseArray(std::vector<int> &nums){
    int start =0;
    int end = nums.size()-1;
    while (start < end)
    {
        nums[start] = nums[start] ^ nums[end];
        nums[end] = nums[start] ^ nums[end];
        nums[start] = nums[start] ^ nums[end];
        start++;
        end--;
    }
    
}
void printOutput(std::vector<int> &ans,int size){
    std::cout<<"\nRearranged Array: \t";
    for (int i = 0; i < size; i++)
    {
        std::cout<<ans[i]<<" ";
    }

    
}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    getInput(vec,size);
    ReverseArray(vec);
    printOutput(vec,size);
    return(0);
}