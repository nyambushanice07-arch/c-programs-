/*
Name: SHANICE 
Reg no: CT101/G/26496/25
Description: Program to track room occupancy across 5 floors.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roomOccupancyTracker() {
    int rooms[5][10];  // 5 floors, 10 rooms per floor
    int floor, room;

    printf("\n=== Room Occupancy Tracker ===\n");

    // Initialize random seed (should ideally be in main())
    srand((unsigned int)time(NULL));

    // 1. Fill the array with random occupancy data (0 = vacant, 1 = occupied)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            rooms[floor][room] = rand() % 2;  // Randomly 0 or 1
        }
    }

    // 2. Show how many rooms are occupied or vacant on each floor
    printf("\n--- Occupancy Summary per Floor ---\n");
    for (floor = 0; floor < 5; floor++) {
        int occupied = 0;
        int vacant = 0;

        // Count occupied and vacant rooms for this floor
        for (room = 0; room < 10; room++) {
            if (rooms[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d → Occupied: %d | Vacant: %d\n",
               floor + 1, occupied, vacant);
    }
}

int main() {
    // Call the room occupancy tracker function
    roomOccupancyTracker();

    // End of program
    printf("\nProgram finished successfully.\n");

    return 0;
}