/* 
    35. Search Insert Position
    
    Given a sorted array of distinct integers and a target value, 
    return the index if the target is found. If not, return the 
    index where it would be if it were inserted in order.
    
    You must write an algorithm with O(log n) runtime complexity.
    
    Example 1:
    
    Input: nums = [1,3,5,6], target = 5
    Output: 2
    
    Example 3:
    
    Input: nums = [1,3,5,6], target = 7
    Output: 4
 */
#include<iostream>
#include<vector>
void getSize(int &s){
    std::cout<<"\nEnter size:\t";
    std::cin>>s;
}
void getTarget(int &t){
    std::cout<<"\nEnter Target:\t";
    std::cin>>t;
}
void getElements(std::vector<int> &vec, int &size){
    std::cout<<"\nEnter Elements\t";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
int SeachInsertPosition(std::vector<int> &nums, int &size, int target){    
    int start = 0;
    int end = size-1;
    if (start == end)return(start+1);

     
    while (start < end)
    {
        int mid = start + (end-start)/2;
        if(nums[mid] == target){
            return(mid);
        }
        else if (nums[mid] < target)
        {
            start = mid+ 1;
        }
        else{
            end = mid -1;                              
        }
        
        
    }
    
}
int main(){
    int size, target;
    getSize(size);
    std::vector<int> vec(size);
    getElements(vec,size);
    getTarget(target);
    std::cout<<"\n"<<SeachInsertPosition(vec,size,target);
    return(0);
}