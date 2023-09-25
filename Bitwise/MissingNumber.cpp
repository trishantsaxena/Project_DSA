#include<iostream>
#include<vector>
int findMissing(std::vector<int> &nums,int size){
    int ans =0;
    for (int  i = 0; i < size; i++)
    {
        ans = ans ^ nums[i];
    }
    //int ans2=0;
    for (int i = 1; i <= size; i++)
    {
        ans = ans ^ i;

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
    int miss = findMissing(vec,size);
    std::cout<<"\nMissing Number is:\t"<<miss;
    return(0);

}