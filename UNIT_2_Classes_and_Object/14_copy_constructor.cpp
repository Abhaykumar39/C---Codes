#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[36];
    void display(){
        cout<<id<<" "<<name<<endl;
    }
    Student(int id, char *names){
        this->id=id;
        strcpy(name,names);
    }
    Student(Student &obj){
        id=obj.id;
        strcpy(name,obj.name);
    }
};
int main()
{
    Student ram(1,"ram");
    ram.display();
    Student abhay(ram);
    abhay.display();
}