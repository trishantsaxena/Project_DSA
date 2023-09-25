/* 
    Divide two numbers in O(logn) time complexity.
    First we need to return the integer part only or we can say the possible answer only.
    29/7 = 4

 */
#include<iostream>
void checkInput(long &divisor, long &dividend){
    if (dividend == 0)
    {
        std::cout<<"Answer is "<<0;
    }
    else if (divisor == 0)
    {
        std::cout<<"Answer is "<<char(236);
    }
    
    
}

void getInput(long &divisor, long &dividend, int &precision){
        std::cout<<"\nEnter Divisor:\t";
        std::cin>>divisor;
        std::cout<<"\nEnter Dividend:\t";
        std::cin>>dividend;
        std::cout<<"\nEnter Precision:\t";
        std::cin>>precision;
        checkInput(divisor,dividend);
     
}

void getPrecision(double &ans, long divisor, long dividend, int precise){
    double step = 0.1;
    for (int i = 0; i < precise; i++)
    {
        for (double j = ans; j*divisor <= dividend; j = j+step)
        {
            ans = j;
        }
        step = step/10;

    }

}

double divideNumbers(long divisor, long dividend,int precise){
    int start = 0;
    int end = dividend-1;
    double ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(mid * divisor > dividend){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
    }
    std::cout<<"Answere in function: "<<ans;
    getPrecision(ans, divisor,dividend,precise);
    return(ans);
    
}
void printOutput(double ans, long divisor, long dividend){
    
    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
    {
        ans *=-1;
    }
    std::cout<<"Answer is "<<ans;
}
int main(){
    long divisor, dividend;
    int precision;
    getInput(divisor,dividend,precision);
    double ans = divideNumbers(std::abs(divisor), std::abs(dividend),precision);
    printOutput(ans,divisor,dividend); 
    return(0);
}