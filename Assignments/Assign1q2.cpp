#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole()
    {
        cout << "Date: "
             << day << "/"
             << month << "/"
             << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear()
    {
        if ((year % 400 == 0) ||
            (year % 4 == 0 && year % 100 != 0))
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Date d;
    int choice;

    do
    {
        cout << "\n--- Date Menu ---\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                d.initDate();
                cout << "Date initialized.\n";
                break;

            case 2:
                d.acceptDateFromConsole();
                break;

            case 3:
                d.printDateOnConsole();
                break;

            case 4:
                if (d.isLeapYear())
                    cout << "Leap Year\n";
                else
                    cout << "Not a Leap Year\n";
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 0);

    return 0;
}