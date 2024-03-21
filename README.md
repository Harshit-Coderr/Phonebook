# Phonebook
<h2>The code written in C appears to be for a simple phonebook application. It allows users to add contacts and view existing entries.</h2>


<h3><p align="center"><b>Libraries:</b></p></h3>


<stdio.h>: Provides standard input/output functions like printf for printing and scanf for getting user input.

<windows.h>: This might be for functionalities specific to Windows OS.

<string.h>: Used for string manipulation functions like fgets to read a line with spaces.

<ctype.h>: Provides character classification functions like isalpha to check if a character is an alphabet.





<h3><p align="center"><b>Main Function:</b></p></h3>


The code starts with the main function, which is the entry point of the program.





<h3><p align="center"><b>Variables:</b></p></h3>


number: An array of long long int to store phone numbers (10 digits).

many: An integer to store the number of entries the user wants to add.

i: A loop counter variable. 

name: A 2D character array to store names (up to 50 characters each).

age: An integer array to store ages.

num: An integer variable to store the user's choice (1 to add, 2 to view, 3 to exit).





 <h3><p align="center"><b>User Input Loop:</b></p></h3>
 

The program enters a loop that continues until the user chooses to exit (option 3).

Inside the loop, a switch statement handles different user options.





<h3><p align="center"><b>User Input Loop:</b></p></h3>


If the user chooses 1 (add contacts), the program asks for the number of entries to be added.

It validates the number of entries to ensure it's positive.

Then, it iterates for the specified number of entries using a loop:
     
   1.  It clears any leftover input from previous operations using getchar().

   2.  Prompts the user for the name, reads the line using fgets, and removes 
       the newline character (\n) at the end if present.

   3.   Validates if the name starts with a letter using isalpha. If not, it 
        shows an error message.

   4.   Prompts the user for the phone number, reads it using scanf, and 
        validates it to be 10 digits.

   5.   Prompts the user for age, reads it using scanf, and validates it to be 
        between 1 and 100.

   6.  If all validations pass, it adds the contact information (name, number, 
       age) to the corresponding arrays.

   7.  After adding all entries, it shows a success message.





<h3><p align="center"><b>Case 2: View Phonebook</b></p></h3>      


If the user chooses 2 (view phonebook), the program asks for the number of entries (assuming the user knows how many entries are there).

It validates the number to ensure it's positive.

If there are entries (more than 0), it displays a header and iterates through the entries, printing the name, phone number, and age for each contact in a formatted way.

If there are no entries (0), it shows a message indicating the phonebook is empty.





<h3><p align="center"><b>Case 3: Exit</b></p></h3>


If the user chooses 3 (exit), the program exits the loop and terminates.

<h3><p align="center"><b>Default Case:</b></p></h3>

If the user enters an invalid option, the program shows an error message.
Exiting the Program:

After exiting the loop (due to the user choosing option 3), the program shows an exit message and returns 0 to indicate successful executio.



<h2>Overall, this C code provides a basic phonebook application with functionalities to add and view contacts while performing some basic validations on the user input.</h2>
