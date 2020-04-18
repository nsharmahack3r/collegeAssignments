#include <stdio.h>
#include <string.h>
//NabhyaTron
struct student{
	int rollno;
	char name[20];
	int marks;
};
int main()
{
	int n;
	printf("Welcome to Tron's Database\n");
	printf("\nEnter no of students required.\n");
	scanf("%d",&n);
	struct student st[n];
	for(int i=0;i<n;i++)
	{
		printf("\nEnter details for student %d\n",i+1);
		printf("Name : ");
		scanf("%s",st[i].name);
		printf("Roll Number : ");
		scanf("%d",&st[i].rollno);
		printf("Marks : ");
		scanf("%d",&st[i].marks);
	}
	char lookfor[20];
	printf("\nData Entered Successfully.\n");
	printf("Enter the name of student whose info is required : ");
	scanf("%s",lookfor);
	for(int i=0;i<n;i++)
	{
		if(strcmp(lookfor,st[i].name)==0)
		{
			printf("\nMatch found!\n");
			printf("Name : %s\n",lookfor);
			printf("Rollno : %d\n",st[i].rollno);
			printf("Marks : %d",st[i].marks);
		}
		else if(i==n-1)
			printf("\nNo Match Found!");
	}
	return 0;
}