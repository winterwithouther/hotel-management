#include <iostream>

using namespace std;

int main() {
    int quant;
    int choice;
    // Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    // Food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    // Total price of items
    int total_rooms=0, total_pasta=0, total_burger=0, total_noodles=0, total_shake=0, total_chicken=0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available:";
    cin >> Qrooms;
    cout << "\n Quantity of pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
    cout << "\n Quantity of noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake : ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll : ";
    cin >> Qchicken;

    cout << "\n\t\t Please select from the menu options ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n2) Chicken-roll";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n8 Exit";

    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";

            cin >> quant;
            if (Qrooms - Srooms >= quant) {
                Srooms = Srooms + quant;
                total_rooms = total_rooms * quant * 1200
            }
    }

}