/* 
    231. Power of Two

    Given an integer n, return true if it is a power of two. Otherwise, return false.

    An integer n is a power of two, if there exists an integer x such that n == 2x.

    Example:

    Input: n = 16
    Output: true
    Explanation: 24 = 16

    Example:

    Input: n = 3
    Output: false
 */
// Correct answer is in Misc Power of 2. This is not a good method to solve this problem.
#include<iostream>
#include<cmath>
void getNum(int &N){
    std::cout<<"\nEnter number:\t";
    std::cin>>N;
}
int check(int n){
    if(n == 1) return(2);

    return(2*check(n-1));
}
bool checkPowerofTwo(int num){
    if(num & 1)return(false);

    for (int  i = 1; i <= num; i++)
    {
        int a = check(i);
        
        if (a == num)
        {
            return(true);
        }
        
    }

    return(false);
    
    
}
int main(){
    int num;
    getNum(num);
    bool res = checkPowerofTwo(num);
    if(res){
        std::cout<<"\n"<<num<<" is power of two";
    }
    else{
        std::cout<<"\n"<<num<<" is not a power of two.";
    }
    return(0);
}