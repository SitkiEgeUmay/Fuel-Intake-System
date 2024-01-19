#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main2();
void main1();
void XStation() {
    char choice, choice1, back, fuel, status, status1;
    int i, accounts, purchase1, purchase2, purchase3, total = 0;
    printf("Choose the Operation You Want to Perform at X Station:\n");
    printf("a) Account System\n");
    printf("b) Campaigns\n");
    printf("c) Refueling System\n");
    printf("d) Membership Cancellation\n");
    printf("e) Fuel Purchase\n");
    scanf(" %c", &choice);
    switch (choice) {
    case 'a':
        printf("Account System selected.\n");
        printf("How Many Accounts Do You Want to Add?\n");
        scanf("%d", &accounts);
        for (i = 0; i < accounts; i++) {
            char Name[30], Surname[30];
            printf("Enter Your Username\n");
            scanf("%30s", Name);
            printf("Enter Your Surname\n");
            scanf("%30s", Surname);
            strcat(Name, Surname);
            printf("%d. Account User Information: %s\n", i + 1, Name);
        }
        printf("%d new accounts added\n", accounts);
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            XStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            break;
        }
        break;
    case 'b':
        printf("Campaigns selected.\n");
        printf("You will earn 1 car wash right for a single fuel purchase of 1000 TL and above. (You can earn the car wash right only once a month).\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            XStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            XStation();
            break;
        }
        break;
    case 'c':
        printf("Refueling System selected.\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            XStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            XStation();
            break;
        }
        break;
    case 'd':
        printf("Membership Cancellation selected.\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            XStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            XStation();
            break;
        }
        break;
    case 'e':
        do {
            printf("How Much Fuel Will You Purchase (Diesel):\n");
            scanf("%d", &purchase1);
            printf("How Much Fuel Will You Purchase (Gasoline):\n");
            scanf("%d", &purchase2);
            printf("How Much Fuel Will You Purchase (Gas):\n");
            scanf("%d", &purchase3);
            total = purchase1 + purchase2 + purchase3;
            printf("Press 'E' to complete the transaction. Press 'H' to cancel.\n");
            scanf(" %c", &status);
        } while (status == 'H');
        printf("Total purchase is %d TL.\n", total);
        if (total >= 1000) {
            printf("You Earned 1 Car Wash Right\n");
            printf("You Have Used the Monthly Car Wash Right 1 Time\n");
            printf("Remaining Car Wash Right: 1\n");
            printf("Press 't' to go back to the menu.\n");
            scanf(" %c", &choice1);
            if (choice1 == 't')
                XStation();
        } else {
            printf("You Did Not Earn a Car Wash Right\n");
            printf("Press 't' to go back to the menu.\n");
            scanf(" %c", &choice1);
            if (choice1 == 't')
                XStation();
        }
        break;
    default:
        printf("Invalid Purchase, Redirecting to the Menu...\n");
        XStation();
    }
}

void YStation() {
    char choice, choice1, back, fuel, status, status1;
    int i, accounts, purchase1, purchase2, purchase3, total = 0;
    printf("Choose the Operation You Want to Perform at Y Station:\n");
    printf("a) Account System\n");
    printf("b) Campaigns\n");
    printf("c) Refueling System\n");
    printf("d) Membership Cancellation\n");
    printf("e) Fuel Purchase\n");
    scanf(" %c", &choice);
    switch (choice) {
    case 'a':
        printf("Account System selected.\n");
        printf("How Many Accounts Do You Want to Add?\n");
        scanf("%d", &accounts);
        for (i = 0; i < accounts; i++) {
            char Name[30], Surname[30];
            printf("Enter Your Username\n");
            scanf("%30s", Name);
            printf("Enter Your Surname\n");
            scanf("%30s", Surname);
            strcat(Name, Surname);
            printf("%d. Account User Information: %s\n", i + 1, Name);
        }
        printf("%d new accounts added\n", accounts);
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            XStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            break;
        }
        break;
    case 'b':
        printf("Campaigns selected.\n");
        printf("You will earn 1 car wash right for a single fuel purchase of 1200 TL and above. (You can earn the car wash right twice a month).\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            YStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            YStation();
            break;
        }
        break;
    case 'c':
        printf("Refueling System selected.\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            YStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            YStation();
            break;
        }
        break;
    case 'd':
        printf("Membership Cancellation selected.\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            YStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            YStation();
            break;
        }
        break;
    case 'e':
        do {
            printf("How Much Fuel Will You Purchase (Diesel):\n");
            scanf("%d", &purchase1);
            printf("How Much Fuel Will You Purchase (Gasoline):\n");
            scanf("%d", &purchase2);
            printf("How Much Fuel Will You Purchase (Gas):\n");
            scanf("%d", &purchase3);
            total = purchase1 + purchase2 + purchase3;
            printf("Press 'E' to complete the transaction. Press 'H' to cancel.\n");
            scanf(" %c", &status);
        } while (status == 'H');
        printf("Total purchase is %d TL.\n", total);
        if (total >= 1200) {
            printf("You Earned 1 Car Wash Right\n");
            printf("You Have Used the Monthly Car Wash Right 1 Time\n");
            printf("Remaining Car Wash Right: 1\n");
            printf("Press 't' to go back to the menu.\n");
            scanf(" %c", &choice1);
            if (choice1 == 't')
                YStation();
        } else {
            printf("You Did Not Earn a Car Wash Right\n");
            printf("Press 't' to go back to the menu.\n");
            scanf(" %c", &choice1);
            if (choice1 == 't')
                YStation();
        }
        break;
    default:
        printf("Invalid Purchase, Redirecting to the Menu...\n");
        YStation();
    }
}

