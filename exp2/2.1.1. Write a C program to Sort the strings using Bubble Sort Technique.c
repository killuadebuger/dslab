/*Write a program to sort the given strings using bubble sort technique.

At the time of execution, the program should print the message on the console as:
Enter value of n : 
For example, if the user gives the input as:
Enter value of n : 3
Next, the program should print the messages one by one on the console as:
Enter string for a[0] : 
Enter string for a[1] : 
Enter string for a[2] : 
if the user gives the input as:
Enter string for a[0] : CodeTantra
Enter string for a[1] : Tech
Enter string for a[2] : Solutions
then the program should print the result as:
Before sorting the strings in the array are
String at a[0] = CodeTantra
String at a[1] = Tech
String at a[2] = Solutions
After sorting the strings in the array are
String at a[0] = CodeTantra
String at a[1] = Solutions
String at a[2] = Tech
Fill in the missing code so that it produces the desired result.

Sample Test Cases
Test case 1
Enter·value·of·n·:·3	
Enter·string·for·a[0]·:·CodeTantra	
Enter·string·for·a[1]·:·Tech	
Enter·string·for·a[2]·:·Solutions	
Before·sorting·the·strings·in·the·array·are⏎	
String·at·a[0]·=·CodeTantra⏎	
String·at·a[1]·=·Tech⏎	
String·at·a[2]·=·Solutions⏎	
After·sorting·the·strings·in·the·array·are⏎	
String·at·a[0]·=·CodeTantra⏎	
String·at·a[1]·=·Solutions⏎	
String·at·a[2]·=·Tech⏎*/

//code
#include<stdio.h>
#include<string.h>
void main() {
	char a[20][20];
	int i, n, j;
	char temp[20];
	printf("Enter value of n : ");
	scanf("%d", &n);
	
    for(i = 0; i < n; i++) {
        printf("Enter string for a[%d] : ", i);
        scanf("%s", a[i]);
    }
	
	printf("Before sorting the strings in the array are\n");
    for(i = 0; i < n; i++) {
        printf("String at a[%d] = %s\n", i, a[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(strcmp(a[j], a[j+1]) > 0) {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
        }
    }
	printf("After sorting the strings in the array are\n");
	for(i=0;i<n;i++){
		printf("String at a[%d] = %s\n",i,a[i]);
	}
}
