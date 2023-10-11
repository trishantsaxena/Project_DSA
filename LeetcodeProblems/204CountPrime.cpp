/* 
    204. Count Primes

    Given an integer n, return the number of prime numbers that are strictly less than n.

    Example 1:

    Input: n = 10
    Output: 4
    Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
 */
#include<iostream>
#include<vector>
void getRange(int &n){
    std::cout<<"\nEnter Range:\t";
    std::cin>>n;
}
int countTrue(std::vector<bool> &prime, int n){
    int count =0;
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
        {
            ++count;
        }
        
    }
    return(count);
}
int countPrime(int n){
    if (n <= 1)
    {
       return(0);
    }
    
    std::vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for (long long i = 2; i*i <= n; i++)
    {
        if (prime[i])
        {
            long long j = i*i;
            while (j <= n)
            {
                prime[j] = false;
                j = j+i;
            }
            
        }
        
    }   

    return(countTrue(prime,n));     
} 
int main(){
    int range;
    getRange(range);
    std::cout<<"Total Prime:\t"<<countPrime(range);
    return(0);
}  