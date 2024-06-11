/*
Assignment 21
Design a struct which will have members that describe an employee's:

last name,
first name,
employee ID number,
last 4 digits of their SSN, and
title.
Design a second struct which will store two employees as members. The employees will be structures of the type of your first struct. Inside of main(), prompt the user to enter each employee's credentials and store them. Finally, print the employee's credentials to the terminal.

Pseudo Code:

first struct {
  members like: names, employee id, etc
  };

second struct {
  struct first_struct employee_1;
  } employees;

int main () {
  prompting and storing credentials for all employees;
  printing all the data to the terminal;
  };
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct info
{
    char first_name[50];
    char last_name[50];
    int  ID_number;
    int  last_4_SSN;
    char title[50];
};

struct real_emp
{
    struct info emp1;
    struct info emp2;

}employee;



int main(void)
{
    struct info* ptrEmployee = &employee.emp1;
    for (int i = 0; i < 2; i++)
    {
        if (i == 1)
        {
            ptrEmployee = &employee.emp2;
        }
        printf("Enter the employee's first name: ");
        (void)scanf("%s", &ptrEmployee->first_name);

        printf("Enter the employee's last name: ");
        (void)scanf("%s", &ptrEmployee->last_name);


        printf("Enter the employee's ID number: ");
        (void)scanf("%d", &ptrEmployee->ID_number);

        printf("Enter the employee's last_4_SSN: ");
        (void)scanf("%d", &ptrEmployee->last_4_SSN);

        printf("Enter the employee's job title: ");
        (void)scanf("%s", &ptrEmployee->title);

    }
    printf("\n");
    ptrEmployee = &employee.emp1;
    for (int i = 0; i < 2; i++)
    {
        if (i == 1) ptrEmployee = &employee.emp2;
        printf("Employee information for %s %s:\n", ptrEmployee->first_name, ptrEmployee->last_name);
        printf("ID: %d\n", ptrEmployee->ID_number);
        printf("SSN: %d\n", ptrEmployee->last_4_SSN);
        printf("Title : %s Engineer\n\n", ptrEmployee->title);
        
    }
    return 0;
}

