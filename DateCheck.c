#include<stdio.h>
//NabhyaTron
struct date{
	int month;
	int year;
	int day;
}date[2];
int main()
{
	printf("Enter any Two dates\n");
	for(int i=0;i<2;i++)
	{
		printf("\nDate %d",i+1);
		printf("\nDay : ");
		scanf("%d",&date[i].day);
		printf("Month : ");
		scanf("%d",&date[i].month);
		printf("Year : ");
		scanf("%d",&date[i].year);
	}

		if(date[0].year==date[1].year)
		{
			if(date[0].month==date[1].month)
			{
				if(date[0].day==date[1].day)
					printf("\nThe dates are Equal");
			}
			else
				printf("\nThey are unequal");
		}
		else
			printf("\nThey are unequal");


	return 0;
}