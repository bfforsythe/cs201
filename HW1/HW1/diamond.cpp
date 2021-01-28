#include <iostream>

int main()
{

    using std::cout;
    using std::cin;
    using std::endl;

    int dimOne, dimTwo, dimIn;
    cout << "please enter a whole number value ";
    cin >> dimIn;
    for (dimOne = 0; dimOne <= dimIn; dimOne++)
    {
        for (dimTwo = 1; dimTwo <= dimIn - dimOne; dimTwo++) {
            cout << " ";
        }
        for (dimTwo = 1; dimTwo <= 2 * dimOne - 1; dimTwo++) {
            cout << "#";
        }
        cout << endl;
    }
    for (dimOne = dimIn - 1; dimOne >= 1; dimOne--)
    {
        for (dimTwo = 1; dimTwo <= dimIn - dimOne; dimTwo++) {
            cout << " ";
        }
        for (dimTwo = 1; dimTwo <= 2 * dimOne - 1; dimTwo++) {
            cout << "#";
        }
        cout << endl;
    }

    if (dimIn <= 0)
        cout << "Woah buster brown, you can't have a negative diamond";
}