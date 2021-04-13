#include <iostream>
#include <string>
#include "Queue1.h"
/*TODO: 5 files
 * Node have int and *
 * Dynamic memory(new/delete)
 * Menu:
 *      1) Push
 *      2) Pop
 *      3) Show queue
 *      4) Task
 *      5) Copy queue
 *      6) Merge queue
 *      7) exit*/

using namespace std;
void Menu(QueuePriv& PubA, QueuePriv& PubB);

int main() {
    QueuePriv PubA, PubB;
    Menu(PubA, PubB);
    return 0;
}
void Menu(QueuePriv& PubA, QueuePriv& PubB) {
    int choose;
    cout << "What You want to do?" << endl << endl;
    cout << "1) Add new node" << endl;
    cout << "2) Take last existing node" << endl;
    cout << "3) Show queue" << endl;
    cout << "4) Find and Show last node with number smaller then average" << endl;
    cout << "5) Copy queue" << endl;
    cout << "6) Merge queue" << endl;
    cout << "7) Exit" << endl;
    cin >> choose;
    if (choose == 1 || choose == 2 || choose == 3 || choose == 4 || choose == 5 || choose == 6 || choose == 7) {
        switch (choose) {
        case 1:
        {int i = 0;
        int g = 1;
        while (g == 1) {

            if (g == 2) {
                break;
            }
            if (g != 1 && g != 2) {
                cout << "Wrong option, you were moved to the main page" << endl;
                break;
            }
            cout << "Enter the Number" << endl;
            cin >> i;
            PubA.PrivPush(i);
            cout << "Continue (1 - Yes, 2 - No)" << endl;
            cin >> g;
        }
        Menu(PubA, PubB);
        break; }

        case 2:
            if (PubA.PrivEmpty()) {
                cout << "Queue is empty" << endl;
                Menu(PubA, PubB);
            }
            PubA.PrivPop();
            Menu(PubA, PubB);
            break;
        case 3: {int i;
            cout << "A (1) or B (2) Queue must be showed?";
            cin >> i;
            if (1 == i)
                PubA.PrivShowQueue();
            else
                PubB.PrivShowQueue();
            Menu(PubA, PubB);
            break; }
        case 4:
            if (PubA.PrivEmpty()) {
                cout << "Queue is empty" << endl;
                Menu(PubA, PubB);
            }
            PubA.SmallThenAverageNumber();
            Menu(PubA, PubB);
            break;
        case 5:
            if (PubA.PrivEmpty()) {
                cout << "Queue is empty" << endl;
                Menu(PubA, PubB);
            }
            PubA.PrivCopy(PubB);
            Menu(PubA, PubB);
            break;
        case 6:
            if (PubA.PrivEmpty()) {
                cout << "Queue is empty" << endl;
                Menu(PubA, PubB);
            }
            PubA.PrivMerge(PubB);
            Menu(PubA, PubB);
            break;
        default:
            exit(0);
            break;
        }
    }
    else {
        cout << "Wrong option, try again" << endl;
        Menu(PubA, PubB);
    }
}