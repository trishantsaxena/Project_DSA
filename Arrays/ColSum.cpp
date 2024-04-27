#include<iostream>
#include<vector>
void takeSize(int &row, int &col){
     std::cout<<"\nRow:\t";
     std::cin>>row;
     std::cout<<"\nColumn:\t";
     std::cin>>col;
     }
void takeElements(std::vector<std::vector<int>> &nums, int row, int col){
    std::cout<<"\nEnter Element to array:\t";
    for(auto &i: nums)
        for(auto &j:i)
            std::cin>>j;
    
}
void printOutput(std::vector<std::vector<int>> &nums, int row, int col){
    std::cout<<"\nPrinting the 2D vector:\n";
    for(const auto &i:nums){
        for(const auto &j:i)
            std::cout<<j<<" ";

        std::cout<<"\n";
    }
}
void printColSum(std::vector<std::vector<int>> &nums, int row, int col){
        std::cout<<"\nRow-wise sum:\t";
        for(int i = 0;i<col;i++){
            int sum = 0;
            for(int j = 0; j<row;j++){
                sum += nums[j][i];
            }
            std::cout<<"\ncol: "<<i<<" = "<<sum<<"\n";
        }
}
int main()
{
    int row, col;
    takeSize(row,col);
    std::vector<std::vector<int>> nums(row,std::vector<int>(col,0));
    takeElements(nums,row,col);
    printOutput(nums,row,col);
    printColSum(nums,row,col);
    return 0;
}
