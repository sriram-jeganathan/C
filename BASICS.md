# Basics Of C Programming

---

## Data Types
In order to use a variable, the data type of the variable must be specified along with it's name.
To pass the variable in a printf statement, a format specifier must be used.
There are 4 basic data types along with it's format specifier
1. char - %c or %s 
2. int - %d
3. float - %f
4. double - %lf

**NOTE:** 
there is no string data type in C

---

## Arithmetic Operators
The common operators used in C to carry out mathematical calculations are ( with operator precedence )
| Operators | 
|:---------:|
| *         |
| /         |
| %         |
| +         |
| -         |
| ++        |
| --        |

---

## Logical Operators
These operators are used to specify the logic between variables and operators, with multiple conditions

- `&&` - AND:  Returns true only when both values are true  
- `||` - OR:  Returns true if any one value is true  
- `!` - NOT:  Returns true if false and false if true

---

## Bitwise Operators
- '&' - AND:  Returns true only when both bits are true
- '|' - OR:  Returns true if any one bit is true  
- '^' - XOR:  Returns 1 if both bits are different
- '~' - NOT:  Returns true if false and false if true
- '<<' - LEFT SHIFT:  left shifts bits of 1st operand and 2nd operand decides number of places to shift
- '>>' - RIGHT SHIFT:  right shifts bits of 1st operand and 2nd operand decides number of places to shift

**NOTE:** 
* left shift formula: a x ( 2^n )
* right shift formula: a / ( 2^n )
this is only for checking and calculating purpose

---

## Printing Statements
A printf statement is used to return a formatted output to the screen
```
#include <stdio.h>

int main() {
  printf("This is a C Programming");
  return 0;
}

```
To pass a variable through the printf statement, we must use the specified variable's format specifier and the variable name.
```
#include <stdio.h>

int main() {
  int x = 81;
  printf( "%d", x );
  return 0;
}

```
There are special characters, each serving a different purpose.
Some basic special characters are /n, /t and more . . .


---

## If Statements
An if statement is a conditional statement used in programming to execute a block of code only if a specified condition is true.

For Ex:
```
#include <stdio.h>

int main() {
  // Declaring the variable with its value
  int x = 10;

  // to check if the number is even or odd
  if ( x % 2 == 0 ) {
    printf( "%d is even!/n ", x );
  } else {
    printf( "%d is odd!/n ", x );
  }

  return 0;
}
```
For the above Program, the output will be "10 is even! ".

We can also use elseif statements to add more conditions. Only when the first if condition fails, the elseif statement run.

Syntax:
```
#include <stdio.h>

int main() {

  if ( condition ) {
    statement/s
  } elseif ( condition ) {
    statement/s
  } else {
    statement/s
  }

  return 0;
}
```

---

## For Loop
A for loop is used when a block of statements needs to be iterated a known and fixed number of times.


Syntax:
```
#include <stdio.h>

int main() {

  for ( initialization; condition; update ){
    block of statement
  }
  return 0;
}
```
For Ex:
```
// This program prints the first 10 natural numbers using for loop
#include <stdio.h>

int main() {

  for ( int i = 1; i <= 10; i++ ){
    printf("%d/t", i);
  }
  return 0;
}
```
Output: 
1  2  3  4  5  6  7  8  9  10

---






















