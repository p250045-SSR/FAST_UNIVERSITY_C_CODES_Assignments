#include <stdio.h>
int main()
{
    int total_seats = 15, pedestrian_count = 0, booked_seats = 0, total_revenue = 0;

   while (booked_seats < total_seats)       //While seats are available
   {
        pedestrian_count++;                 //Every 4th pedestrian books a ticket
    if (pedestrian_count % 4 == 0)          //Sell a ticket
    {
        booked_seats++;
        total_revenue += 60;                //Each ticket costs 60 rupees
        printf("Passenger booked seat #%d. Total revenue: %d\n", booked_seats, total_revenue);

    }
    
      }

      printf("Total revenue: %d rupees\n", total_revenue);
      printf("Bus is full. Booking closed!\n");
      printf("Total revenue collected: %d rupees\n", total_revenue);
      return 0;
   }
