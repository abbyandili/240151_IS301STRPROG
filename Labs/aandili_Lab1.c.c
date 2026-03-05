#include <stdio.h>

int main() {
    
    /* Defined Constants */
    const float tv_price = 400.00;
    const float monitor_price = 220.00;
    const float flash_price = 35.20;
    const float hd_price = 150.00;
    const float printer_price = 300.00;
    const float tax_rate = 0.0835;

    /* Integer variables for quantities */
    int qtytv, qtymonitor, qtyflash, qtyhd, qtyprinter;

    /* Float variables for totals */
    float totaltv, totalmonitor, totalflash, totalhd, totalprinter;
    float subtotal, tax, total;

    /* User Input */
    printf("How Many TVs Were Sold? ");
    scanf("%d", &qtytv);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &qtymonitor);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &qtyflash);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &qtyhd);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &qtyprinter);

    /* Calculations */
    totaltv = qtytv * tv_price;
    totalmonitor = qtymonitor * monitor_price;
    totalflash = qtyflash * flash_price;
    totalhd = qtyhd * hd_price;
    totalprinter = qtyprinter * printer_price;

    subtotal = totaltv + totalmonitor + totalflash + totalhd + totalprinter;
    tax = subtotal * tax_rate;
    total = subtotal + tax;

    /* Output */
    printf("\nQTY  DESCRIPTION        UNIT PRICE   TOTAL PRICE\n");
    printf("------------------------------------------------------------\n");
    printf("%-4d TV                 400.00       %.2f\n", qtytv, totaltv);
    printf("%-4d Monitor            220.00       %.2f\n", qtymonitor, totalmonitor);
    printf("%-4d Flash Drive         35.20       %.2f\n", qtyflash, totalflash);
    printf("%-4d Hard Drive         150.00       %.2f\n", qtyhd, totalhd);
    printf("%-4d Deskjet Printer    300.00       %.2f\n", qtyprinter, totalprinter);
    printf("------------------------------------------------------------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax: %.2f\n", tax);
    printf("Total: %.2f\n", total);
    printf("------------------------------------------------------------\n");

    return 0;
}

