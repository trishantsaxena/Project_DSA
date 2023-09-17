#include<iostream>
#include<vector>
int binarySearch(std::vector<int> &nums, int target){
    int start = 0;
    int end = nums.size()-1;
    while (start<=end)  
    {
        //int mid = (start+end)/2;
        int mid = start+(end-start)/2;  // so that mid cannot overflow here.

        if (nums[mid] == target)    
        {
            return(mid);
        }
        else if (nums[mid] < target)
        {
            start = mid+1;
        }
        else if (nums[mid] > target)
        {
            end = mid -1;
        }
    
    }
    return(0);
}
int main(){
    int size;
    std::cout<<"\nEnter the size of array: \t";
    std::cin>>size;
    std::vector<int> vec(size);
    std::cout<<"\nEnter elements in ascending order.\n";
    for (int  i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    int target;
    std::cout<<"\nEnter the element you want to find: \t";
    std::cin>>target;
    // std::cout<<"\n"<<target<<" found at : "<<binarySearch(vec,target)<<" index.";
    int ans = binarySearch(vec,target);
    if(binarySearch(vec,target)){
        std::cout<<"\n"<<target<<" found at : "<<ans<<" index.";
    }
    else{
        std::cout<<target<<" not present in array.";
    }

    return (0);
}