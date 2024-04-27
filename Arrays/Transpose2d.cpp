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
    for(const auto &i:nums){    
    //std::cout<<"\nPrinting the 2D vector:\n";
        for(const auto &j:i)
            std::cout<<j<<" ";

        std::cout<<"\n";
    }
}
void Transpose(std::vector<std::vector<int>> &nums, int row, int col){

    for (int i = 0; i < row; i++)
    {
        for (int  j = i; j < col; j++)
        {
            
        }
        
    }
    

}
int main(int argc, char const *argv[])
{
    int row, col;
    takeSize(row,col);
    std::vector<std::vector<int>> nums(row,std::vector<int>(col,0));
    takeElements(nums,row, col);
    std::cout<<"\nMatrix Before Transpose:\n";
    printOutput(nums, row, col);
    Transpose(nums,row, col);
    std::cout<<"\nMatrix After Transpose:\n";
    printOutput(nums, row, col);
    return 0;
}
