/* 
    Task is to find the total occurence of the target,
    Array is sorted, and contains element in increasing order.
     eg [10 20 30 30 30 30 30 40 50]
     target - 30
    Total occurence of 30 is 5
 */
#include<iostream>
#include<vector>
int findFirstOccurence(std::vector<int> & nums, int target){
    int ans = -1;
    int start = 0;
    int end = nums.size()-1;
    while (start<=end)
    {   
        //int mid = (start+end)/2;
         int mid = start+(end-start)/2;  // so that mid cannot overflow here.

        if(nums[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if (nums[mid] < target)
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


int findTotalOccurence(std::vector<int> &nums,int target){
    int count = findLastOccurence(nums,target) - findFirstOccurence(nums,target) +1;
    return(count);
}
int main(){
    int size;
    int target;
    std::cout<<"Enter size: \t";
    std::cin>>size;
    std::vector<int> vec(size);
    std::cout<<"\nEnter the elements in array: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    std::cout<<"\nTarget: \t";
    std::cin>>target;
    int c = findTotalOccurence(vec,target);
    if (c == -1)
    {
        std::cout<<"\nNo occurence of "<<target<<" in the give array.";
    }
    else{
        std::cout<<"Total Occurence of "<<target<<" is "<<c;
    }
    return(0);
    
}