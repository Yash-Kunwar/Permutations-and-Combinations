//A program to calculte the permutations and combinations. Input is taken from user.

#include <iostream>
using namespace std;

int fact(int a)
{
    if (a > 1)
    {
        return a * fact(a - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n1, n2, n3, n, r, choice;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    do
    {
        if (n < r)
        {
            cout << "n cannot be less than r" << endl;
            cout << "--ENTER AGAIN--" << endl;
            cin >> n >> r;
        }
    } while (n < r);

    cout << "\tEnter 1 to find Permutations " << endl;
    cout << "\tEnter 2 to find Combinations " << endl;
    cout << "Enter your choice :-" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        n1 = fact(n);
        n2 = fact(n - r);
        n3 = n1 / n2;
        cout << "nPr = " << n3;
        break;

    case 2:
        n1 = fact(n);
        n2 = fact(n - r) * fact(r);
        n3 = n1 / n2;
        cout << "nCr = " << n3;
        break;

    default:
        cout << "You entered incorrect choice";
        break;
    }
    return 0;
}
