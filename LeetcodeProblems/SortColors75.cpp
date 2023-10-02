/* 
    75. Sort Colors

    Given an array nums with n objects colored red, white, or blue, 
    sort them in-place so that objects of the same color are adjacent, 
    with the colors in the order red, white, and blue.

    We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

    You must solve this problem without using the library's sort function.

    Example 1:

    Input: nums = [2,0,2,1,1,0]
    Output: [0,0,1,1,2,2]
    Example 2:

    Input: nums = [2,0,1]
    Output: [0,1,2]
    

    Constraints:

    n == nums.length
    1 <= n <= 300
    nums[i] is either 0, 1, or 2.

 */
#include<iostream>
#include<vector>
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
std::vector<int> sortColors(std::vector<int> &nums){
    int size = nums.size();
    int red = 0;
    int index =0;
    int blue = size-1;
    while(index <= blue)
    {
        if(nums[index] == 0){
            std::swap(nums[index], nums[red]);
            red++;
            index++;
        }
        else if (nums[index] == 2)
        {
            std::swap(nums[index], nums[blue]);
            blue--;
        }
        else{
            index++;
        }
        
    }
    return(nums);
    
}
void printOutput(std::vector<int> &ans,int size){
    std::cout<<"\nRearranged Array: \n";
    for (int i = 0; i < size; i++)
    {
        std::cout<<ans[i]<<" ";
    }
    
}
int main(){
    int size;
    std::cout<<"\nEnter size: \t";
    std::cin>>size;
    std::vector<int> vec(size);
    takeInput(vec,size);
    std::vector<int> ans(size);
    ans = sortColors(vec);
    printOutput(ans,size);
}