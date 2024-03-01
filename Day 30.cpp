#include <iostream>

using namespace std;

int main() {
    cout << "Please enter your name: ";
    char userName[100];
    cin >> userName;
    cin.ignore();  

    cout <<"Feedback: I really enjoyed this 30 days of coding challenge, got to know some programming insights and got hands-on experience in different techniques and approaches to solve different sets of problems or questions. It was a truly memorable experience" << "\n";

    cout << "\nDear " << userName << ",\n";
    cout << "Thank you for sharing your 30-day coding experience.\n";
    cout << "Your reflections are valuable to us.\n";
    cout << "Wishing you continued success on your learning path!\n";

    return 0;
}
