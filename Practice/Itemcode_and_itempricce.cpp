#include <iostream>
#include <stdlib.h>
using namespace std;
class item
{
    int itemcode[10];
    int itemprice[10];

public:
    int i = 0;
    void add()
    {
        cout << "enter item code :";
        cin >> itemcode[i];
        cout << "enter item price :";
        cin >> itemprice[i];
        i++;
    }
    void removeitem()
    {
        int x, c = 0;
        cout << "enter item code which is to be removed :";
        cin >> x;
        for (int j = 0; j < i; j++)
        {
            if (itemcode[j] == x)
            {
                itemprice[j] = 0;
                cout << "task done!" << endl;
                c++;
                break;
            }
        }
        if (c == 0)
        {
            cout << "item not found" << endl
                 << "check if the item code was correct?" << endl;
        }
    }
    void display()
    {
        for (int j = 0; j < i; j++)
        {
            cout << "price of item " << itemcode[j] << " is ";
            cout << itemprice[j] << endl;
        }
    }
};
main()
{
    int ch;
    item call;
    while (1)
    {
        cout << "enter 1 to input 2 to remove item 3 to display 4 to exit :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            call.add();
            break;
        case 2:
            call.removeitem();
            break;
        case 3:
            call.display();
            break;
        default:
            exit(0);
        }
    }
}