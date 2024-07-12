#include <iostream>

using namespace std;

void letterInput() {
    char ch;
    cin >> ch;
    cout << ch;
}

void arrayInput() {
    char cBuffer[10];
    cin.get(cBuffer, 10);
    cout << cin.gcount() << endl;
    cout << cBuffer;
}

void strings () {
    string newstring;

    cin >> newstring;
    cout << "1: " << newstring << endl;

    getline(cin, newstring);
    cout << "2: " << newstring << endl;
}

void conversation() {
    string name;
    int age;

    cout << "Hello, please enter your name:  ";
    getline(cin, name);
    cout << endl << "Nice to meet you, " << name << ". Please enter your age:  ";
    cin >> age;
    cout << endl << "Is that so? I wouldn't have guessed you were " << age << "," << name << "!";
}

int main()
{
    conversation();
}
