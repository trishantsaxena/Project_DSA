/* 

    1137. N-th Tribonacci Number

    The Tribonacci sequence Tn is defined as follows: 

    T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

    Given n, return the value of Tn.

    Example:

    Input: n = 4
    Output: 4
    Explanation:
    T_3 = 0 + 1 + 1 = 2
    T_4 = 1 + 1 + 2 = 4

 */
#include<iostream>
void getRange(int &N){
    std::cout<<"\nEnter Range:\t";
    std::cin>>N;
}
void printTribonacci(int &range){
    int f = 0, s = 1, t = 1;
    std::cout<<f<<" "<<s<<" "<<t<<" ";
    for (int  i = 3; i <= range; i++)
    {
        int next  = f + s + t;
        f = s;
        s = t;
        t = next;
        std::cout<<next<<" ";
    }
    
}
int main(){
    int range;
    getRange(range);
    printTribonacci(range);
    return(0);  
}