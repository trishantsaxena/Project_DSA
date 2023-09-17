 /* 
    1470. Shuffle the Array

    Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

    Return the array in the form [x1,y1,x2,y2,...,xn,yn].

    Example 1:

    Input: nums = [2,5,1,3,4,7], n = 3
    Output: [2,3,5,4,1,7] 
    Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
 */
#include<iostream>
#include<vector>
std::vector<int> shuffleArray(std::vector<int>& nums, int n){
    std::vector<int> ans(2*n);
    for(int i =0;i < n ; i++){
        ans[2*i] = nums[i];
        ans[(2*i)+1] = nums[n+i];
    }
    return (ans);

}
int main(){
    int n;
    std::cin>>n;
    std::vector<int> vec(2*n);
    for (int i = 0; i < 2*n; i++)
    {
        std::cin>>vec[i];
    }
    std::vector<int> shufArr(2*n);
    shufArr = shuffleArray(vec,n);
    std::cout<<"\n";
    for (int  i = 0; i < 2*n; i++)
    {
        std::cout<<shufArr[i]<<" ";
    }
    
    
    return (0);
}