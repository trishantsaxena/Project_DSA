/* 
    Debug the code. Take input a character, print 1, if its a capital alphabet,
    print 0, if its a lowercase alphabet, else print -1.
*/

#include<iostream>

int main() {
	char c;
    std::cin>>c;

    if('a'<=c && c<= 'z'){
        std::cout<<"if executed: c = "<<c<<std::endl;
        std::cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        std::cout<<"else if executed: c = "<<c<<std::endl;
        std::cout<<1;
    }
    else{
        std::cout<<"else executed: c = "<<c<<std::endl;
        std::cout<<-1;
    }
    return 0;
}

/*
    Successfully Debug, replace the || with &&.
*/