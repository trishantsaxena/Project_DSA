#include<iostream>
#include<cmath>
#include<vector>
void getNum(int &num){
    std::cout<<"\nEnter Number:\t";
    std::cin>>num;
}
 void printJSeq(int num, std::vector<int> &nums){
  
    if(num == 1){
        // std::cout<<num<<" ";
        nums.push_back(num);
        return;
    }
    if(num & 1){
        //  std::cout<<num<<" ";
        nums.push_back(num);
         printJSeq((int)(std::sqrt(std::pow(num,3))),nums);
         return;
    }
    else{
        //  std::cout<<num<<" ";
         nums.push_back(num);
         printJSeq((int)(std::sqrt(num)),nums);
         return;
    }

   
}

std::vector<int> juggerSeq(int N){
    std::vector<int> nums;
    printJSeq(N,nums);
    return(nums);
}
int main(){
    int num;
    getNum(num);
    std::vector<int> seq = juggerSeq(num);

    for (int i = 0; i < seq.size(); i++)
    {
        std::cout<<seq[i]<<" ";
    }
    
    
    return(0);

}