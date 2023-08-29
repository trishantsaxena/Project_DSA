#include<iostream>
int main(){
    std::cout<<&std::cout<<std::endl;
    int x;
    if(std::cin>>x /*, std::cout<<"\t--> if executed here."*/){
        std::cout<<"\n\tcin statement executes successfully in if block.\n\n";
    }
    else if (std::cout<<x<<"\t--> \telse-if executed here")
    {
        std::cout<<"\t&cout statement executed successfully in else-if block :)\n\n";
    }
    
    else {
        std::cout<<"My name is Trishant.";
    }
    return 0;

}

/**/
