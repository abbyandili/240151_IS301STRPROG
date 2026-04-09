#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare the variables - empNo and header are now arrays
    char empNo[20]; 
    int dept;
    float payRate, hoursWorked, basePay;
    char exempt;
    char header[100]; 

    // Open the input file
    FILE *inFile = fopen("employee.txt", "r");
    if(inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }
    
    // Open the output file - added "w" mode and removed \n
    FILE *outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL){
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    // Reads the first line and discards it 
    fgets(header, sizeof(header), inFile);
    
    // Write headers to output file 
    fprintf(outFile, "%-15s %-12s %-10s %-8s %-15s %-10s\n", 
            "Employee No.", "Department", "Pay Rate", "Exempt", "Hours Worked", "Base Pay");
    
    // Read and process data
    // Note: empNo does not need the '&' because it's an array
    while(fscanf(inFile, "%19s %d %f %c %f", empNo, &dept, &payRate, &exempt, &hoursWorked) == 5){
        basePay = payRate * hoursWorked;

        fprintf(outFile, "%-15s %-12d %-10.2f %-8c %-15.1f %-10.2f\n", 
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}