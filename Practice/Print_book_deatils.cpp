#include<iostream>
#include<string>
using namespace std;
class Book
{
    string authorname;
    string bookname;
    int price;
    public:
    // parameterized constructor
    Book(string _authorname, string _bookname, int _price){
        authorname = _authorname;
        bookname = _bookname;
        price = _price;
    }
    
    void display(){
        cout<<authorname<<" "<<bookname<<" "<<price<<endl;
    }
};
int main(){
    Book b1 ( "ABHAY","Working with c++",8000);
    b1.display();
}