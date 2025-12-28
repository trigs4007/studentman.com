#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[50];
    int count = 0;
    int choice;
    int roll, found;


    while (1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &s[count].roll);

            printf("Enter Name: ");
            scanf("%s", s[count].name);

            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);

            count++;
            printf("Student added successfully!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                printf("\nRoll\tName\tMarks\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
            }
        }
       else if (choice == 3) {
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    found = 0;
    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Found!\n");
            printf("Roll: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
           else if (choice == 4) {
    printf("Exiting program...\n");
    break;
}

}


    return 0;
}
