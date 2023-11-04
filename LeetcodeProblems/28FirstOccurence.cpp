/* 
    28. Find the Index of the First Occurrence in a String

    Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, 
    or -1 if needle is not part of haystack.

    

    Example 1:

    Input: haystack = "sadbutsad", needle = "sad"
    Output: 0
    Explanation: "sad" occurs at index 0 and 6.
    The first occurrence is at index 0, so we return 0.

    Example 2:

    Input: haystack = "leetcode", needle = "leeto"
    Output: -1
    Explanation: "leeto" did not occur in "leetcode", so we return -1.
 */
#include<iostream>
#include<string>
void getString(std::string &s, std::string &n){
    std::cout<<"\nEnter Haystack String:\t";
    std::getline(std::cin, s);
    std::cout<<"\nEnter Needle String:\t";
    std::getline(std::cin, n);
}
int checkFirstOccurrence(std::string &hst, std::string &ned){
    std::size_t found = hst.find(ned);
    if(found != std::string::npos) return(found);

    return(-1);
}
int main(){
    std::string str,sub;
    getString(str,sub);
    std::cout<<checkFirstOccurrence(str,sub);
    return(0);
}