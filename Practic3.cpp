//Перше завдання

/* #include <iostream>
using namespace std;
int main() {
    for (int i = 1000; i <= 9999; i++) {
        int firstDigits = i / 100;  
        int lastDigits = i % 100;  

        if (firstDigits == lastDigits) {
            cout << i << endl;
        }
    }

    return 0;
}
*/


//Друге завдання

#include <iostream>
using namespace std;

int main() {
    int apartmentNumber;

    cout << "Введіть номер квартири: ";
    cin >> apartmentNumber;

    int rooms, residents;

    switch (apartmentNumber) {
    case 1:
        rooms = 2;
        residents = 3;
        break;
    case 2:
        rooms = 3;
        residents = 4;
        break;
    case 3:
        rooms = 2;
        residents = 2;
        break;
    case 4:
        rooms = 1;
        residents = 1;
        break;
    case 5:
        rooms = 3;
        residents = 5;
        break;
    case 6:
        rooms = 2;
        residents = 3;
        break;
    case 7:
        rooms = 4;
        residents = 6;
        break;
    default:
        cout << "Квартира не знайдена." << endl;
        return 1;
    }

    cout << "Кількість кімнат: " << rooms << endl;
    cout << "Кількість жителів: " << residents << endl;

    return 0;
}