# C PROGRAMS

## Declaring Variables
```
int x,y,z;
x=10;
y=20;
z=15;
```
<pre>
  - For creating variables in C, we must specify the data type enter the variable name(s)
  - The values can later be entered throughout the code
</pre>

## Input Command
```
include <stdio.h>

int main() {
// Declaring the variable
	int x;
	printf("Enter your Input");
	scanf( %d, &x );
	return 0;
}
```

## Print Command

<pre>
  - Statement Printing
</pre>
```
#include <stdio.h>

int main() {
    printf("hello world \n");
    return 0;
}
```
Expected Output:
![image](https://github.com/user-attachments/assets/4d64e5b7-6734-4609-bf20-00f3a741ce2f)

<pre>
  - Printing with a variable
</pre>
```
#include <stdio.h>

int main() {
    int x;
    x=20;
    printf("This building was built %d years ago", x);
    return 0;
}
```
Expected Output:
![image](https://github.com/user-attachments/assets/2ff0b447-2db9-4698-b1d2-4382947e0e18)





