/* 
    sorted array  - [10,20,30,40,50,60,70]
    nearly sorted array - [20,10,30,50,40,70,60]

    Task is to find the given target in nearly sorted array in O(log n) Time complexity.
 */
#include<iostream>
#include<vector>

void getSize(int &size){
    std::cout<<"\nEnter size:\t";
    std::cin>>size;
}
void getTarget(int &target){
    std::cout<<"\nEnter Target:\t";
    std::cin>>target;
}
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter elements:\t";
    for (int  index = 0; index < size; index++)
    {
        std::cin>>vec[index];
    }
    
}
int SearchTarget(std::vector<int> &nums, int target){
    int start = 0;
    int end = nums.size()-1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (mid-1 >=0 && nums[mid-1] == target)
        {
            return(mid-1);
        }
        else if (nums[mid] == target){
            return(mid);
        }
        else if (mid+1 < nums.size()-1 && nums[mid+1] == target)
        {
            return(mid+1);
        }
        else if (nums[mid] > target)
        {
            end = mid -2;
        }
        else{
            start = mid +2;
        }
        
    }//while end
    return(-1);
    
}

int main(){

        int size,target;
        getSize(size);
        std::vector<int> vec(size);
        takeInput(vec,size);
        getTarget(target);
        if(SearchTarget(vec,target) == -1){
            std::cout<<target<<" not present in given array";
        }
        else{
            std::cout<<target<<" found at index:\t"<<SearchTarget(vec,target);
        }
        return(0);

}
