/*
 * Par Chea
 * January 27, 2022
 * CIS 2107 Section 4
 * Lab2 Paycheck
 * "A program that calculate the paycheck of a Temple employee and print it out."
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    double tmp;
    long long int employeeNumber;
    double hourlySalary, weeklyTime, regularPay,overtimePay;

    puts("\nWelcome to \"TEMPLE HUMAN RESOURCES\"\n");//header


    printf("%s", "\tEnter Employee Number: ");
    scanf("%lf",&tmp);
    employeeNumber = (long long int)tmp;
    if(employeeNumber <= 0 || employeeNumber != tmp){
        puts("\n\tThat is not a valid Employee Number.\n\tPlease run the program again\n");
        puts("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }

    printf("%s", "\tEnter Hourly Salary: ");
    scanf("%lf",&hourlySalary);
    if(hourlySalary <= 0)
    {
        puts("\n\tThat is not a valid hourly salary amount.\n\tPlease run the program again\n");
        puts("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }

    printf("\tEnter Weekly Time: ");
    scanf("%lf",&weeklyTime);
    if(weeklyTime <= 0)
    {
        puts("\n\tThat is not a weekly time.\n\tPlease run the program again\n");
        puts("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }

    if(weeklyTime > 0){
        overtimePay = weeklyTime - 40;
    }
    regularPay = (weeklyTime - overtimePay) * hourlySalary;
    overtimePay = 1.5 * overtimePay * hourlySalary;

    //outputs
    puts("\t==============================");
    printf("\tEmployee #: %ld\n",employeeNumber);
    printf("\tHourly Salary: $%0.2lf\n",hourlySalary);
    printf("\tWeekly Time: %0.2lf\n",weeklyTime);
    printf("\tRegular Pay: $%0.2lf\n",regularPay);
    printf("\tOvertime Pay: $%0.2f\n",overtimePay);
    printf("\tNet Pay: $%0.2f\n",regularPay+overtimePay);
    puts("\t==============================");
    puts("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");//footer

}
