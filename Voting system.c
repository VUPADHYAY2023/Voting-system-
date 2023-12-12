#include <stdio.h>
int main() {
    int bjp_votes = 0, cong_votes = 0, sp_votes = 0, other_votes = 0;
    int choice;
    printf("Welcome to the Voting Machine!\n");
    while (1) {
        printf("\nPlease select a party to vote for:\n");
        printf("1. BJP\n");
        printf("2. Congress\n");
        printf("3. SP\n");
        printf("4. Other\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bjp_votes++;
                printf("Thank you for voting for BJP!\n");
                break;
            case 2:
                cong_votes++;
                printf("Thank you for voting for Congress!\n");
                break;
            case 3:
                sp_votes++;
                printf("Thank you for voting for SP!\n");
                break;
            case 4:
                other_votes++;
                printf("Thank you for voting for Other party!\n");
                break;
            case 5:
                printf("Voting has ended. Here are the results:\n");
                printf("BJP: %d votes\n", bjp_votes);
                printf("Congress: %d votes\n", cong_votes);
                printf("SP: %d votes\n", sp_votes);
                printf("Other: %d votes\n", other_votes);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
}