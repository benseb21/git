#include<stdio.h>
int main()
{
 int i,a[i],n,c,e,position;

 printf("Enter the number of elements in the array:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     printf("Enter the elements of the array:");
     scanf("%d",&a[i]);
 }
 do{
    printf("Enter your choice:\n");
    printf("1.Traversal\n");
    printf("2.Insertion\n");
    printf("3.Deletion\n");
    printf("4.Updation\n");
    printf("\n");

    printf("Enter your choice:");
    scanf("%d",&c);

    switch(c)
    {
        case 1:printf("Array\n");
              for (i = 0; i < n; i++) {
               printf("%d ", a[i]);
              }
              printf("\n");
              break;

        case 2: printf("Enter element to insert: ");
               scanf("%d", &e);
               printf("Enter position: ");
               scanf("%d", &position);

               if (position < 0 || position > n) {
                    printf("Index out of bounds.\n");
                } else {
                    for (i = n; i > position; i--) {
                        a[i] = a[i - 1];
                    }
                    a[position] = e;
                    n++;
                    printf("Inserted %d at index %d.\n", e, position);
                    }
                    break;


        case 3:  printf("Enter position to delete from: ");
                scanf("%d", &position);

                if (position < 0 || position >= n) {
                    printf("Position out of bounds.\n");
                } else {
                    int deletedElement = a[position];
                    for (i = position; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                }
                break;

         case 4: printf("Enter position to update: ");
                scanf("%d", &position);
                printf("Enter new element: ");
                scanf("%d", &e);

                if (position < 0 || position >= n) {
                    printf("Index out of bounds.\n");
                } else {
                    a[position] = e;
                    printf("Updated index %d with %d.\n", position, e);
                }
                break;

          default:
                printf("Invalid choice, please try again.\n");
    }

 }while(c<=4);
 return 0;
}
