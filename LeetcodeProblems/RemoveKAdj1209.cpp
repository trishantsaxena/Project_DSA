/* 
    1209. Remove All Adjacent Duplicates in String II

    You are given a string s and an integer k, a k duplicate removal 
    consists of choosing k adjacent and equal letters from s and removing them, 
    causing the left and the right side of the deleted substring to concatenate together.

    We repeatedly make k duplicate removals on s until we no longer can.

    Return the final string after all such duplicate removals have been made. 
    It is guaranteed that the answer is unique.

    Example:

    Input: s = "deeedbbcccbdaa", k = 3
    Output: "aa"
    Explanation: 
    First delete "eee" and "ccc", get "ddbbbdaa"
    Then delete "bbb", get "dddaa"
    Finally delete "ddd", get "aa"

 */
#include<iostream>
#include<string.h>
void getInput(std::string &inp){
    std::cout<<"\nEnter String:\t";
    std::getline(std::cin,inp);
}

void getK(int &k){
    std::cout<<"Enter K:\t";
    std::cin>>k;
}

std::string removeKadjacentDup(std::string &s, int &k){
       int i,j=0,c=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[j]){
                c++;
            }
          
            if(c==k){
                s.erase(j,k);
                c=1;
                i=0;j=0;
                  std::cout<<s<<std::endl;
            }
              if(s[i]!=s[j]){
                j=i;
            }
          
        }
        return s;
    }
void printOutput(std::string &fans){
    
    std::cout<<"\nFinal String:\t"<<fans;
}
int main(){
    std::string input;
    getInput(input);
    int k;
    getK(k);
    std::string ans = removeKadjacentDup(input,k);
    printOutput(ans);
    return(0);
}