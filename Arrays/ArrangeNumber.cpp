/* 
    Given array:  [23 -7 12 -10 -11 40 60]
    Task is to arrange all negative in left and positive in right.
    o/p: [-7 -10 -11 23 12 40 60]
 */
#include<iostream>
#include<vector>
void takeInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements: \n";
    for (int i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}
std::vector<int> arrangeNegPos(std::vector<int> &nums){

}
void printOutput(std::vector<int> &ans){
    std::cout<<"\nRearranged Array: \n";
    for (int i = 0; i < ans.size(); i++)
    {
        std::cout<<ans[i];
    }
    
}
int main(){
    int size;
    std::cin>>size;
    std::vector<int> vec(size);
    takeInput(vec, size);
    std::vector<int> arr(size);
    arr = arrangeNegPos(vec);
    printOutput(arr);
}