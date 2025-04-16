#include <stdio.h>
#include <string.h>

// Function to accept names from the user
void acceptNames(char name1[], char name2[]) {
    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);
}

// Function to calculate the number of unmatched letters
int unmatchedLetter(char name1[], char name2[]) {
    int len_1 = strlen(name1);
    int len_2 = strlen(name2);
    int count1 = 0; // tigcount sa matched letters

    int used[len_2];
    for (int i = 0; i < len_2; i++) {
        used[i] = 0; // Initialize used array
    }

    // Strike out matching letters
    for (int i = 0; i < len_1; i++) {
        for (int j = 0; j < len_2; j++) {
            if (name1[i] == name2[j] && used[j] == 0) {
                count1++;    // Increment matched count
                used[j] = 1; // Mark letter as used
                break;
            }
        }
    }

    int unmatched1 = len_1 - count1; // Remaining unmatched letters in name1
    int unmatched2 = len_2 - count1; // Remaining unmatched letters in name2
    return unmatched1 + unmatched2;  // Total unmatched letters
}

// Function to determine the FLAMES letter based on the unmatched count
char strikeLetter(int unmatched) {
    char basis[] = "flames";
    int length = strlen(basis);
    int idx = 0;

    while (length > 1) {
        idx = (idx + unmatched - 1) % length;
        for (int i = idx; i < length - 1; i++) {
            basis[i] = basis [i+1];
        }
        basis[length - 1] = '\0';
        length--;
    }
    return basis[0];
}

int main() {
    char name1[30], name2[30];

    acceptNames(name1, name2);
    int unmatched = unmatchedLetter(name1, name2);
    char flames = strikeLetter(unmatched);

    printf("The Flames relationship is:\n");
    if (flames == 'f') {
        printf("You are just FRIENDS!\n");
    } else if (flames == 'l') {
        printf("Congratulations! You are LOVERS.\n");
    } else if (flames == 'a') {
        printf("It is just AFFECTION\n");
    } else if (flames == 'm') {
        printf("You are bound to be MARRIED!\n");
    } else if (flames == 'e') {
        printf("You are ENEMIES!\n");
    } else if (flames == 's') {
        printf("You can't be together! You are SIBLINGS!\n");
    } else {
        printf("Error: Invalid relationship type.\n");
    }

    return 0;
}