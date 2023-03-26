#include <stdio.h>

main()
{
	float initial;
	float final;
	float gallon;
	float milesPerGallon[10];
	int i;
	
	printf("\n----------Miles Per Gallon Calculator----------\n");
	
	for(i = 1; i<=10; i++)
	{
		printf("\nEnter the initial odometer reading of car %d:\t", i);
		scanf("%f", &initial);
		
		printf("Enter the final odometer reading of car %d:\t", i);
		scanf("%f", &final);
		
		printf("Enter the number of gallons of gas car %d used:\t", i);
		scanf("%f", &gallon);
		
		milesPerGallon[i] = (final - initial) / gallon;
	}
	
	for(i = 1; i<=10; i++)
	{
		printf("\nThe miles per gallon of car %d is %0.2f", i, milesPerGallon[i]);
	}
	return 0;
}
