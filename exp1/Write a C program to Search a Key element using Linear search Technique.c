/*Write a program to search a key element with in the given array of elements using linear search process.

At the time of execution, the program should print the message on the console as:
Enter value of n : 
For example, if the user gives the input as:
Enter value of n : 3
Next, the program should print the messages one by one on the console as:
Enter element for a[0] : 
Enter element for a[1] : 
Enter element for a[2] : 
if the user gives the input as:
Enter element for a[0] : 89
Enter element for a[1] : 33
Enter element for a[2] : 56
Next, the program should print the message on the console as:
Enter key element : 
if the user gives the input as:

Test case 1
Enter·value·of·n·:·4	
Enter·element·for·a[0]·:·1	
Enter·element·for·a[1]·:·22	
Enter·element·for·a[2]·:·33	
Enter·element·for·a[3]·:·44	
Enter·key·element·:·22	
The·key·element·22·is·found·at·the·position·1⏎	
Test case 2
Enter·value·of·n·:·6	
Enter·element·for·a[0]·:·2	
Enter·element·for·a[1]·:·4	
Enter·element·for·a[2]·:·8	
Enter·element·for·a[3]·:·1	
Enter·element·for·a[4]·:·3	
Enter·element·for·a[5]·:·5	
Enter·key·element·:·6	
The·key·element·6·is·not·found·in·the·array⏎
*/

//code
#include<stdio.h>
void main() {
	int a[20], i, n, key, flag = 0, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter key element : ");
	scanf("%d", &key);
	// Write code for linear search process
	for(i=0;i<n;i++){
		if (a[i] == key){
			flag = 1;
			pos = i;
			break;
		}
	}
	
	if (flag == 1) {
		printf("The key element %d is found at the position %d\n", key,pos);
	} else {
		printf("The key element %d is not found in the array\n", key);
	}
}
