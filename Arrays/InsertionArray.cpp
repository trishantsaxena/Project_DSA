#include<iostream>
#include<vector>
#include<climits>
void takeInput(std::vector<int> &nums1, std::vector<int> nums2){
    int s1, s2;
    std::cout<<"Number of elements in Array 1\t";
    std::cin>>s1;
    int i,j;i=j=0;
    while(i++<s1)
        std::cin>>nums1[i];

    std::cout<<"Number of elements in Array 2\t";
    std::cin>>s2;

    while(j++<s2)
        std::cin>>nums2[j];
    
}
void displayOutput(std::vector<int> &nums1, std::vector<int> &nums2){

    nums1.shrink_to_fit();
    for(const auto& num : nums1)
        std::cout<<num<<" ";

    nums2.shrink_to_fit();
    for(const auto& num2 : nums2)
        std::cout<<num2<<" ";
    
    
}
int main(int argc, char const *argv[])
{
    std::vector<int> nums1(1000);
    std::vector<int> nums2;
    takeInput(nums1,nums2);
    
    displayOutput(nums1,nums2);
    return 0;
}
