#include <iostream>

using namespace std;

//Prototypes
void drawLine(), message();

int main() {
    cout << "Hello, World! The program begins in the main()." << endl;
    drawLine();
    message();
    drawLine();
    cout << "This is the end of the main()." << endl;
    return 0;
}

//prints a dotted line
void drawLine() {
    cout << "---------------------------------------------" << endl;
}

//prints a message
void message() {
    cout << "I'm in the message function!" << endl;
}