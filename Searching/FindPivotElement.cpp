#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"\nEnter size: \t";
    std::cin>>size;
}
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter elements: \t";
    for (int  index = 0; index < size; index++)
    {
        std::cin>>vec[index];
    }
    
}
int findPivotElement(std::vector<int> &nums){
    int size = nums.size();
    int start =0;
    int end = size-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(start == end){
            return start;
            }
        else if (mid+1 <size && nums[mid] > nums[mid+1]){
            return mid;
        }
        else if (mid-1 >=0 && nums[mid] < nums[mid-1])  
        {
            return(mid-1);
        }
        else if (nums[start] > nums[mid])
        {
            
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return(-1);
}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    takeInput(vec,size);
    if (findPivotElement(vec) == -1)
    {
        std::cout<<"\nNot found";
    }
    
    else{
        std::cout<<"Pivot element present at : "<<findPivotElement(vec);
    }
}