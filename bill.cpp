#include <iostream>
using namespace std;

int main() {
    int pen, eraser, pencil;

    cout << "Enter the cost of the pen: ";
    cin >> pen;

    cout << "Enter the cost of the eraser: ";
    cin >> eraser;

    cout << "Enter the cost of the pencil: ";
    cin >> pencil;

    int bill = (pen + eraser + pencil);
    int gst =(bill * 18)/100;

    int total = bill+gst;
    cout << "The total bill is: " << total << endl;

    return 0;
}
