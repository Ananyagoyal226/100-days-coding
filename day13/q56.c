// Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main() {
    float cp, sp, profit, loss, profit_percentage, loss_percentage;

    // Step 1: User se Cost Price aur Selling Price input lo
    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);
    
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    // Step 2: Check karo ki profit hai ya loss
    if (sp > cp) {
        profit = sp - cp;
        profit_percentage = (profit / cp) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", profit_percentage);
    } 
    else if (cp > sp) {
        loss = cp - sp;
        loss_percentage = (loss / cp) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", loss_percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}