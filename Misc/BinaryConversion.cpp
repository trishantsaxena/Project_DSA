#include<iostream>
#include<cmath>
int convertDecimal(int n){
    int binary=0;
    // int placeValue=1;
    int i=0;
    while (n>0)
    {
           int bit = n%2;
           std::cout<<"\nn = "<<n<<" \t bit =  "<<bit<<std::endl;
           binary= (bit*pow(10,i))+binary;
    //     binary = binary+(bit*i);
           std::cout<<"\nBinary = " <<binary<<"\t"<<std::endl;
           n=n/2;
           i=i*10;
        //  int bit = n % 2;
        // binary = binary + bit * placeValue;
        // n = n / 2;
        // placeValue *= 10; // Update the place value for the next bit

    }
    return binary;
    
}
int main(){
    int number;
    char ch;
    do
    {
          system("cls");
    std::cout<<"\nEnter a decimal number:\t";
    std::cin>>number;
    std::cout<<std::endl<<"\nBinary Conversion:\t"<<convertDecimal(number);
    std::cout<<"\n\nDo you want to enter another decimal? (y/n) : \t";
    std::cin>>ch;
    } while (ch=='y'||ch=='Y');
  
    return 0;

}