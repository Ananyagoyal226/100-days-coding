/* "Write a program to calculate library fine based on late days as
 follows: First 5 days late: ₹2/day Next 5 days late: ₹4/day Next 20
  days days late: ₹6/day More than 30 days: Membership Cancelled."*/

  #include <stdio.h>

int main() {
    int days;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine.\n");
    } else if (days <= 5) {
        printf("Total fine: ₹%d\n", days * 2);
    } else if (days <= 10) {
        printf("Total fine: ₹%d\n", (5 * 2) + (days - 5) * 4);
    } else if (days <= 30) {
        printf("Total fine: ₹%d\n", (5 * 2) + (5 * 4) + (days - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}