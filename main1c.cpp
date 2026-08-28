#include <iostream>
#include <string>
using namespace std;

int main()
{ //show the commit(git).....
    string input;

    cout << "Enter a function definition in one line: ";
    getline(cin, input);

    if (input == "int add(int a, int b) { return a + b; }" ||
        input == "int square(int x) { return x * x; }" ||
        input == "void display() { cout << \"Hello\"; }")
    {
        cout << "Proper function definition." << endl;
    }
    else
    {
        cout << "Improper function definition." << endl;
    }

    return 0;
}
