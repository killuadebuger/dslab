/*Write a program to search a key element in the given array of elements using binary search.

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
Enter key element : 56
then the program should print the result as:
After sorting the elements in the array are
Value of a[0] = 33
Value of a[1] = 56
Value of a[2] = 89
The key element 56 is found at the position 1
Similarly if the key element is given as 25 for the above one dimensional array elements then the program should print the output as "The Key element 25 is not found in the array".

Fill in the missing code so that it produces the desired result.

Sample Test Cases
Test case 1
Enter·value·of·n·:·3	
Enter·element·for·a[0]·:·25	
Enter·element·for·a[1]·:·15	
Enter·element·for·a[2]·:·35	
Enter·key·element·:·45	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·15⏎	
Value·of·a[1]·=·25⏎	
Value·of·a[2]·=·35⏎	
The·Key·element·45·is·not·found·in·the·array⏎	
Test case 2
Enter·value·of·n·:·4	
Enter·element·for·a[0]·:·5	
Enter·element·for·a[1]·:·3	
Enter·element·for·a[2]·:·4	
Enter·element·for·a[3]·:·2	
Enter·key·element·:·4	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·2⏎	
Value·of·a[1]·=·3⏎	
Value·of·a[2]·=·4⏎	
Value·of·a[3]·=·5⏎	
The·key·element·4·is·found·at·the·position·2⏎	
Test case 3
Enter·value·of·n·:·3	
Enter·element·for·a[0]·:·20	
Enter·element·for·a[1]·:·12	
Enter·element·for·a[2]·:·40	
Enter·key·element·:·12	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·12⏎	
Value·of·a[1]·=·20⏎	
Value·of·a[2]·=·40⏎	
The·key·element·12·is·found·at·the·position·0⏎*/

//code
#include<stdio.h>
void main() {
	int a[20], i, j, n, key, flag = 0, low, high, mid, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);

	for(i = 0;i<n;i++){
		printf("Enter element for a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("Enter key element : ");
	scanf("%d", &key);

	for(i = 0; i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("After sorting the elements in the array are\n");

	for(i=0;i<n;i++){
		printf("Value of a[%d] = %d\n",i,a[i]);
	}
	
	low = 0;
	high = n-1;
	
	// Write the code to search an element using  binary search process
	while (low<=high){
		mid=(low+high)/2;
	if (a[mid]== key) { 
		printf("The key element %d is found at the position %d\n",key,mid); 
		flag = 1;
		break;
	}else if (a[mid]<key){
		low = mid+1;
	}else{
		high = mid - 1;
	}
	}
	if(flag == 0){
		printf("The Key element %d is not found in the array\n",key);
	}
}
