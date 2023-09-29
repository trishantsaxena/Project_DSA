/* 
        Time Complexity : O(N^2)
        That's the drawback of this sorting method.
 */
#include<iostream>
#include<vector>
void getSize(int &a){
    std::cout<<"\nEnter size:\t";
    std::cin>>a;
}
void getInput(std::vector<int> &vec,int size){
    std::cout<<"\nEnter Elements:\t";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
void BubbleSort(std::vector<int> &nums){
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size()-i-1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                std::swap(nums[j],nums[j+1]);
            }
            
        }
        
    }
    
}
void printOutput(std::vector<int> &vec,int size){
    std::cout<<"\nSorted Array:\t";
    for (int i = 0; i < size; i++)
    {
        std::cout<<vec[i]<<" ";
    }

}
int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    getInput(vec,size);
    BubbleSort(vec);
    printOutput(vec,size);
    return(0);
}