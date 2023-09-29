/* 
    Given array:  [23 -7 12 -10 -11 40 60]
    Task is to arrange all negative in left and positive in right.
    o/p: [-7 -10 -11 23 12 40 60]
    Time Complexity - O(n);
 */
#include<iostream>
#include<vector>
#include<cmath>
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
std::vector<int> arrangeNegPos(std::vector<int> &nums){
    int neg = 0;
    for (int  index = 0; index < nums.size(); index++)
    {
        if(nums[index] < 0){
            std::swap(nums[index],nums[neg]);
            neg++;
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
    std::cout<<"Enter size:\t";
    std::cin>>size;
    std::vector<int> vec(size);
    takeInput(vec, size);
    std::vector<int> arr(size);
    arr = arrangeNegPos(vec);
    printOutput(arr,size);
    return(0);
}