/* 
    At least two greater elements

    Given an array of N distinct elements, 
    the task is to find all elements in array 
    except two greatest elements in sorted order.

    Input : 
    a[] = {2, 8, 7, 1, 5}
    Output :
    2 8 7 1 5
    1 2 5 
    Explanation :
    The output three elements have two or
    more greater elements.   
 */
#include<iostream>
#include<vector>
#include<algorithm>
void getSize(int &size){
    std::cout<<"\nEnter Size:\t";
    std::cin>>size;
}
void getElements(std::vector<int> &vec, int &size){
    std::cout<<"Enter Elements:\t";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
void QuickSort(std::vector<int> &nums, int start, int end){

    int pivot = end;
    int i = start -1;
    int j = start;
    if(start >= end) return;

    while (j < pivot)       
    {
        if (nums[pivot] > nums[j])
        {
            ++i;
            std::swap(nums[j], nums[i]);
        }
        j++;
        
    }
    ++i;
    std::swap(nums[pivot], nums[i]);

    QuickSort(nums, i+1, end);
    QuickSort(nums, start, i-1);
    

}
/* std::vector<int> findElements(std::vector<int> &nums, int size){
    //int start = 0 ;
    //int end = size-1;
    std::cout<<"\nSending the array for Sorting:\t";
    //QuickSort(nums,start, end);
    std::sort(nums.begin(), nums.end());

    std::vector<int> ans(size-2);
    for (int i = 0; i < size-2; i++)
    {
        ans[i] = nums[i];
    }
    return(ans);
} */
    std::vector<int> findElements(int a[], int n)
    {
        // Your code goes here   
        
        std::vector<int> nums(a,a+n);
        std::sort(nums.begin(), nums.end());
        std::vector<int> ans(n-2);
        for(int i = 0; i < n-2; i++){
            ans[i] = nums[i];
        }
        return(nums);
    }
int main()
{
    //int size;
    int arr[] = {9,8,7,6,5,4,3,2,1};
   int size = 9;
    std::vector<int> myVec(arr,arr+size);

/*         std::sort(myVec.begin(), myVec.end());
    for (const &element : myVec)
    {
        std::cout<<element+3<<" ";
    } */
    

    // getSize(size);
    // std::vector<int> vec(size);
    // getElements(vec,size);
   std::vector<int> ans =  findElements(arr,size);
    std::cout<<"\n";
    for (int  i = 0; i < ans.size(); i++)
    {
        std::cout<<ans[i]<<" ";
    }
    return(0);
}