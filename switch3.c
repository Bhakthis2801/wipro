
#include<stdio.h>

int main()
{
        int choice,quantity,total;

        printf("Welcome to Vidyarthi Bhavan\n");
        printf("Here's the Menu\n");
        printf("1.Masala Dosa --->Rs. 250/-\n2.Veg. Pulav --->Rs.150/-\n3.Set Dosa --->Rs.100/-\n4.Coffee --->Rs.50-\n");
        printf("=====================================================\n");

        printf("Select your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
                case 1:
                        printf("Select the quantity\n");
                        scanf("%d",&quantity);
                        total=quantity*250;
                        printf("Total Amount : %d\n",total);
                        printf("Your order is accepted\n");
                        printf("Your order will be delivered within 30 minutes\n");
                        printf("Thanks for contacting Vidyarthi Bhavan\n");
                        break;

                case 2:
                        printf("Select the quantity\n");
                        scanf("%d",&quantity);
                        total=quantity*150;
                        printf("Total Amount : %d\n",total);
                        printf("Your order is accepted\n");
                        printf("Your order will be delivered within 30 minutes\n");
                        printf("Thanks for contacting Vidyarthi Bhavan\n");
                        break;

                case 3:
                        printf("Select the quantity\n");
                        scanf("%d",&quantity);
                        total=quantity*100;
                        printf("Total Amount : %d\n",total);
                        printf("Your order is accepted\n");
                        printf("Your order will be delivered within 30 minutes\n");
                        printf("Thanks for contacting Vidyarthi Bhavan\n");
                        break;

                case 4:
                        printf("Select the quantity\n");
                        scanf("%d",&quantity);
                        total=quantity*50;
                        printf("Total Amount : %d\n",total);
                        printf("Your order is accepted\n");
                        printf("Your order will be delivered within 30 minutes\n");
                        printf("Thanks for contacting Vidyarthi Bhavan\n");
                        break;

                default:
                        printf("Please order the items which are in menu only\n");
        }
        return 0;
}
