/* 
    Given a array of length N, 
    at each step it is reduced by 1 element. 
    In the first step the maximum element would be removed, 
    while in the second step minimum element of the remaining 
    array would be removed, in the third step again the maximum 
    and so on. Continue this till the array contains only 1 element. 
    And find the final element remaining in the array.

    Input:
    N = 7
    A[] = {7, 8, 3, 4, 2, 9, 5}
    Ouput:
    5
    Explanation:
    In first step '9' would be removed, in 2nd step
    '2' will be removed, in third step '8' will be
    removed and so on. So the last remaining
    element would be '5'.

 */
#include<iostream>
#include<vector>
#include<algorithm>
int printLeftElement(int a[], int size){
    if (size < 1)
    {
        return(a[0]);
    }
    
    
    std::vector<int> nums(a,a+size);
    std::sort(nums.begin(),nums.end());
    int i =0;
    int j = size-1;

    while (i < j)
    {
        j--;
        i++;
    }
    if (size%2==0)
    {
        return(nums[i-1]);
    }
    
    return(nums[i]);
}
int main(){
    int size;
    std::cin>>size;
    int *arr = new int[size];
    for (int  i = 0; i < size; i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"\n"<< printLeftElement(arr,size);

    free(arr);
    return(0); 
}