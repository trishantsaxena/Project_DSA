/* 
    Task is to find the last occurence of the target,
    Array is sorted, and contains element in increasing order.
     eg [10 20 30 30 30 30 30 40 50]
     target - 30
     last occurence at 6th index
 */
#include<iostream>
#include<vector>

int findLastOccurence(std::vector<int> &nums, int target){
    int ans = -1;
    int start = 0;
    int end = nums.size()-1;
    while (start<=end)
    {
        // int mid = (start+end)/2;
         int mid = start+(end-start)/2;  // so that mid cannot overflow here.
        if(nums[mid] == target){
            ans = mid;
            start = mid+1;
        }
        else if (nums[mid] < target )
        {
            start = mid+1;
        }
        else if (nums[mid] > target)
        {
            end = mid-1;
        }
        
    }
    
    return(ans);
    
}
int main(){
    
    int size;
    int target;
    std::cout<<"Size of array: \t";
    std::cin>>size;
    std::vector<int> vec(size);
    std::cout<<"\nEnter elements: \n";
    for (int  i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    std::cout<<"Enter Target: \t";
    std::cin>>target;
    // std::cout<<"\n"<<target<<" Last occurence is "<<findLastOccurence(vec,target);
    int r = findLastOccurence(vec,target);
    if (r == -1){
        std::cout<<"\n"<<target<<" not present in array.\n";
    }
    else{
         std::cout<<"\n"<<target<<" Last occurence is "<<r;
    }
    
    return(0);
    
}