/* 

    1929. Concatenation of Array
    Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

    Specifically, ans is the concatenation of two nums arrays.

    Return the array ans.

    Example 1:
    nput: nums = [1,2,1]
    Output: [1,2,1,1,2,1]
    Explanation: The array ans is formed as follows:
    - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
    - ans = [1,2,1,1,2,1]

 */
#include<iostream>
#include<vector>
std::vector<int> getConcatenate(std::vector<int>& nums){
    int n = nums.size();
    std::vector<int> ans(2*n);
    for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n] = nums[i];
       
    }
    return(ans);
}
int main(){
    int size;
    std::cout<<"Enter size of vector: \t";
    std::cin>>size;
    std::vector <int> nums;
    int d;
    for(int i=0;i<size;i++){
        std::cin>>d;
        nums.push_back(d);
    }
    std::cout<<"Array after getting concatenated: \n";
    std::vector<int> concatenate;
    concatenate = getConcatenate(nums);

    std::cout<<"size of ans vector is : \t"<<concatenate.size()<<"\n";

    for (int j = 0; j < concatenate.size(); j++){
        std::cout<<concatenate[j]<<" ";
    }
    
    return(0);
    
}