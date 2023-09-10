#include<iostream>
int convertDecimal(int n){
    int binary=0;
    
    // int placeValue=1;
    int i=1;
    while (n>0)
    {
           int bit = n%2;
        //    std::cout<<"\nn = "<<n<<" \t bit =  "<<bit<<std::endl;
           binary= (bit*i)+binary;
    //     binary = binary+(bit*i);
        //    std::cout<<"\nBinary = " <<binary<<"\t"<<std::endl;
           n=n/2;
           i=i*10;
        //  int bit = n % 2;
        // binary = binary + bit * placeValue;
        // n = n / 2;
        // placeValue *= 10; // Update the place value for the next bit

    }
    return binary;
    
}
int bitwiseANDdecimal(int number){
    // std::cout<<"\nEntered the bitwiseANDdecimal Funciton()";
    int binary=0;
    int bit;
    int i =1;
    while (number>0)    
    {   //std::cout<<"\nEntered while loop.";
        bit = (number&1);
        // std::cout<<"number = "<<number<<"\t and bit = "<<bit<<std::endl;
        binary = bit *i +binary;
        // std::cout<<"binary = "<<binary<<std::endl;
        number = number>>1;

        i=i*10;
        
    }
    // std::cout<<"\nExit while loop";
    
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
    std::cout<<std::endl<<"\nBinary Conversion By Division Method  :\t"<<convertDecimal(number);
    std::cout<<"\nBinary Coversion By Bitwise Method: \t"<<bitwiseANDdecimal(number);
    std::cout<<"\n\nDo you want to enter another decimal? (y/n) : \t";
    std::cin>>ch;
    } while (ch=='y'||ch=='Y'); 
    system("cls");
    std::cout<<"Thanks for running program, Have a good Day!!!\n\n";
    
  
    return 0;

}