/* 
    Given an array nums containing n distinct numbers in the range [0, n], 
    return the only number in the range that is missing from the array.
    Example 1:

    Input: nums = [3,0,1]
    Output: 2
    Explanation: n = 3 since there are 3 numbers, 
    so all numbers are in the range [0,3]. 2 is the missing number in the range 
    since it does not appear in nums.
    
 */
#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"\nEnter size: \t";
    std::cin>>size;
}
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \t";
    for (int  index = 0; index < size; index++)
    {
        std::cin>>vec[index];
    }
    
}
int findMissingNumber(std::vector<int> &nums){
    int size = nums.size();
    int sum =0;
    for (int  index = 0; index < size; index++)
    {
        sum += nums[index];
    }
    int Tsum = (size*(size+1))/2;
    return(Tsum-sum);
}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    takeInput(vec,size);
    std::cout<<"Missing number from the given array is: \t"<<findMissingNumber(vec);
    return(0);
}
