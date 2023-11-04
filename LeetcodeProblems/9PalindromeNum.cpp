/* 

    9. Palindrome Number

    Given an integer x, return true if x is a 
    palindrome, and false otherwise.

    Input: x = 121
    Output: true

    Example 2:

    Input: x = -121
    Output: false


 */
#include<iostream>
#include<string>
#include<sstream>
void getNum(int &n){
    std::cout<<"Enter Number:\t";
    std::cin>>n;
}
std::string convertToString(int &num){
    return(std::to_string(num));
}
bool checkPalindrome(int &num){
   std::string str =  convertToString(num);
   int i =0;
   int j = str.size()-1;
   
   while (i<=j)
   {
    if(str[i] != str[j])
        return(false);

    i++;
    j--;
   }
   return(true);
   
}
int main(){
    int num;
    getNum(num);
    std::cout<<checkPalindrome(num);
    return(0);
}