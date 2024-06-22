#include<stdio.h>
#include<stdlib.h>

struct books
{
	int id;
	char bookname[50];
	char authorname[50];
}b;

struct student
{
	int id;
	char sname[50];
	char sclass[50];
	int sroll;
	char bookname[50];
	
}s;

FILE *fp;

void startapp()
{
	int c;
	while(1)
	{
		system("cls");
		printf("========================================================\n");
		printf("\n		LIBRARY MANAGEMENT SYSTEM\n");
		printf("\n========================================================");
		printf("\n\nPlease Login to continue...\n\n");
		printf("1.  Login.\n");
		printf("2.  Register.\n");
		printf("3.  Exit.\n");
		printf("__________________________________________________________\n\n");
		printf("Enter your choice.\n");
		scanf("%d", &c);
		switch (c)
		{
			case 1:
				login();
				break;
			case 2:
				
				break;
			case 3:
				system("cls");
				exit(0);
			default:
				printf("Invalid choice");
				exit(0);
		}
	}
}

int login()
{
	system("cls");
	int y, a=5;
	printf("Press Y\n");
	scanf("%d", &y);
	if(y==a)
	{
		printf("Authentication Successfull!\n");
		printf("\nPress any key to continue.\n");
		getch();
		menu();
	}
	else
	{
		printf("**Incorrect username or password**\n");
		printf("\nPress any key to try again.\n");
		getch();
		return 0;
	}
}

void addbook()
{
	printf("Enter Book ID.\n");
	scanf("%d", &b.id);
	fflush("stdin");
	printf("Enter the bookname.\n");
	scanf("%s", &b.bookname);
	
}

void menu()
{
	int c;
	while(1)
	{
		system("cls");
		printf("========================================================\n");
		printf("\n		LIBRARY MANAGEMENT SYSTEM\n");
		printf("\n========================================================");
		printf("\n\nMENU\n\n");
		printf("1.  Add Book.\n");
		printf("2.  Remove Book.\n");
		printf("3.  View Booklist.\n");
		printf("4.  Issue Book.\n");
		printf("5.  View Issued Booklist.\n\n");
		printf("__________________________________________________________\n\n");
		printf("Enter your choice.\n");
		scanf("%d", &c);
		switch (c)
		{
			case 1:
				addbook();
				break;
			case 2:
				break;
			case 3:
				printf("Test 3");
				break;
			case 4:
				printf("Test 4");
				break;
			case 5:
				printf("Test 5");
				break;
			default:
				printf("Invalid choice");
				exit(0);
		}
	}
	
}

int main()
{
	startapp();
	return 0;
}

