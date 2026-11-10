<div align="center">

<img src="../assets/alaqsa-logo.png" alt="Al-Aqsa University Logo" width="120">

# Al-Aqsa University
### Faculty of Engineering

**Embedded Systems Lab (ENGS4305)**

**Lab 05 — Loops in C**

</div>

<div align="center">

<table>
  <tr>
    <th>Academic Information</th>
    <th>Details</th>
  </tr>
  <tr>
    <td><b>Student Name</b></td>
    <td>Samar M. Balousha</td>
  </tr>
  <tr>
    <td><b>Student ID</b></td>
    <td>2320222601</td>
  </tr>
  <tr>
    <td><b>Major</b></td>
    <td>Intelligent Systems and Computer Engineering</td>
  </tr>
  <tr>
    <td><b>Instructor</b></td>
    <td>Eng. Shahed Albadrasawi</td>
  </tr>
  <tr>
    <td><b>Academic Year</b></td>
    <td>2026–2027</td>
  </tr>
  <tr>
    <td><b>Date</b></td>
    <td>November 10th, 2026</td>
  </tr>
</table>

</div>

---

## Exercise 1 — Multiplication Table Using For Loop

**Task:** Write a C program that reads a number from the user and prints its multiplication table using a `for` loop.

The program iterates through the multiplication values and displays the result of multiplying the entered number by each iteration value.

**Source Code:** [View Exercise 1 Code](<Code & Execution/ex1.c>)

**Result:**

![Exercise 1 Output](<Results & Screenshots/ex1 output.png>)

---

## Exercise 2 — Sum of Numbers Using While Loop

**Task:** Write a C program that asks the user to enter a number and calculates the sum of all integers from 1 to that number using a `while` loop.

The program initializes a sum variable to zero and repeatedly adds the current counter value until the specified number is reached.

**Source Code:** [View Exercise 2 Code](<Code & Execution/ex2.c>)

**Result:**

![Exercise 2 Output](<Results & Screenshots/ex2 output.png>)

---

## Exercise 3 — Number Input Using Do-While Loop

**Task:** Write a C program that asks the user to enter a number and continues requesting a new number as long as the entered value is less than 100, using a `do-while` loop.

The program stops requesting input when the user enters a number greater than or equal to 100.

**Source Code:** [View Exercise 3 Code](<Code & Execution/ex3.c>)

**Result:**

![Exercise 3 Output](<Results & Screenshots/ex3 output.png>)

---

### Notes

- **For Loop (`for`):**
  - Used when the number of iterations is known or controlled by a counter.
  - Consists of initialization, condition, and update expressions.
  - The condition is evaluated before each iteration.

- **While Loop (`while`):**
  - Repeats a block of code as long as the specified condition remains true.
  - The condition is checked before executing the loop body.
  - The counter or controlling variable must be updated appropriately to avoid infinite loops.

- **Do-While Loop (`do-while`):**
  - Executes the loop body at least once before checking the condition.
  - The condition is evaluated after each iteration.
  - A semicolon (`;`) is required after the `while(condition)` statement.

