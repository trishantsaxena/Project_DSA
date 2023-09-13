#include<iostream>

bool isPerfectNumber(long n)
{
    int sum=0;
    for(int i =1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    std::cout<<"Sum is "<<sum;
    return sum==n;
}
int main()
{
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    {
        long N;
        std::cin>>N;
        if(isPerfectNumber(N))
        {
            std::cout<<"\n"<<N<<" is a Perfect Number.\n";
        }
        else
        {
            std::cout<<"\n"<<N<<" is not a Perfect Number.\n";
        }
    }
    return 0;
}
