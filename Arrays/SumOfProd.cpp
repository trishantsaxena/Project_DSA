#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"Array Size:\t";
    std::cin>>size;
}
void takeInput(std::vector<long long> &nums){
    std::cout<<"\nEnter Elements:\t";
    for(auto &i:nums)
        std::cin>>i;
}
long long SumOfProduct(std::vector<long long> &nums,int size){
    long long sum = 0;
    for(int i = 0;i<size;i++){
        for(int j = i+1; j<size;j++){
            // std::cout<<nums[i]<<"&"<<nums[j]<<" = "<<(nums[i]&nums[j])<<" ";
            sum = sum + (nums[i]&nums[j]);
        }
    }
    return(sum);
}
int main(int argc, char const *argv[])
{
    int size;
    getSize(size);
    std::vector<long long> nums(size);
    takeInput(nums);
    std::cout<<"\nSum of Product of given array is:\t"<<SumOfProduct(nums,size);
    return 0;
}
