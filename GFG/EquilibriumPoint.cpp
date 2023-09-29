/* 

        Equilibrium Point
        Given an array A of n positive numbers. 
        The task is to find the first equilibrium point in an array. 
        Equilibrium point in an array is a position such that the sum of elements 
        before it is equal to the sum of elements after it.

        Note: Return equilibrium point in 1-based indexing. 
              Return -1 if no such point exists. 

        Input: 
        n = 5 
        A[] = {1,3,5,2,2} 
        Output: 
        3 
        Explanation:  
        equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 

        n = 1
        A[] = {1}
        Output: 
        1
        Explanation:
        Since there's only element hence its only the equilibrium point.

 */
#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"Enter size: \t";
    std::cin>>size;
}
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
}
int findEquilibriumPoint(std::vector<int> &nums){
    int start =0;
    int end = nums.size()-1;
    while (start <= end)
    {
        int mid = start + (end - start);
        int lsum=0;
        int rsum=0;
        for (int i = mid-1; i >= 0; i++)
        {
            lsum = lsum + nums[i];
        }
        
        for (int i = mid-1; i >= 0; i++)
        {
            rsum = lsum + nums[i];
        }


        
    }
    
}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    takeInput(vec,size);
    std::cout<<"Equilibrium Point is\t"<<findEquilibriumPoint(vec);
    return(0);
}