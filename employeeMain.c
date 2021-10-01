#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void) {
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
  
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee ID is NOT found in the records\n");

     matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.32);
    if (matchPtr != NULL)
        printf("Employee is in record %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee is NOT found in the records\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-556-1215");
    if (matchPtr != NULL)
        printf("Employee is in the records %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee is not found in the records\n");


    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in the records %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee Tony Bobcat is NOT found in the records\n");

    return EXIT_SUCCESS;
}