/* 

    
    70. Climbing Stairs
    
    You are climbing a staircase. It takes n steps to reach the top.
    
    Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
    
    Example:
    
    Input: n = 3
    Output: 3
    Explanation: There are three ways to climb to the top.
    1. 1 step + 1 step + 1 step
    2. 1 step + 2 steps
    3. 2 steps + 1 step
    

 */

#include<iostream>
void getStairs(int &s){
    std::cout<<"\nEnter Stairs\t";
    std::cin>>s;
}
int calcWaystoClimb(int &N){
    if (N == 1 || N == 0){
        return(1);
    }
    
    if (N == 2)
    {
        return(2);
    }

    int F = 1;
    int S = 2;
    int ways = 0;
    for (int  i = 3; i <=N ; i++)
    {
        ways =  F+S;
        F = S;
        S = ways;
    }

    return(ways);
    
    

}
int main(){
    int stairs;
    getStairs(stairs);
    std::cout<<"Total ways to reach at "<<stairs<<" stair is "<<calcWaystoClimb(stairs);
    return(0);

}