/* 

    1920. Build Array from Permutation

    Given a zero-based permutation nums (0-indexed), 
    build an array ans of the same length where ans[i] = nums[nums[i]] 
    for each 0 <= i < nums.length and return it.

    A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
    Example 1:
    Input: nums = [0,2,1,5,3,4]
    Output: [0,1,2,4,5,3]
    Explanation: The array ans is built as follows: 
    ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
        = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
        = [0,1,2,4,5,3]

 */
#include<iostream>
#include<vector>
std::vector<int> arrayOfPermutation(std::vector<int>& nums){
    int size = nums.size();
    std::vector <int> ans(size);
    for (int i = 0; i < size; i++)
    {
        ans[i] = nums[nums[i]];
    }
    
    return(ans);
}
int main(){
    int size;
    std::cout<<"Enter size of vector: \t";
    std::cin>>size;
    std::vector<int> nums(size);
    for (int  i = 0; i < size; i++)
    {
        //int d;
        std::cin>>nums[i];
    }
    
    std::cout<<"Vector after the permutations : \n";
    std::vector<int> permuted(size);
    permuted = arrayOfPermutation(nums);
    for (int  i = 0; i < permuted.size(); i++)
    {
        std::cout<<permuted[i]<<" ";
    }
    
    return (0);
    
}