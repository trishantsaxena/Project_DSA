#include<iostream>
class abc{
int x;
int *y;
public:
abc(){
    x = 0;
    y = new int(0);
}

int getX() const{
    /* x = 90; // Not valid , as we have declare the function as constant. */
    return(x);
}

void setX(int _val){
    /* But we don't have to declare our setter as constant, because we want it to change the value of our
    member variable. */
    x = _val;
}

int getY() const{
    return(*y);
}

void setY(int _val){
    *y = _val;
}

};
int main(){
    abc a;
    int x,y;
    std::cout<<"\nEnter X & Y\t";
    std::cin>>x>>y;
    a.setX(x);
    a.setY(y);
    std::cout<<a.getX();
    std::cout<<"\n"<<a.getY();
    return(0);
}
int main2(){
/*     const int x = 20; // Initialization  can  be done.
    std::cout<<x;
    // x = 90;
    std::cout<<x; */

//  const with pointers
/* const int *a = new int(2); // Const Data , Non-const pointer.
std::cout<<*a<<"\n";
delete a;
int b =5;
a = &b;
std::cout<<*a<<"\n"; */

// Constant Pointer , Non- Constant Data

int *const ptr = new int(19);
std::cout<<*ptr;
*ptr = 14;
std::cout<<"\n"<<*ptr;

return(0);
}