#include<iostream>
class Student
{
    private:
    std::string gf;

public:
    int id;
    int age, nos;
    bool present;
    std::string name;
/*     Student();
    ~Student(); */

    Student(){
        // std::cout<<"Default Constructor\n";
    }
        Student(int _id, int _age, int _nos, std::string _name, bool _present){
        id = _id;
        age = _age;
        nos = _nos;
        name = _name;
        present = _present;
    }

    void study(){
        std::cout<<"Studying\n";
    }

        void sleep(){
        std::cout<<"Sleeping\n";
    }

        void bunk(){
        std::cout<<"Bunk\n";
    }

    private:
    void chatting(){
        std::cout<<"Chatting\n";
    }

};

int main(){
 Student *s1 = new Student(1011,22,34,"Trishant",true);
 std::cout<<s1->name;
 std::cout<<(*s1).name;
 free(s1);
return(0);
}
