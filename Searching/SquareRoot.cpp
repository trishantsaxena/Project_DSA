/* 
    Find the square of any given numbmer in O(log n) time complexity

 */
#include<iostream>

void getPrecision(double &ans, int precise,long number){
    double step = 0.1;
    for (int  i = 0; i < precise; i++)
    {
        for (double  j = ans; j*j <= number; j = j+step)
        {
            ans = j;
        }
        step = step/10;
    }
    
}

double findSquareRoot(long number, int precise){
    double ans =1;
    int start =0;
    int end = number -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (mid * mid > number)
        {
            end = mid -1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        
    }
    //std::cout<<"Ans in find function: "<<ans;
    getPrecision(ans,precise,number);
    return(ans);
    
}
int main(){
    long number;
    std::cout<<"Enter number:\t";
    std::cin>>number;
    int precision;
    std::cout<<"Enter precision digit:\t";
    std::cin>>precision;
    std::cout<<"Square root of "<<number<<" is "<<findSquareRoot(number,precision);
    return(0);
}