void ZStation() {
    char choice, choice1, back, fuel, status, status1;
    int i, accounts, purchase1, purchase2, purchase3, total = 0;
    printf("Choose the Operation You Want to Perform at Z Station:\n");
    printf("a) Account System\n");
    printf("b) Campaigns\n");
    printf("c) Refueling System\n");
    printf("d) Membership Cancellation\n");
    printf("e) Fuel Purchase\n");
    scanf(" %c", &choice);
    switch (choice) {
    case 'a':
        printf("Account System selected.\n");
        printf("How Many Accounts Do You Want to Add?\n");
        scanf("%d", &accounts);
        for (i = 0; i < accounts; i++) {
            char Name[30], Surname[30];
            printf("Enter Your Username\n");
            scanf("%30s", Name);
            printf("Enter Your Surname\n");
            scanf("%30s", Surname);
            strcat(Name, Surname);
            printf("%d. Account User Information: %s\n", i + 1, Name);
        }
        printf("%d new accounts added\n", accounts);
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            XStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            break;
        }
        break;
    case 'b':
        printf("Campaigns selected.\n");
        printf("You will earn 1 car wash right for a single fuel purchase of 1500 TL and above. (You can earn the car wash right four times a month).\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            ZStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            ZStation();
            break;
        }
        break;
    case 'c':
        printf("Refueling System selected.\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            ZStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            ZStation();
            break;
        }
        break;
    case 'd':
        printf("Membership Cancellation selected.\n");
        printf("Press 't' to go back.\n");
        scanf(" %c", &back);
        switch (back) {
        case 't':
            ZStation();
            break;
        default:
            printf("Press a valid key\n");
            scanf(" %c", &back);
            ZStation();
            break;
        }
        break;
    case 'e':
        do {
            printf("How Much Fuel Will You Purchase (Diesel):\n");
            scanf("%d", &purchase1);
            printf("How Much Fuel Will You Purchase (Gasoline):\n");
            scanf("%d", &purchase2);
            printf("How Much Fuel Will You Purchase (Gas):\n");
            scanf("%d", &purchase3);
            total = purchase1 + purchase2 + purchase3;
            printf("Press 'E' to complete the transaction. Press 'H' to cancel.\n");
            scanf(" %c", &status);
        } while (status == 'H');
        printf("Total purchase is %d TL.\n", total);
        if (total >= 1500) {
            printf("You Earned 1 Car Wash Right\n");
            printf("You Have Used the Monthly Car Wash Right 1 Time\n");
            printf("Remaining Car Wash Right: 3\n");
            printf("Press 't' to go back to the menu.\n");
            scanf(" %c", &choice1);
            if (choice1 == 't')
                ZStation();
        } else {
            printf("You Did Not Earn a Car Wash Right\n");
            printf("Press 't' to go back to the menu.\n");
            scanf(" %c", &choice1);
            if (choice1 == 't')
                ZStation();
        }
        break;
    default:
        printf("Invalid Purchase, Redirecting to the Menu...\n");
        ZStation();
    }
}

int main() {
    int password;
    printf("Please Enter Your Password:");
    scanf("%d", &password);
    if (password != 1234) {
        printf("Wrong Password\n");
        printf("Please Try Again\n");
        main();
    } else {
        printf("Correct Password\n");
        main2();
    }
}

int main2() {
    printf("Current Fuel Prices\n");
    float array[3][2] = {{34, 39}, {37, 39}, {30, 28.5}};
    int i, j;
    float increase, decrease;
    char fuelType[3][10] = {"Gasoline", "Diesel", "Gas"};
    
    for (i = 0; i < 3; i++) {
        printf("%s\t", fuelType[i]);
        for (j = 0; j < 2; j++) {
            printf("%.2f  ", array[i][j]);
        }
        printf("\n");
    }

    if (array[0][1] > array[0][0]) {
        increase = array[0][1] - array[0][0];
        printf("Gasoline has increased by %.2f TL\n", increase);
    } else if (array[0][1] < array[0][0]) {
        decrease = array[0][0] - array[0][1];
        printf("Gasoline has decreased by %.2f TL\n", decrease);
    } else {
        printf("No Increase or Decrease in Gasoline Prices\n");
    }

    printf("\n");
    main1();
}

void main1() {
    int choice;
    int amount;
    printf("Please Choose a Station:\n");
    printf("1. X Station\n");
    printf("2. Y Station\n");
    printf("3. Z Station\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("X Station Selected.\n");
            XStation();
            break;
        case 2:
            printf("Y Station Selected.\n");
            YStation();
            break;
        case 3:
            printf("Z Station Selected.\n");
            ZStation();
            break;
        default:
            printf("Invalid Station Selection!\n");
            printf("Please Choose a Valid Station!\n");
            main1();
    }
}
