#include<iostream>
#include<string.h>
#include<string>
#include<sstream>
void getIntNumbmer(int &a, int &b){
    std::cout<<"\nEnter two number:\t";
    std::cin>>a>>b;
}
void addNumber(int &f, int &s){
    std::stringstream obj, obj2;
    obj << f;
    obj2 << s;
    // std::string str = obj.str();
    // std::string str2 = obj2.str();
    // std::string res = strcat(str,str2);
    
    std::cout<<"\nFinal Result:\t"<<obj.str().append(obj2.str());

}
/* void getNumber(std::string &a, std::string &b){
    std::cout<<"\nEnter two digits:\t";
    std::cin>>a>>b;
} */
/* int addNumber(std::string f, std::string s){
    //int sum ;
    std::stringstream obj1,obj2;
    obj1 << f;
    obj2 <<s;
    int x,y;
    obj1 >> x;
    obj2 >> y;

    // int a =  stoi(f);
    // int b = stoi(s);
    return(x+y);

} */
int main(){
    // std::string first,second;
    int a,b;
/*     getNumber(first,second);
    std::cout<<"Sum of both:\t"<<addNumber(first,second); */
    getIntNumbmer(a,b);
    addNumber(a,b);
    return(0);
}