#include <stdio.h>

int main() {
    double cost_price, selling_price;
    double profit, loss, profit_percent, loss_percent;

    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &cost_price, &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        profit_percent = (profit / cost_price) * 100.0;
        printf("Profit %.2f%%\n", profit_percent);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        loss_percent = (loss / cost_price) * 100.0;
        printf("Loss %.2f%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}