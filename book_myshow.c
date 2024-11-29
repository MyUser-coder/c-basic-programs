#include <stdio.h>

void main() {
    char* movies[3] = {"Movie A", "Movie B", "Movie C"};
    int movieTickets[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};  // 3 movies, 3 tickets each
    int ticketCost = 10;
    int movie, ticketNumber, i;
    float totalCost;

    printf("Welcome to the Movie Ticket Booking System!\n");

    while (1) {
        printf("\nAvailable Movies and Ticket Prices:\n");
        for (i = 0; i < 3; i++) {
            printf("%d. %s - $%d\n", i + 1, movies[i], ticketCost);
        }

        printf("\nChoose a movie to book a ticket (1-3) or 4 to exit: ");
        scanf("%d", &movie);

        if (movie == 4) break;

        if (movie < 1 || movie > 3) {
            printf("Invalid choice.\n");
            continue;
        }

        printf("Tickets for %s:\n", movies[movie - 1]);
        for (i = 0; i < 3; i++) {
            if (movieTickets[movie - 1][i] == 0)
                printf("Ticket %d: Available\n", i + 1);
            else
                printf("Ticket %d: Booked\n", i + 1);
        }

        printf("Enter ticket number (1-3) to book: ");
        scanf("%d", &ticketNumber);

        if (ticketNumber < 1 || ticketNumber > 3) {
            printf("Invalid ticket number.\n");
            continue;
        }

        if (movieTickets[movie - 1][ticketNumber - 1] == 0) {
            movieTickets[movie - 1][ticketNumber - 1] = 1; 
            totalCost = ticketCost; 
            printf("Ticket %d for %s has been successfully booked. Total cost: $%.2f\n", 
                   ticketNumber, movies[movie - 1], totalCost);
        } else {
            printf("Ticket %d for %s is already booked.\n", ticketNumber, movies[movie - 1]);
        }
    }

}

