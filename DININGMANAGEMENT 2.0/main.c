#include "dining.h"
int main(void) {
    int choice;

    do {
        printf("\n========================================\n");
        printf("  UNIVERSITY DINING MANAGEMENT SYSTEM\n");
        printf("========================================\n");
        printf("1. Student Section\n");
        printf("2. Meal Manager Section\n");
        printf("3. Meal Manager - View All Records\n");
        printf("4. Dining Manager Section\n");
        printf("5. Dining Manager - View All Records\n");
        printf("6. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            studentSection();
        }
        else if (choice == 2) {
            mealManagerSection();
        }
        else if (choice == 3) {
            showAllMealRecords();
        }
        else if (choice == 4) {
            diningManagerSection();
        }
        else if (choice == 5) {
            showAllBudgetRecords();
        }
        else if (choice == 6) {
            printf("\nProgram ended.\n");
        }
        else {
            printf("\nInvalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}