# Experiment-3

~ Aim (1): Calculate student's grade.

~ Algorithm:

1. Start the program.
2. Declare five integer variables for marks of five subjects.
3. Declare a float variable for average.
4. Prompt the user to enter marks for each subject and read the values.
5. Calculate the average by adding all five marks and dividing by 5.0.
6. Display the calculated percentage.
7. Use if-else statements to determine the grade based on the average:

   • If average ≥ 90, print "Grade: O"
   
   • Else if average ≥ 85 and < 90, print "Grade: A+"
   
   • Else if average ≥ 75 and < 85, print "Grade: A"
   
   • Else if average ≥ 65 and < 75, print "Grade: B+"
   
   • Else if average ≥ 55 and < 65, print "Grade: B"
   
   • Else if average ≥ 40 and < 55, print "Grade: C"
   
   • Else, print "Fail"
   
9. End the program.

~ Theory:

• This C++ program calculates a student's average percentage and grade based on the marks entered for five subjects.

• It takes input for marks, labeled 'm1' through 'm5'.

• The program computes the average using the formula `(m1 + m2 + m3 + m4 + m5) / 5.0` and then displays the percentage.

• It uses 'if-else' statements to check the percentage range and print the corresponding grade, such as "O", "A+", or "B".

• If the average is below 40, it will print "Fail".

• This program shows how to use conditional logic, perform arithmetic operations, and handle basic input/output in C++.


~ Aim (2): Check whether the number is positive or negative.

~ Algorithm:

1. Start the program.
2. Declare an integer variable for the number.
3. Prompt the user to enter a number and read the input.
4. If the number is greater than 0, print that it is a positive number.
5. Else if the number is less than 0, print that it is a negative number.
6. Else, print that the number is zero.
7. End the program.

~ Theory:

• This C++ program checks if a number is positive, negative, or zero.

• It takes an integer input from the user and uses 'if-else' statements to evaluate the number.

• If the number is greater than 0, it prints that it is positive.

• If it is less than 0, it prints that it is negative.

• Otherwise, it prints that the number is zero.

• This program shows how to use conditional statements and basic input/output in C++.


~ Aim (3): To find coordinates are from which quadrant.

~ Algorithm:

1. Start the program.
2. Declare two integer variables for x and y coordinates.
3. Prompt the user to enter the x coordinate and read the input.
4. Prompt the user to enter the y coordinate and read the input.
5. If x > 0 and y > 0, print that the point is in Quadrant I.
6. Else if x < 0 and y > 0, print that the point is in Quadrant II.
7. Else if x < 0 and y < 0, print that the point is in Quadrant III.
8. Else if x > 0 and y < 0, print that the point is in Quadrant IV.
9. Else if x == 0 and y == 0, print that the point is at the origin.
10. Else if x == 0, print that the point lies on the Y axis.
11. Else if y == 0, print that the point lies on the X axis.
12. End the program.

~ Theory:

• This C++ program finds the location of a point in the coordinate plane based on its 'x' and 'y' values.

• The user types in the coordinates, and then, using a series of 'if-else' statements, the program checks which quadrant the  point is in:

  • both 'x' and 'y' are positive → Quadrant I
  
  • 'x' is negative and 'y' is positive → Quadrant II
  
  • both 'x' and 'y' are negative → Quadrant III
  
  • 'x' is positive and 'y' is negative → Quadrant IV
  
  • if both are zero → the point is at the origin
  
  • if 'x' is zero → the point is on the Y-axis
  
  • if 'y' is zero → the point is on the X-axis


~ Conclusion:
The programs illustrate the application of operators in C++, applying arithmetic for calculating average and percentage, and relational for determining whether a number is positive, negative, or zero. Also, the third program uses the 'x' and 'y' values to determine where in the coordinate plane that point lies. All the examples illustrate how the combination of operators and decision-making structures can help in programming to solve real-world problems in C++.
