#include <stdio.h>

// Define structure for batting information
struct Player {
    char playerName[50];
    int runsScored;
};

int main() {
    int numPlayers; // Number of players in the team
    int totalRuns = 0; // Total runs scored by the team

    printf("Enter the number of players in the cricket team: ");
    scanf("%d", &numPlayers);

    struct Player players[numPlayers]; // Declare an array of Player structures

    // Accept batting information for each player
    for (int i = 0; i < numPlayers; i++) {
        printf("\nEnter batting information for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf(" %[^\n]", players[i].playerName);
        printf("Runs Scored: ");
        scanf("%d", &players[i].runsScored);

        totalRuns += players[i].runsScored; // Add runs scored by the player to total runs
    }

    // Display total runs scored by the team
    printf("\nTotal runs scored by the team: %d\n", totalRuns);

    return 0;
}
