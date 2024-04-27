#include<iostream>
int main(){
    char c, *cc;
    int i;
    long l;
    float f;

    c = 'Z';
    i = 15;
    l = 77777;
    f = 3.14;

    cc = &c;

    std::cout<<"\nc = "<<*cc<<"\tcc = "<<cc;

    cc = &i;

    std::cout<<"\nc = "<<c<<"\tcc = "<<cc;
    
    cc = &l;

    std::cout<<"\nc = "<<c<<"\tcc = "<<cc;
    
    cc = &f;

    std::cout<<"\nc = "<<c<<"\tcc = "<<cc;

    return(0);

}