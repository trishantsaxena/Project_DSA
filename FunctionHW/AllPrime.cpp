#include<iostream>
void printAllPrime(int range){
    bool flag = true;
    for (int  i = 2; i <= range; i++)
    {   bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag = false;
                break;
            }
            
        }
        if(flag)
        {
            std::cout<<i<<" ";
        }
        
    }
 
}
bool checkPrime(int num){
    bool flag = true;
    for(int i = 2 ; i < num ; i++){
        if (num%i==0)
        {
            flag = false;
            break;
        }
        else{
            continue;
        }
    }
    return(flag);
}
void printPrimeFactor(int number){
    for (int  i = 1; i <= number; i++)
    {
        if(number%i==0){
            std::cout<<i<<"  ";
        }
        else{
            continue;
        }
    }
    
}
int main(){
int r;
char c;
do
{   
    system("cls");
    std::cout<<"Enter Number: ";
    std::cin>>r;
    std::cout<<"\nAll primer number between 1 to "<<r<<": \n";
    printAllPrime(r);
    if (checkPrime(r))
    {
        std::cout<<"\n"<<r<<" is prime.";
    }
    else
    {
        std::cout<<"\n"<<r<<" is not prime.";
    }

    std::cout<<"\n\nPrime factors of "<<r<<" : \t\n";
    printPrimeFactor(r);
    std::cout<<"\n\nWant to enter again?\t";
    std::cin>>c;
} while (c == 'y' || c == 'Y');

system("cls");
std::cout<<"\nThanks for using this program. Have a good day!!\n\n";

return 0;
}

