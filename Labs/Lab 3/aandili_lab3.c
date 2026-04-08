#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declare the variables
    char empNo;
    int dept;
    float payRate, hoursWorked, basePay;
    char exempt;
    char header;

    //Open the input file employee.txt
    FILE*inFile = fopen("employee.txt", "r");
    if(inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }
    
    //Open the output file payroll_register.txt
    FILE*outFile = fopen("payroll_register.txt\n");
    if (outFile == NULL){
        printf("Error creating payroll_regsiter.txt\n");
        fclose(inFile);
        return 1;
    }
    
}
