#include <stdio.h>

struct Date {
  int day;
  int month;
  int year;
};

struct StudentRecord {
  char name[50];
  int SAPId;
  int enrollmentNumber;
  struct Date dateOfRegistration;
  struct Date dateOfBirth;
};

int main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // Create an array of 'StudentRecord' structures
  struct StudentRecord students[n];

  // Get the data of the students
  for (int i = 0; i < n; i++) {
    printf("\nEnter the details of student %d:\n", i + 1);
    printf("Enter the name of the student: ");
    scanf("%s", students[i].name);
    printf("Enter the SAP ID of the student: ");
    scanf("%d", &students[i].SAPId);
    printf("Enter the enrollment number of the student: ");
    scanf("%d", &students[i].enrollmentNumber);
    printf("Enter the date of registration of the student (dd mm yyyy): ");
    scanf("%d %d %d", &students[i].dateOfRegistration.day, &students[i].dateOfRegistration.month, &students[i].dateOfRegistration.year);
    printf("Enter the date of birth of the student (dd mm yyyy): ");
    scanf("%d %d %d", &students[i].dateOfBirth.day, &students[i].dateOfBirth.month, &students[i].dateOfBirth.year);
  }

  // Print the data of the students
  printf("\nStudent Details:\n");
  for (int i = 0; i < n; i++) {
    printf("\nStudent %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("SAP ID: %d\n", students[i].SAPId);
    printf("Enrollment Number: %d\n", students[i].enrollmentNumber);
    printf("Date of Registration: %d/%d/%d\n", students[i].dateOfRegistration.day, students[i].dateOfRegistration.month, students[i].dateOfRegistration.year);
    printf("Date of Birth: %d/%d/%d\n", students[i].dateOfBirth.day, students[i].dateOfBirth.month, students[i].dateOfBirth.year);
  }

  return 0;
