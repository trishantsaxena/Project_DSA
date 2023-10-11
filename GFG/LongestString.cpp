#include<iostream>
#include<vector>
#include<string>
#include<sstream>
void getSize(int &size){
    std::cout<<"Enter Size:\t";
    std::cin>>size;
}
void getInput(std::vector<std::string> &vec, int n){
    std::cout<<"\nEnter String:\t";
    for (int i = 0; i < n; i++)
    {
        std::cin>>vec[i];
    }
    
}
std::string displayLongest(std::vector<std::string> &str){
    /* 
        har ek index ko access karke uski lenght ko max se compare karni
        hai , then max lenght ki value return kardenge;
     */
    if (str.size() <= 1)
    {
        return(str[0]);
    }
    
    int i=0;
    int j=str.size()-1;
    while (i < j)
    {
        if(str[i].size() > str[j].size()){
            j--;
        }
        else if (str[j].size() > str[i].size())
        {
            i++;
        }
        else{
            i++;
            j--;
        }
        
    }

/*         if(str[i].size() > str[j].size()){
            return(str[i]);
        }
        else if (str[j].size() > str[i].size())
        {
            return(str[j]);
        }
        else{
            return(str[i]);
        
        } */
    return(str[i]); 

}
int main(){
    int size;
    getSize(size);
    std::vector<std::string> vec(size);
    getInput(vec, size);
    std::string res = displayLongest(vec);
    std::cout<<"\nLongest String is:\t"<<res;
    return(0);
}