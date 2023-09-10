#include<iostream>
int Fact(int key){
    int ans=1;
    for (int i = key; i >0; i--)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        ans = ans*i;
    }
    return ans;
                                                            
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<"Factorial of "<<n<<" is "<<Fact(n);
    return 0;
}