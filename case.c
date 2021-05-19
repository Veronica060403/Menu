#include<stdio.h>
void main()
{
	int c;
	printf("\n\tMENU");
	printf("\n\t--------------------------");
	printf("\n\tPick an item :\n\t\t1. Pizza, Rs 239\n\t\t2. Burger, Rs 129\n\t\t3. Pasta, Rs 179\n\t\t4. French fires, Rs 99\n\t\t5. Sandwich, Rs 149");
	printf("\n\n\tPlace an order :");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("\n\tFood item - Pizza \n\n\tPrice - Rs 239");
	break;
	case 2:
		printf("\n\tFood item - Burger \n\n\tPrice - Rs 129");
	break;
	case 3:
		printf("\n\tFood item - Pasta \n\n\tPrice - Rs 179");
	break;
	case 4:
		printf("\n\tFood item - French fries \n\n\tPrice - Rs 99");
	break;
	case 5:
		printf("\n\tFood item - Sandwich \n\n\tPrice - Rs 149");
	break;
	default:
		printf("\n\tPlease choose number from 1 to 5");
	break;
	}
	printf("\n\t--------------------------");
}
