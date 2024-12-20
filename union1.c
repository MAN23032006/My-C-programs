#include <stdio.h>
Union Book
{
    int Book-ID;
    char Book-Name[30];  
    int book-price;
};
int main(){
    Union Book b1;
    
    printf("Enter Book ID: ");
    scanf("%d", &b1.book-id);
    printf("Enter Book Name: ");
    scanf("%s", b1.book-name);
    printf("Enter Book Price: ");
    scanf("%d", &b1.book-price);
     
     printf("\nBook ID: %d\n",b1.book-id );
     printf("Book Name: %s\n", b1.book-name );
     printf("Book Price: %d\n" , b1.book-price);
     return 0;
     
}