# C PROGRAMS

## Declaring Variables
### Program
```
#include <stdio.h>

int main() {
	int x,y,z;
	x=10;
	y=20;
	z=15;
	return 0;
}
```
<pre>
  - For creating variables in C, we must specify the data type before the variable name(s)
  - The values can later be entered throughout the code
</pre>

## Print Command

<pre>
  - Statement Printing
</pre>
### Program
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
### Program
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

<pre>
  - Printing with a variable with specified amount of decimal places
</pre>

```
#include <stdio.h>

int main() {
	// declaring integer variables
	int x,y,result;
	printf("Enter any number: ");
	scanf ("%d", &x);
	printf("Enter another number: ");
	scanf ("%d", &y);

	printf("%d diveded by %d gives %.2d", x,y,result);
	return 0;
}
```

## Input Command
### Program
```
#include <stdio.h>

int main() {
// Declaring the variable
	int x;
	printf("Enter your Input");
	scanf("%d", &x );
	return 0;
}
```
Expected Output:
![image](https://github.com/user-attachments/assets/d8e13cef-8f3b-47b9-80a5-e97b4b774f6f)






