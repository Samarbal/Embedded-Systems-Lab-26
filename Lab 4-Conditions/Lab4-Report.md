<div align="center">

<img src="../assets/alaqsa-logo.png" alt="Al-Aqsa University Logo" width="120">

# Al-Aqsa University
### Faculty of Engineering

**Embedded Systems Lab (ENGS4305)**

**Lab 04 — IF & Switch Statements**

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

## Exercise 1 — Temperature Checker Using IF-Else Statements

**Task:** Write a C program that receives the temperature from the user and displays an appropriate message based on the following conditions:

- If the temperature is less than 0, print **"It's Freezing, stay home."**
- If the temperature is between 0 and 20, print **"It's Cold, wear a jacket."**
- If the temperature is between 21 and 30, print **"The Weather is nice today."**
- If the temperature is greater than 30, print **"It's hot, stay hydrated."**

**Source Code:** [View Exercise 1 Code](Code%20%26%20Execution/TemperatureChecker.c)

**Result:**

![Exercise 1 Output](<Results & Screenshots/ex1 output.png>)
---

## Exercise 2 — Employee Financial Assistance Eligibility

**Task:** Write a C program that receives an employee's name, salary, and number of children, then checks whether the employee qualifies for financial assistance.

The employee deserves help if both of the following conditions are satisfied:

- The salary is less than or equal to **1000**.
- The number of children is greater than **4**.

If both conditions are true, the program displays **"The Employee Deserves Help"**.

**Source Code:** [View Exercise 2 Code](Code%20%26%20Execution/FinancialAssistance.c)

**Result:**

![Exercise 2 Output](<Results & Screenshots/ex2 output.png>)
---

### Notes

- **Conditional Statements (`if`, `else if`, `else`):**
  - The `if` statement executes a block of code when a condition is true.
  - The `else if` statement checks additional conditions when previous conditions are false.
  - The `else` statement executes when none of the preceding conditions are satisfied.
  - The order of conditions is important because only the first matching branch is executed.

- **Comparison and Logical Operators:**
  - Comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`) are used to evaluate conditions.
  - The logical AND operator (`&&`) requires both conditions to be true, as demonstrated in Exercise 2.
  - The logical OR operator (`||`) requires at least one condition to be true.

- **Nested IF Statements:**
  - A nested `if` statement allows evaluating a condition inside another conditional block.
  - It is useful when a decision depends on multiple levels of conditions.

- **Switch Statements:**
  - The `switch` statement selects between multiple predefined values.
  - Each `case` represents a possible matching value.
  - The `break` statement exits the `switch` block and prevents unintended fall-through.
  - The `default` statement executes when no matching case is found.

