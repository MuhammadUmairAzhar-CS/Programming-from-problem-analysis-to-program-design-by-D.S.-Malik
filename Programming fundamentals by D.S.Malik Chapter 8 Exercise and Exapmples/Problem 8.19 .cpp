// 19. Airplane seating assignment (13 rows, 6 seats)
// Rows 1–2: first, 3–7: business, 8–13: economy
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int ROWS_PLANE = 13;
const int SEATS = 6;

void initSeats(char seats[][SEATS])
{
    for (int r = 0; r < ROWS_PLANE; r++)
        for (int c = 0; c < SEATS; c++)
            seats[r][c] = '*';
}

void printSeats(const char seats[][SEATS])
{
    cout << "     A B C D E F" << endl;
    for (int r = 0; r < ROWS_PLANE; r++)
    {
        cout << "Row " << setw(2) << r + 1 << " ";
        for (int c = 0; c < SEATS; c++)
            cout << seats[r][c] << " ";
        cout << endl;
    }
}

bool seatInClass(int row, int ticketType)
{
    if (ticketType == 1)
        return row >= 1 && row <= 2;
    else if (ticketType == 2)
        return row >= 3 && row <= 7;
    else
        return row >= 8 && row <= 13;
}

int main()
{
    char seats[ROWS_PLANE][SEATS];
    initSeats(seats);

    int choice;

    do
    {
        cout << "\nMenu:\n"
             << "1. Assign seat\n"
             << "2. Show seating plan\n"
             << "3. Quit\n"
             << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int ticketType;
            cout << "Ticket type (1=First, 2=Business, 3=Economy): ";
            cin >> ticketType;

            int row;
            char colChar;
            cout << "Desired seat (row 1-13 and seat A-F): ";
            cin >> row >> colChar;

            int col = colChar - 'A';

            if (row < 1 || row > 13 || col < 0 || col >= SEATS)
            {
                cout << "Invalid seat." << endl;
                continue;
            }

            if (!seatInClass(row, ticketType))
            {
                cout << "Seat not in selected class." << endl;
                continue;
            }

            if (seats[row - 1][col] == 'X')
                cout << "Seat already occupied." << endl;
            else
            {
                seats[row - 1][col] = 'X';
                cout << "Seat assigned." << endl;
            }
        }
        else if (choice == 2)
            printSeats(seats);
        else if (choice != 3)
            cout << "Invalid menu choice." << endl;

    } while (choice != 3);

    return 0;
}
