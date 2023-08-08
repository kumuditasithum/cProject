#include <stdio.h>

#define MAX_ACCOUNTS 100


//ARRAYS


// Function to create a new bank account
void createAccount(int accountNumber,int numAccounts){
    accountNumbers[numAccounts] = accountNumber;
};


// Function to deposit money into an account
void deposit(int accountNumbers[], double accountBalances[], int numAccounts);

// Function to withdraw money from an account
void withdraw(int accountNumbers[], double accountBalances[], int numAccounts);

// Function to check account balance
void checkBalance(int accountNumbers[], double accountBalances[], int numAccounts);

int main() {
    int accountNumbers[MAX_ACCOUNTS];
    double accountBalances[MAX_ACCOUNTS];
    int numAccounts = 0;
    int choice;

    printf("=== Simple Banking System ===\n");

    do {
        printf("1. Create a new bank account\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Check account balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accountNumbers, accountBalances, &numAccounts);
                break;
            case 2:
                deposit(accountNumbers, accountBalances, numAccounts);
                break;
            case 3:
                withdraw(accountNumbers, accountBalances, numAccounts);
                break;
            case 4:
                checkBalance(accountNumbers, accountBalances, numAccounts);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

// createAccount(int accountNumbers[], double accountBalances[], int *numAccounts) {

//}

void deposit(int accountNumbers[], double accountBalances[], int numAccounts) {
    // Imple
}

void withdraw(int accountNumbers[], double accountBalances[], int numAccounts) {
    // Implement withdrawal logic here
}

void checkBalance(int accountNumbers[], double accountBalances[], int numAccounts) {
    // Implement balance checking logic here
}
