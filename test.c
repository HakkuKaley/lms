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

int login()
{
	system("cls");
	printf("HELLO");
	printf("\n\n\npress any key to continue....");
	getch();
	return 0;
}

void newa()
{
	system("cls");
	printf("This is newa function");
	
}

void startapp()
{
	int c;
	while(1)
	{
		system("cls");
		printf("========================================================\n");
		printf("\n		LIBRARY MANAGEMENT SYSTEM\n");
		printf("\n========================================================");
		printf("\n\n");
		printf("1.  Add Book.\n");
		printf("2.  Remove Book.\n");
		printf("3.  View Booklist.\n");
		printf("4.  Issue Book.\n");
		printf("5.  View Issued Booklist.\n\n");
		printf("__________________________________________________________\n\n");
		printf("Enter a number.\n");
		scanf("%d", &c);
		switch (c)
		{
			case 1:
				login();
				break;
			case 2:
				newa();
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
