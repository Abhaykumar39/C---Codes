#include <iostream>
#include <stdlib.h>
using namespace std;
#define maxs 10
class cqueue
{
    int q[maxs], f = -1, r = -1;

public:
    void cinsert()
    {
        if ((r + 1) % maxs == f)
        {
            cout << "queue is full " << endl;
        }
        else
        {
            int x;
            cout << "enter a number :";
            cin >> x;
            r = (r + 1) % maxs;
            q[r] = x;
            if (f == -1)
            {
                f = r;
            }
        }
    }
    void cremove()
    {
        if (f == -1)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout << "the removed element is " << q[f] << endl;
            if (r == f)
            {
                r = f = -1;
            }
            else
            {
                f = (f + 1) % maxs;
            }
        }
    }
    void display()
    {
        if (f == -1)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            int i = f;
            while (i != r)
            {
                cout << q[i] << endl;
                i = (i + 1) % maxs;
            }
            cout << q[i] << endl;
        }
    }
};
main()
{
    int ch;
    cqueue call;
    while (1)
    {
        cout << "enter 1 to insert 2 to remove 3 to display 4 to exit:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            call.cinsert();
            break;
        case 2:
            call.cremove();
            break;
        case 3:
            call.display();
            break;
        default:
            exit(0);
        }
    }
}