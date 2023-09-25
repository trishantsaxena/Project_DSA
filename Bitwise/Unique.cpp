#include<iostream>
#include<vector>
int getUnique(std::vector<int> &nums, int size){
    int ans = 0;
    for (int  i = 0; i < size; i++)
    {
        ans = ans ^ nums[i];
    }

    return(ans);
}
int main(){
    int size;
    std::cin>>size;
    std::vector<int> vec(size);
    for (int  i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    int unq = getUnique(vec,size);
    std::cout<<unq;
    
}