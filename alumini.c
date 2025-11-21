#include <stdio.h>
#include <string.h>

struct Alumni {
    int id;
    char name[50];
    int year;
    char dept[50];
    char phone[20];
};

void addAlumni() {
    struct Alumni a;
    FILE *fp = fopen("alumni.txt", "ab");

    printf("\nEnter Alumni ID: ");
    scanf("%d", &a.id);

    printf("Enter Name: ");
    scanf("%s", a.name);

    printf("Enter Year of Passing: ");
    scanf("%d", &a.year);

    printf("Enter Department: ");
    scanf("%s", a.dept);

    printf("Enter Phone Number: ");
    scanf("%s", a.phone);

    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);

    printf("\nAlumni Added Successfully!\n");
}

void displayAlumni() {
    struct Alumni a;
    FILE *fp = fopen("alumni.txt", "rb");

    if (fp == NULL) {
        printf("No data found!\n");
        return;
    }

    printf("\n--- Alumni List ---\n");
    while (fread(&a, sizeof(a), 1, fp)) {
        printf("\nID: %d\nName: %s\nYear: %d\nDepartment: %s\nPhone: %s\n",
               a.id, a.name, a.year, a.dept, a.phone);
    }

    fclose(fp);
}

void searchAlumni() {
    struct Alumni a;
    int id, found = 0;

    printf("\nEnter Alumni ID to search: ");
    scanf("%d", &id);

    FILE *fp = fopen("alumni.txt", "rb");

    while (fread(&a, sizeof(a), 1, fp)) {
        if (a.id == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nYear: %d\nDepartment: %s\nPhone: %s\n",
                   a.id, a.name, a.year, a.dept, a.phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Record Not Found!\n");
    }

    fclose(fp);
}

void updateAlumni() {
    struct Alumni a;
    int id, found = 0;

    printf("\nEnter Alumni ID to update: "); 
    scanf("%d", &id);

    FILE *fp = fopen("alumni.txt", "rb+");

    while (fread(&a, sizeof(a), 1, fp)) {
        if (a.id == id) {
            printf("\nEnter new Name: ");
            scanf("%s", a.name);

            printf("Enter new Year: ");
            scanf("%d", &a.year);

            printf("Enter new Department: ");
            scanf("%s", a.dept);

            printf("Enter new Phone: ");
            scanf("%s", a.phone);

            fseek(fp, -sizeof(a), SEEK_CUR);
            fwrite(&a, sizeof(a), 1, fp);

            found = 1;
            printf("\nRecord Updated Successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Record Not Found!\n");
    }

    fclose(fp);
}

void deleteAlumni() {
    struct Alumni a;
    int id, found = 0;

    printf("\nEnter Alumni ID to delete: ");
    scanf("%d", &id);

    FILE *fp = fopen("alumni.txt", "rb");
    FILE *temp = fopen("temp.txt", "wb");

    while (fread(&a, sizeof(a), 1, fp)) {
        if (a.id == id) {
            found = 1;
            continue;
        }
        fwrite(&a, sizeof(a), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("alumni.txt");
    rename("temp.txt", "alumni.txt");

    if (found)
        printf("Record Deleted Successfully!\n");
    else
        printf("Record Not Found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== ALUMNI MANAGEMENT SYSTEM (FILE HANDLING) =====\n");
        printf("1. Add Alumni\n");
        printf("2. Display All Alumni\n");
        printf("3. Search Alumni\n");
        printf("4. Update Alumni\n");
        printf("5. Delete Alumni\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addAlumni(); break;
            case 2: displayAlumni(); break;
            case 3: searchAlumni(); break;
            case 4: updateAlumni(); break;
            case 5: deleteAlumni(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}