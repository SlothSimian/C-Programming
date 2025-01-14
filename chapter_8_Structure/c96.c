#include <stdio.h>
#include <string.h>

// Define a structure for player details
struct Player {
    char name[50];
    char country[50];
    float batting_average;
};

int main() {
    struct Player players[50]; // Array to store details of 50 players
    int n, i;
    char country_search[50];

    // Get the number of players (up to 50)
    printf("Enter the number of players (max 50): ");
    scanf("%d", &n);

    // Input details for each player
    for (i = 0; i < n; i++) {
        printf("\nEnter details for player %d\n", i + 1);
        printf("Name: ");
        getchar(); // To consume the newline character left by previous scanf
        fgets(players[i].name, sizeof(players[i].name), stdin);
        players[i].name[strcspn(players[i].name, "\n")] = '\0'; // Remove the newline character from name

        printf("Country: ");
        fgets(players[i].country, sizeof(players[i].country), stdin);
        players[i].country[strcspn(players[i].country, "\n")] = '\0'; // Remove the newline character from country

        printf("Batting Average: ");
        scanf("%f", &players[i].batting_average);
    }

    // Get the country name for which details are to be displayed
    printf("\nEnter the country to search for players: ");
    getchar(); // Consume newline left by previous input
    fgets(country_search, sizeof(country_search), stdin);
    country_search[strcspn(country_search, "\n")] = '\0'; // Remove newline character

    // Display details of players who are playing for the given country
    printf("\nPlayers from %s:\n", country_search);
    int found = 0; // Flag to check if any players are found for the given country
    for (i = 0; i < n; i++) {
        if (strcmp(players[i].country, country_search) == 0) {
            printf("Name: %s, Batting Average: %.2f\n", players[i].name, players[i].batting_average);
            found = 1;
        }
    }

    // If no players were found for the country
    if (!found) {
        printf("No players found for country %s.\n", country_search);
    }

    return 0;
}