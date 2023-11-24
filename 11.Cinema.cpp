#include <iostream>
using namespace std;

// Node structure to represent a seat
struct Seat {
    int seatNumber;
    bool isBooked;
    Seat* next;
    Seat* prev;
};

// Function to initialize a row with seats
Seat* initializeRow(int seatsPerRow) {
    Seat* head = nullptr;
    Seat* temp = nullptr;

    for (int i = 1; i <= seatsPerRow; ++i) {
        Seat* newNode = new Seat;
        newNode->seatNumber = i;
        newNode->isBooked = false;
        newNode->next = nullptr;
        newNode->prev = temp;

        if (temp != nullptr) {
            temp->next = newNode;
        }

        if (head == nullptr) {
            head = newNode;
        }

        temp = newNode;
    }

    return head;
}

// Function to display available seats in a row
void displayAvailableSeats(Seat* head) {
    Seat* current = head;
    cout << "Available seats: ";
    while (current != nullptr) {
        if (!current->isBooked) {
            cout << current->seatNumber << " ";
        }
        current = current->next;
    }
    cout << endl;
}

// Function to book a seat
void bookSeat(Seat* &head, int seatNumber) {
    Seat* current = head;
    while (current != nullptr) {
        if (current->seatNumber == seatNumber && !current->isBooked) {
            current->isBooked = true;
            cout << "Seat " << seatNumber << " booked successfully.\n";
            return;
        }
        current = current->next;
    }
    cout << "Seat " << seatNumber << " not available or already booked.\n";
}

// Function to cancel a booked seat
void cancelBooking(Seat* &head, int seatNumber) {
    Seat* current = head;
    while (current != nullptr) {
        if (current->seatNumber == seatNumber && current->isBooked) {
            current->isBooked = false;
            cout << "Booking for seat " << seatNumber << " canceled successfully.\n";
            return;
        }
        current = current->next;
    }
    cout << "Seat " << seatNumber << " not booked or invalid seat number.\n";
}

// Function to display all seats in a row
void displayAllSeats(Seat* head) {
    Seat* current = head;
    cout << "All seats: ";
    while (current != nullptr) {
        cout << current->seatNumber << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    const int rows = 15;
    const int seatsPerRow = 10;

    // Array to store head pointers for each row
    Seat* rowHeads[rows];

    // Initialize rows
    for (int i = 0; i < rows; ++i) {
        rowHeads[i] = initializeRow(seatsPerRow);
    }

    // Random booking for demonstration
    bookSeat(rowHeads[2], 3);
    bookSeat(rowHeads[5], 7);
    bookSeat(rowHeads[10], 1);

    // Display available seats
    displayAvailableSeats(rowHeads[2]);

    // Display all seats
    displayAllSeats(rowHeads[5]);

    // Cancel booking
    cancelBooking(rowHeads[10], 1);

    // Display available seats after cancellation
    displayAvailableSeats(rowHeads[10]);

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        Seat* current = rowHeads[i];
        while (current != nullptr) {
            Seat* temp = current;
            current = current->next;
            delete temp;
        }
    }

    return 0;
}
