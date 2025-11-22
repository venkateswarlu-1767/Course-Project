#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Faculty
{
    int id;
    char name[50];
    char department[50];
    char qualification[50];
};

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void addFaculty()
{
    FILE *fp = fopen("faculty.txt", "a");
    if (!fp)
    {
        printf("\nError opening file.\n");
        return;
    }

    struct Faculty f;

    printf("\nEnter Faculty ID: ");
    scanf("%d", &f.id);
    clearInputBuffer();

    printf("Enter Faculty Name: ");
    fgets(f.name, sizeof(f.name), stdin);
    f.name[strcspn(f.name, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(f.department, sizeof(f.department), stdin);
    f.department[strcspn(f.department, "\n")] = '\0';

    printf("Enter Qualification: ");
    fgets(f.qualification, sizeof(f.qualification), stdin);
    f.qualification[strcspn(f.qualification, "\n")] = '\0';

    fprintf(fp, "%d,%s,%s,%s\n", f.id, f.name, f.department, f.qualification);
    fclose(fp);

    printf("\nFaculty added successfully!\n");
}

void viewFaculty()
{
    FILE *fp = fopen("faculty.txt", "r");
    if (!fp)
    {
        printf("\nNo faculty records found.\n");
        return;
    }

    struct Faculty f;
    printf("\n--- All Faculty Records ---\n");

    while (fscanf(fp, "%d,%49[^,],%49[^,],%49[^\n]\n",
                  &f.id, f.name, f.department, f.qualification) == 4)
    {

        printf("\nID: %d\nName: %s\nDepartment: %s\nQualification: %s\n",
               f.id, f.name, f.department, f.qualification);
    }

    fclose(fp);
}

void searchFaculty()
{
    FILE *fp = fopen("faculty.txt", "r");
    if (!fp)
    {
        printf("\nNo faculty records found.\n");
        return;
    }

    struct Faculty f;
    int id, found = 0;

    printf("\nEnter Faculty ID to search: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d,%49[^,],%49[^,],%49[^\n]\n",
                  &f.id, f.name, f.department, f.qualification) == 4)
    {

        if (f.id == id)
        {
            printf("\nFACULTY FOUND!\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nQualification: %s\n",
                   f.id, f.name, f.department, f.qualification);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nFaculty not found.\n");

    fclose(fp);
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n==== FACULTY MANAGEMENT SYSTEM ====\n");
        printf("1. Add Faculty\n");
        printf("2. View All Faculty\n");
        printf("3. Search Faculty by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        switch (choice)
        {
        case 1:
            addFaculty();
            break;
        case 2:
            viewFaculty();
            break;
        case 3:
            searchFaculty();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}