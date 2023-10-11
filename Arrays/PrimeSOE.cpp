#include<iostream>
#include<vector>
void getRange(int &n){
    std::cout<<"\nEnter Range:\t";
    std::cin>>n;
}
std::vector<bool>/* int */ getPrimeNum(int range){
std::vector<bool> sieve(range+1,true);
sieve[0] = sieve[1] = false;
int ans = 0;
for (int i = 2; i*i <= range; i++)
{   
    if (sieve[i])
    {   
        int j = i*i;
        while (j <= range)
        {   ans++;
            sieve[j] = false;
            j = j+i;
        }
        
    }
    
}

return(sieve);
}
void printOutput(std::vector<bool> &ans,int range){
    for (int  i = 0; i <= range; i++)
    {
        if(ans[i]){
            std::cout<<i<<" ";
        }
    }
    
}
int main(){
int range;
getRange(range);
std::vector<bool> prime /* int count */= getPrimeNum(range);
/* std::cout<<count; */
printOutput(prime,range);
return(0);
}