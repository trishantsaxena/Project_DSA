/* 
        1047. Remove All Adjacent Duplicates In String

        You are given a string s consisting of lowercase English letters. 
        A duplicate removal consists of choosing two adjacent and equal letters and removing them.

        We repeatedly make duplicate removals on s until we no longer can.

        Return the final string after all such duplicate removals have been made. 
        It can be proven that the answer is unique.


        Example:

        Input: s = "abbaca"
        Output: "ca"
        Explanation: 
        For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal,
        and this is the only possible move.  The result of this move is that the string is "aaca", 
        of which only "aa" is possible, so the final string is "ca".

        Time Complexity : O(n) // in worst case the whole string will traverse
        Space Complexity: O(n) // In worst case the whole string will copied to ans string.
 */
#include<iostream>
#include<string.h>
void getInput(std::string &inp){
    std::cout<<"\nEnter String:\t";
    std::getline(std::cin,inp);
}
std::string removeAllAdjacentDup(std::string &input){
    std::string ans = "";
    int index =0;
    while (index < input.length())
    {
        if (ans.length() > 0 && ans[ans.length()-1] == input[index])
        {
            ans.pop_back();
        }
        else{
            ans.push_back(input[index]);
        }
        index++;
        
    }
    
    return(ans);
}
void printOutput(std::string &inp){
    
    std::cout<<"\nFinal String:\t"<<inp;
}
int main(){
    std::string input;
    getInput(input);
    std::string ans = removeAllAdjacentDup(input);
    printOutput(ans);
    return(0);
}