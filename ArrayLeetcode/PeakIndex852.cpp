/* 

    852. Peak Index in a Mountain Array

    An array arr is a mountain if the following properties hold: arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
    arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
    arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
    Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

    You must solve it in O(log(arr.length)) time complexity.

 */
#include<iostream>
#include<vector>
int findPeakIndexofMountainArray(std::vector<int> &nums){
    int start  = 0;
    int end = nums.size();
    while (start < end)
    {   
        int mid = start + (end-start)/2;
        if (nums[mid] < nums[mid+1])
        {
            start = mid +1;
        }
        else{
            end = mid;
        }
        
    }
    return(end);

}
int main(){
    int size;
    std::cout<<"Enter size: \t";
    std::cin>>size;
    std::vector<int> vec(size);
    std::cout<<"\nEnter Mountain array: \n";
    for (int  i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    std::cout<<"Peak element of mountain array is present at "<<findPeakIndexofMountainArray(vec)<<" index.";
    

}