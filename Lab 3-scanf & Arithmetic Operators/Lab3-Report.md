<div align="center">

<img src="../assets/alaqsa-logo.png" alt="Al-Aqsa University Logo" width="120">

# Al-Aqsa University
### Faculty of Engineering

**Embedded Systems Lab (ENGS4305)**

**Lab 03 — scanf & Arithmetic Operators**

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
    <td>October 26th, 2026</td>
  </tr>
</table>

</div>

--- 

## Exercise 1 — Personal Information Input & Single-Statement Print

**Task:** Write a C program that reads personal information from the user using `scanf` (including full name, age, date of birth, university number, cumulative GPA, university name, college name, and marital status) and then prints all the details together using only **one** `printf` statement with each attribute on a new line.

**Source Code:** [view ex 1 code](<Code & Excuation/Ex 1.c>)

**Result:**

![Exercise 1 Output](Results%26%20Screenshots/ex1%20output.png)

--- 

## Exercise 2 — Shekel to Dollar Currency Converter

**Task:** Write a C program to convert an amount in Shekels to Dollars based on an exchange rate of $1 \text{ USD} = 3.25 \text{ ILS}$, displaying the resulting dollar amount formatted to 3 decimal places.

**Source Code:** [view ex 2 code](<Code & Excuation/Ex 2.c>)

**Result:**

![Exercise 2 Output](Results%26%20Screenshots/ex2%20output.png)

--- 

## Exercise 3 — Fahrenheit to Celsius Temperature Conversion

**Task:** Write a C program that converts temperature from Fahrenheit to Celsius using the conversion formula:
$$\text{Celsius} = \frac{5 \times (\text{Fahrenheit} - 32)}{9}$$

**Source Code:** [view ex 3 code](<Code & Excuation/Ex 3.c>)

**Result:**

![Exercise 3 Output](Results%26%20Screenshots/ex3%20output.png)

--- 

### Notes 

- **Reading Inputs (`scanf`):**
  - **Address-of Operator (`&`):** Required for primitive variables like `int` and `float` (e.g., `scanf("%d", &age)`) to pass their memory address.
  - **Strings (`char[]`):** Array names act as pointer addresses, so the `&` operator is not needed (e.g., `scanf("%s", dateOfBirth)`).
- **Multi-word Strings Handling (`%[^\n]`):**
  - Standard `%s` stops reading at the first whitespace character.
  - Using ` %[^\n]` allows reading full lines containing spaces (such as full names or university names). The leading space prevents consuming leftover newline characters in the buffer.