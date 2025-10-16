#include <stdio.h>
int main()
{
    float order_value, delivery_charges, discount, final_amount;
    int is_holiday;

    printf("Enter the order value: ");
    scanf("%f", &order_value);
    
    printf("Is it a holiday? (1 for Yes, 0 for No): ");
    scanf("%d", &is_holiday);

    // Calculate delivery charges 

    if (is_holiday == 1){
        delivery_charges = 0;
    }
    
   else {
    if (order_value >= 3000 )
    {
        delivery_charges = 0;
    }
    else if (order_value >= 1500 && order_value < 3000 )
    {
        delivery_charges = 100;
    }
    else if (order_value >= 1000 && order_value < 1500 )
    {
        delivery_charges = 200;
    }
    else
    {
        delivery_charges = 300;
    }
}
    //Calculate discount
    if(order_value >= 3000){
        if(is_holiday == 1){
            discount = order_value * 0.20;
        }
        else{
            discount = order_value * 0.10;
        }
    }
    else{
        discount = 0;
    }

    final_amount = order_value - discount + delivery_charges;

    // Display the results
    
    printf("Order Value: %.2f\n", order_value);
    printf("Discount: %.2f\n", discount);
    printf("Delivery Charges: %.2f\n", delivery_charges);
    printf("Final amount to be paid: %.2f\n", final_amount);
    return 0;
}