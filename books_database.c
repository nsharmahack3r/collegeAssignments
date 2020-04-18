#include <stdio.h>
//NabhyaTron
struct book{
    int book_price;
    int number_of_pages;
    char book_title[100];
};

int main() {
    int n;
	printf("Welcome to Tron Database services.\n");
	printf("Enter number of books required:\n");
	scanf("%d",&n);
	struct book b[n];
	// taking details of n books as input.
	for(int i=0;i<n;i++)
	{
	    printf("\nEnter the details of book %d \n",i+1);
	    printf("Book Title : ");
	    scanf("%s", b[i].book_title);
	    printf("Book Price : ");
	    scanf("%d", &b[i].book_price);
	    printf("Number of pages : ");
	    scanf("%d", &b[i].number_of_pages);
	}
	printf("\nData Entred successfully!\n");
// Printing all the details
	for(int i=0;i<n;i++)
	{
		printf("\nBook %d \n",i+1);
		printf("Title : %s \n", b[i].book_title);
		printf("Price : %d \n", b[i].book_price);
		printf("Number of pages : %d \n", b[i].number_of_pages);
	}
	return 0;
}