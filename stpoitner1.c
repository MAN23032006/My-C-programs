#include <stdio.h>
struct Book
{
    int Book-ID;
    char Book-Name[30];
    int book-price;
};
int main(){
    struct Book b1;
    struct Book * ptr = &b1;
    printf("Enter Book ID: ");
    scanf("%d", &ptr->Book-ID);
    printf("Enter Book Name: ");
    scanf("%s", ptr->Book-Name);
    printf("Enter Book Price: ");
    scanf("%d", &ptr->book-price);
     
     printf("\nBook ID: %d\n", ptr->Book-ID);
     printf("Book Name: %s\n", ptr->Book-Name);
     printf("Book Price: %d\n", ptr->book-price);
     return 0;
     
}
