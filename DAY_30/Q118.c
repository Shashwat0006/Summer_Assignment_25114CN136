#include<stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    int n;

    printf("Enter number of books: ");
    scanf("%d",&n);

    struct Book b[n];

    // Logic:
    // 1. Take input of book id, title and author.
    // 2. Store all books in an array.
    // 3. Display complete library details.

    for(int i=0;i<n;i++)
    {
        printf("\nBook %d\n",i + 1);

        printf("Enter Book ID");
        scanf("%d", &b[i].id);

        printf("Enter Book Title");
        scanf("%s", b[i].title);

        printf("Enter Author Name");
        scanf("%s", b[i].author);
    }

    printf("\n--- Library Records ---\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nBook ID :%d",b[i].id);
        printf("\nTitle   : %s",b[i].title);
        printf("\nAuthor  : %s\n",b[i].author);
    }

    
}