#include<iostream>
#include<vector>
void getSize(int &size){
    std::cout<<"\nEnter size:\t";
    std::cin>>size;
}
void getInput(std::vector<int> &vec,int size){
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
int getUnique(std::vector<int> &nums){
    int ans=0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return(ans);
    
}
int printUnique(std::vector<int> &nums){
    return(getUnique(nums));
}

int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    getInput(vec,size);
    std::cout<<"\n"<<"Unique element is:\t"<<printUnique(vec);
    return(0);
}