#include<iostream>
#include<string.h>
using namespace std;
class book
{
    string authername;
    string bookname;
    int price;
    public:
    book( string auther_name,string book_name,int paisa)
    {
        auther_name = authername;
        book_name = bookname;
        paisa=price;   
    }
    void show()
    {
        cout<<"enter the auther name"<<endl;
        cin>>authername;
        cout<<"enter the name of the book"<<endl;
        cin>>bookname;
        cout<<"enter the price of the book"<<endl;
        cin>>price;
    }
    void output()
    {
        cout<<authername<<" "<<bookname<<" "<<price<<endl;
    }
};
int main()
{
    book b1("abhay", "working c++",8000);
    b1.show();
    b1.output(); 
}