#include <iostream>

using namespace std;

//Prototypes
void drawLine(), message(), pause();

int main() {
    cout << "Hello, World! The program begins in the main()." << endl;
    drawLine();
    message();
    drawLine();
    cout << "This is the end of the main()." << endl;

    cout << endl << "Dear reader, " << endl << "have a ";
    pause();
    cout << "!" << endl;

    /*
     * Oh what
    a happy day!
    Oh yes,
    what a happy day!
     */
    cout << endl << "Oh what" << endl << "a happy day!" << endl << "Oh yes," << endl << "what a happy day!" << endl;

    cout << endl;

    cout << endl << "If this text",
    cout << " appears on your display, ";
    cout << endl;
    cout << "you can pat yourself on "<< " the back!" << endl;

    return 0;
}

// Prints a dotted line
void drawLine() {
    cout << "---------------------------------------------" << endl;
}

// Prints a message
void message() {
    cout << "I'm in the message function!" << endl;
}

void pause() {
    cout << "BREAK";
}
