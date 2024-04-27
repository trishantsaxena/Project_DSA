#include<string>
#include<iostream>
std::string stringConcat(std::string str1, std::string str2){
    std::string con ="";
    //con[(str1.size() + str2.size())-1] = '\0';

    //con.push_back(str1[1]);
    int i=0;
    while (str1[i] != '\0')
    {
        con.push_back(str1[i]);
        i++;
    }
    int j=0;
    while (str2[j] != '\0')
    {
        con.push_back(str2[j]);
        j++;
    }
    return(con);
}
int main(int argc, char const *argv[])
{
    std::string str1,str2;
    std::cout<<"\nString 1:\t";
    std::getline(std::cin,str1);
    std::cout<<"\nString 2:\t";
    std::getline(std::cin,str2);

    //std::string conc = stringConcat(str1,str2);

    std::cout<<"\nConcatenated String:\t"<<str1+str2;
    return 0;
}
