<div align="center">

<img src="../assets/alaqsa-logo.png" alt="Al-Aqsa University Logo" width="120">

# Al-Aqsa University
### Faculty of Engineering

**Embedded Systems Lab (ENGS4305)**

**Lab 06 — Functions & 1D Arrays in C**

</div>

<div align="center">

<table>
  <tr>
    <th>Academic Information</th>
    <th>Details</th>
  </tr>
  <tr><td><b>Student Name</b></td><td>Samar M. Balousha</td></tr>
  <tr><td><b>Student ID</b></td><td>2320222601</td></tr>
  <tr><td><b>Major</b></td><td>Intelligent Systems and Computer Engineering</td></tr>
  <tr><td><b>Instructor</b></td><td>Eng. Shahed Albadrasawi</td></tr>
  <tr><td><b>Academic Year</b></td><td>2026–2027</td></tr>
  <tr><td><b>Date</b></td><td>November 10th, 2026</td></tr>
</table>

</div>

---

## Exercise 1 — Finding the Maximum Value in an Array

**Task:** Write a C program that creates a `findMax()` function to receive an array of five numbers and return the largest value.

The function compares the elements of the array and returns the maximum number.

**Source Code:** [View Exercise 1 Code](<Code & Execution/ex1.c>)

**Result:**

![Exercise 1 Output](<Results 7 Screenshots/ex1 output.png>)

---

## Exercise 2 — Calculating the Average of Grades

**Task:** Write a C program that creates a `findAverage()` function to calculate the average of a set of grades entered by the user.

The function receives an array of grades, calculates their sum using a loop, and returns the arithmetic average.

**Source Code:** [View Exercise 2 Code](<Code & Execution/ex2.c>)

**Result:**

![Exercise 2 Output](<Results 7 Screenshots/ex2 output.png>)

---

## Exercise 3 — Printing Even Numbers from an Array

**Task:** Write a C program that stores ten numbers entered by the user in a one-dimensional array and prints only the even numbers.

The program uses a `for` loop to examine each element and the modulo operator (`%`) to determine whether it is even.

**Source Code:** [View Exercise 3 Code](<Code & Execution/ex3.c>)

**Result:**

![Exercise 3 Output](<Results 7 Screenshots/ex3 output.png>)

---

## Exercise 4 — Reversing Array Elements

**Task:** Write a C program that creates a `reverseArray()` function to reverse the order of elements in an array.

The function swaps elements from opposite ends of the array until the order of all elements is reversed.

**Source Code:** [View Exercise 4 Code](<Code & Execution/ex4.c>)

**Result:**

![Exercise 4 Output](<Results 7 Screenshots/ex4 output.png>)

---

## Exercise 5 — Student Grades Analysis Using Functions

**Task:** Write a C program that receives the grades of five students and stores them in an array.

The program must implement two functions:

- `calcAverage()` to calculate and return the average grade.
- `findHighest()` to find and return the highest grade.

The program displays both the average and the highest grade.

**Source Code:** [View Exercise 5 Code](<Code & Execution/ex5.c>)

**Result:**

![Exercise 5 Output](<Results 7 Screenshots/ex5 output.png>)

---

### Notes

- **Functions in C:**
  - Functions organize programs into reusable blocks of code.
  - A function consists of a return type, function name, parameters, and body.
  - Functions improve code readability and reduce repetition.

- **Return Types (`void` and `return`):**
  - `void` indicates that a function does not return a value.
  - The `return` statement sends a value back to the calling function.
  - Functions returning values can use data types such as `int` and `float`.

- **One-Dimensional Arrays:**
  - Arrays store multiple elements of the same data type.
  - Array indexing starts at `0`.
  - For an array of size `n`, valid indices range from `0` to `n-1`.

- **Passing Arrays to Functions:**
  - Arrays can be passed to functions using parameters such as `int arr[]`.
  - The array size is commonly passed as a separate parameter.
  - Modifying array elements inside a function affects the original array.



