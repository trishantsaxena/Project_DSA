/*
    Task is to find the missing element from the sorted array.
    1 2 3 4 6 7 8 9
    Missing element is 5.
 */
#include<iostream>
#include<vector>
int findMissing(std::vector<int> &nums){
    int missing = -1;
    int start = 0;
    int end = nums.size()-1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        int diff = (nums[mid] - mid);

        if (diff == 1)
        {
            start = mid+1;
        }
        else
        {
            missing = mid+1;
            end = mid -1;
        }
           
    }

    if(missing == -1){
        return(nums.size()+1);
    }

    return(missing);
    

}
int main(){
    int size;

    std::cout<<"Enter size: \t";
    std::cin>>size;
    std::vector<int> vec(size);
    std::cout<<"\nEnter the elements in array: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
    int c = findMissing(vec);
    if (c)
    {
        
        std::cout<<"\nThe missing element is "<<c;
    }
    else{
        std::cout<<"\nThe missing element is "<<c;
    }
    return(0);
    
}