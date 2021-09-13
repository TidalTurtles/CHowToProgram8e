// Fig. 3.6: fig03_06.c
// Class average program with counter-controlled iteration
#include <stdio.h>
#include <stdbool.h>"

// function main begins program execution
int main( void )
{
   //romoved counter // number of grade to be entered next
   int grade; // grade value
   int total; // sum of grades entered by user
   int average;// average of grades
    bool isValid; //check it
   
   // initialization phase
   total = 0;// initialize total
    // initialize loop
    //removed counter because of for loop
    isValid = false;
   // processing phase
    for ( int i = 0; i < 10; i++ ) { // loop 10 times
      printf( "%s", "Enter grade: " ); // prompt for input
      //checking validation
        isValid = scanf("%d", &grade);
        //clear input buffer?
        while ((getchar()) != '\n');
        //check input was valid
        while (isValid != 1) {
            printf("%s", "Improper entry, try again: ");
            isValid = scanf("%d", &grade);
        }
        while (grade < 0 || grade > 100) {
            printf("%s", "Improper entry, try again: ");
            isValid = scanf("%d", &grade);
        }
        total = total + grade;
        // read grade from user
       // add grade to total
       // increment counter / did not need counter in for loop
   } // end for
   
   // termination phase
   average = total / 10; // integer division

   printf( "Class average is %d\n", average );// display result
    //print letter grade
    if (average >= 90) {
        printf("%s", "Grade is an A");
    } else if (average < 90 && average >= 80) {
        printf("%s", "Grade is an B");
    } else if (average < 80 && average >= 70) {
        printf("%s", "Grade is an C");
    } else if (average < 70 && average >= 60) {
        printf("%s", "Grade is an D");
    } else {
        printf("%s", "Grade is an F");
    }
} // end function main

/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

