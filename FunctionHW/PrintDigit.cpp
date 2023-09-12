#include<iostream>
void printAllDigit(int number){
    int arr[10];
    int count=0;

    while (number)
    {
        /* std::cout<<number%10<<" "; */
        arr[count]=number%10;
        count++;
        number = number/10;
    }
    for (int i = count-1; i >=0; i--)
    {
        std::cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int num;
    std::cout<<"Enter Number(Max 10 digit):\t";
    std::cin>>num;
    std::cout<<"\n\nDigits present in "<<num<<" are: \n";
    printAllDigit(num);
    return 0;
}
