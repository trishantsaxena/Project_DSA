/* 
    Illustrating Funtion Pointer
 */
#include<iostream>
float p;
int main(){
    int i(3);
    float f(3.5), *prod(0);
    float* mul(int, float);
    prod = mul(i, f);
    std::cout<<"\nprod = "<<*prod<<"\t&prod = "<<&prod; 
    return(0);
}
float* mul(int a, float b){
    
    p = a*b;
    std::cout<<"\np = "<<p<<"\t&p = "<<&p;
    return(&p);
}

/* 
    Another Way to Define the mul function
 */

/* 
    
    float* mul(int a, float b) {
    float *p = new float; // Allocate memory on the heap
    *p = a * b;
    std::cout << "\np = " << *p << "\t&p = " << p;
    return p;
    }
 */