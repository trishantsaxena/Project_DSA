#include<iostream>
int main(){
    int i =3;
    std::cout<<&i;
    int* ptr1 = &i;

    char ch = 'k';
    char *ptr2 = &ch;

    long num = 100;
    long* ptr3 = &num;

    std::cout<<"\nptr1\t"<<sizeof(ptr1);
    std::cout<<"\nptr2\t"<<sizeof(ptr2);
    std::cout<<"\nptr3\t"<<sizeof(ptr3);

    return(0);
}