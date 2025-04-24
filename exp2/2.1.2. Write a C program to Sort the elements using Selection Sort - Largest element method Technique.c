/*Write a program to sort the given array elements using selection sort largest element method.

Fill in the missing code so that it produces the desired result.

Sample Test Cases
Test case 1
Enter·value·of·n·:·4	
Enter·element·for·a[0]·:·67	
Enter·element·for·a[1]·:·34	
Enter·element·for·a[2]·:·16	
Enter·element·for·a[3]·:·49	
Before·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·67⏎	
Value·of·a[1]·=·34⏎	
Value·of·a[2]·=·16⏎	
Value·of·a[3]·=·49⏎	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·16⏎	
Value·of·a[1]·=·34⏎	
Value·of·a[2]·=·49⏎	
Value·of·a[3]·=·67⏎	
Test case 2
Enter·value·of·n·:·3	
Enter·element·for·a[0]·:·15	
Enter·element·for·a[1]·:·62	
Enter·element·for·a[2]·:·48	
Before·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·15⏎	
Value·of·a[1]·=·62⏎	
Value·of·a[2]·=·48⏎	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·15⏎	
Value·of·a[1]·=·48⏎	
Value·of·a[2]·=·62⏎*/

//code
#include<stdio.h>
void main() {
	int a[20], i, n, j, large, index;
	printf("Enter value of n : ");
	scanf("%d", &n);
	// Write the code to read an array elements
	    for(i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }
	
	printf("Before sorting the elements in the array are\n");
	// Write the code to print the given array elements before sorting
	
	    for(i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    for(i = n - 1; i > 0; i--) {
        large = a[0];
        index = 0;
        
        for(j = 1; j <= i; j++) {
            if(a[j] > large) {
                large = a[j];
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
	// Write the code for selection sort largest element method
	
	printf("After sorting the elements in the array are\n");
	// Write the code to print the given array elements after sorting
	    for(i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
	
}
