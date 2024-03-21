#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
int main()
{
   long long int number[10000];
   int many, i;
   char name[10000][50];
   int num, age[10000];
   printf("\n\n\e[1;35m Enter 1 to add numbers to phonebook\t\t\tEnter 2 to show phonebook\t\t\t Enter 3 to exit \n\n\t\t\t\t\t\t\t= \e[0m ");
   scanf("%d", &num);
   while (num != 3)
   {
      switch (num)
      {
      case 1:
         printf("\n\e[1m How many numbers do you want to add to the phonebook  = \e[0m");
         scanf("%d", &many);

         if (many <= 0)
         {
            printf("\e[1;31mInvalid input: Number of entries cannot be negative.\n\e[0m");
            break;
         }
         for (i = 1; i <= many; i++)
         {
            getchar();
            printf("----------------------------------");
            printf("\n\nName   - ");
            fgets(name[i], sizeof(name[i]), stdin);
            name[i][strcspn(name[i], "\n")] = '\0';

            if (!isalpha(name[i][0]))
            {
               printf("\e[1;31mInvalid name. Name must start with a letter.\n\e[0m");
               break;
            }

            printf("\n\e[1mNumber - \e[0m");
            scanf("%11d", &number[i]);

            if (number[i] < 999999999 || number[i] > 9999999999)
            {
               printf("\e[1;31mInvalid number. Number must be 10 digit\e[0m");
               break;
            }
            printf("\n\e[1mAge    - \e[0m");
            scanf("%d", &age[i]);
            printf("\n");
            if (age[i] < 1 || age[i] > 100)
            {
               printf("\e[1mInvalid age. Age must be 1-100\e[0m");
               break;
            }
            printf("----------------------------------\n");
         }
         if (!isalpha(name[i][0]))
         {
            break;
         }
         if (age[i] < 1 || age[i] > 100)
         {
            break;
         }
         if (number[i] < 999999999 || number[i] > 9999999999)
         {

            break;
         }
         printf("\e[1;32m\nNumbers added successfully.\n\e[0m");
         break;

      case 2:

         printf("\e[1mHow many entries you want to see  = \e[0m");
         scanf("%d", &many);

         if (many <= 0)
         {
            printf("\e[1;31mInvalid input: Number of entries cannot be negative.\n\e[0m");
            break;
         }

         if (many > 0)
         {
            printf("\n\e[1mPhonebook:\n\e[0m");
            printf("------------------------------------------------------------------------------------------------------\n");
            for (i = 1; i <= many; i++)
            {

               getchar();

               printf("\e[1m\n%d)\tname = %s\t\t\e[0m", i, name[i]);
               printf("number = %11d\t\t", number[i]);
               printf("age = %d\n", age[i]);
            }
         }
         else
         {
            printf("\e[1;31mPhonebook is empty.\n\e[0m");
         }
         break;
 
      default:
         printf("\e[1mInvalid option.\n\e[0m");
         break;
      }

      printf("\e[1;35m\n\nEnter 1 to add numbers to phonebook\t\tEnter 2 to show phonebook\t\tEnter 3 to exit\n\n\t\t\t\t\t\t\t= \e[1;35m");
      scanf("%d", &num);
   }

   printf("\e[1;32mExiting the program.\n\e[0m");

   return 0;
}
