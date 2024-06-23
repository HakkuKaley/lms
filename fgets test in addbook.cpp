#include<stdio.h>
#include<string.h>
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

void delbook()
{
	int f=0, id;
	printf("Enter the book id:\n");
	scanf("%d", &id);
	
	FILE *ft;
	
	fp=fopen("books.txt", "rb");
	ft=fopen("temp.txt", "wb");
	
	while(fread(&b, sizeof(b), 1, fp) == 1)
	{
		if (id==b.id)
		{
			f=1;
		}
		else
		{
			fwrite(&b, sizeof(b), 1, ft);
		}
	}
	
	if (f=1)
	{
		printf("Book removed successfully!");
	}
	else
	{
		printf("No record found.");
	}
	
	fclose(fp);
	fclose(ft);
	
	remove("books.txt");
	rename("temp.txt", "books.txt");
}

void booklist()
{
	system("cls");
	printf("\t\t AVAILABLE BOOKS\n");
	printf("%-10s %-30s %50s \n", "Book ID", "Book Name", "Author");
	
	fp=fopen("books.txt", "rb");
	while(fread(&b, sizeof(b), 1, fp) == 1)
	{
		printf("%-10d %-30s %50s \n", b.id, b.bookname, b.authorname);
	}
	
	fclose(fp);
	getchar();
	printf("\nPress any key to continue...\n");
	getchar();
}

void addbook()
{
	system("cls");
	
    fp = fopen("books.txt", "ab");

    printf("Enter book id: ");
    scanf("%d", &b.id);
    
    while (getchar() != '\n');

    printf("Enter book name: ");
    fgets(b.bookname, sizeof(b.bookname), stdin);
    b.bookname[strcspn(b.bookname, "\n")] = '\0';

    printf("Enter author name: ");
    fgets(b.authorname, sizeof(b.authorname), stdin);
    b.authorname[strcspn(b.authorname, "\n")]='\0';

    printf("Book Added Successfully");

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
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
				delbook();
				break;
			case 3:
				booklist();
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

int login()
{
	system("cls");
	char y, a='Y';
	printf("Press Y\n");
	getchar();
	scanf("%c", &y);
	if(y==a)
	{
		printf("Authentication Successfull!\n");
		printf("\nPress any key to continue.\n");
		getchar();
		menu();
	}
	else
	{
		printf("**Incorrect username or password**\n");
		printf("\nPress any key to try again.\n");
		getchar();
		return 0;
	}
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

int main()
{
	startapp();
	return 0;
}





