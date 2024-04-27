#include<iostream>
#include<vector>
void getSize(int &num){
    std::cout<<"\nEnter Size/Shift value:\t";
    std::cin>>num;
}
void takeInput(std::vector<int> &nums){
    std::cout<<"\nEnter Elements:\t";
    for(int &num:nums)
        std::cin>>num;
    
}
void printOutput(std::vector<int> &nums,int k){
    std::cout<<"\nArray after shifting last "<<k<<" element in original array:\t";
    for(int &num : nums)
        std::cout<<num<<" ";
    std::cout<<"\n";
}
void shiftArray(std::vector<int> &nums, int key){
    if(key == 0) return;

    int size = nums.size();
    std::vector<int> temp(key);
    int i =  size-key;
    int j=0;
    while (i<size)
        temp[j++] = nums[i++];

    for (int i = size-key-1; i >= 0; i--)
        nums[i+key] = nums[i];

    for (int i = 0; i < key; i++)
        nums[i] = temp[i];
    
}
int main(int argc, char const *argv[])
{
    int size,k;
    getSize(size);
    std::vector<int> nums(size);
    takeInput(nums);
    getSize(k);
    shiftArray(nums, k);
    printOutput(nums,k);
    return 0;
}
