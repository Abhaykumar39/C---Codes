///*************** IMPLEMENTING STACK USING CLASS TEMPLATE *************  //

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
#define m 5
template <class T>
class Stack
{
    T stk[m];
    int top;
    public:
    Stack()
    {
        top=-1; /// default constructor to initialize top
    }
    void push()
    {
            if(top==m-1)
            {
                cout<<"\n\n\tStack is overflow";
                getch();
                return;
            }
            cout<<"\n\n\tenter data to push : ";
            top++;
            cin>>stk[top];
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"\n\n\tStack is underflow";
            return;
        }

        cout<<"\n\n\tPopped data : "<<stk[top];
        top--;
    }
    void disp()
    {
        int i;
        if(top==-1)
        {
            cout<<"\n\n\tStack is underflow";
            return;
        }

        cout<<"\n\n";
        for(i=top;i>=0;i--)
        {
            cout<<"\n\t"<<stk[i];
        }

    }
};
int main()
{
    Stack <int> s1;             /// IMPLEMENTS INTGER STACK //
    int ch;
    while(1)
    {
        cout<<" 1. push \n 2. pop \n 3.display \n 4.exit ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                s1.push();
                break;
            case 2:
                s1.pop();
                break;
            case 3:
                s1.disp();
                break;
            case 4:
                exit(0);
        }
    }
}
