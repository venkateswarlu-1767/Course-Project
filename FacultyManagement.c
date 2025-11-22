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

void addFaculty()
{
    FILE *fp = fopen("faculty.txt", "a");
    struct Faculty f;

    printf("\nEnter Faculty ID: ");
    scanf("%d", &f.id);

    printf("Enter Faculty Name: ");
    fflush(stdin);
    fgets(f.name, 50, stdin);
    f.name[strcspn(f.name, "\n")] = '\0';

    printf("Enter Department: ");
    fflush(stdin);
    fgets(f.department, 50, stdin);
    f.department[strcspn(f.department, "\n")] = '\0';

    printf("Enter Qualification: ");
    fflush(stdin);
    fgets(f.qualification, 50, stdin);
    f.qualification[strcspn(f.qualification, "\n")] = '\0';

    fprintf(fp, "%d,%s,%s,%s\n", f.id, f.name, f.department, f.qualification);
    fclose(fp);

    printf("\nFaculty added successfully!\n");
}

void viewFaculty()
{
    FILE *fp = fopen("faculty.txt", "r");
    struct Faculty f;

    if (!fp)
    {
        printf("\nNo faculty records found.\n");
        return;
    }

    printf("\n--- All Faculty Records ---\n");

    while (fscanf(fp, "%d,%[^,],%[^,],%[^,\n]\n",
                  &f.id, f.name, f.department, f.qualification) != EOF)
    {
        printf("\nID: %d\nName: %s\nDepartment: %s\nQualification: %s\n",
               f.id, f.name, f.department, f.qualification);
    }

    fclose(fp);
}

void searchFaculty()
{
    FILE *fp = fopen("faculty.txt", "r");
    struct Faculty f;
    int id, found = 0;

    if (!fp)
    {
        printf("\nNo faculty records found.\n");
        return;
    }

    printf("\nEnter Faculty ID to search: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d,%[^,],%[^,],%[^,\n]\n",
                  &f.id, f.name, f.department, f.qualification) != EOF)
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
        printf("\n==== FACULTY MANAGEMENT SYSTEM (Simple) ====\n");
        printf("1. Add Faculty\n");
        printf("2. View All Faculty\n");
        printf("3. Search Faculty by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

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