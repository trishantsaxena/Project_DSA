/*
    Debug the code. It is trying to print the given pattern.

    1
    23
    345
    4567

*/
#include<iostream>
int main(){
    int n;
    int i=1;
    n=4;
    while(i<=n){
        int j = i,count = 1;
        while(count<=i){
            std::cout<<j;
            j = j + 1;
            count = count + 1;
        }
        std::cout<<"\n";
        i = i + 1;
    }
}


/* Successfully Debug, initialized the value of n,
    i should be <= nso is, count<= i
*/