#/* 
    189. Rotate Array - Moduls Approach.

    Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

    Example 1:

    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]

    Follow up:

    Try to come up with as many solutions as you can. 
    There are at least three different ways to solve this problem.
    Could you do it in-place with O(1) extra space?

 */
#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"Enter size: \t";
    std::cin>>size;
}
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
}
void getKey(int &key){
    std::cout<<"\nEnter Key:\t";
    std::cin>>key;
}
std::vector<int> RotateArray(std::vector<int> &nums, int k){
    int size = nums.size();
    std::vector<int> ans(size);
    for (int index = 0; index < size; index++)
    {
        ans[(index+k)%size] = nums[index];
    }
    

    return(ans);
    
}
void printOutput(std::vector<int> &ans,int size){
    std::cout<<"\nRearranged Array: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<ans[i]<<" ";
    }
}
int main(){
    int size,key;
    getSize(size);
    std::vector<int> vec(size);
    takeInput(vec,size);
    getKey(key);
    std::vector<int> ans(size);
    ans = RotateArray(vec,key);
    printOutput(ans,size);
    return(0);
}