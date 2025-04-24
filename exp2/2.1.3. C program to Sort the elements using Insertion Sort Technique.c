/*Write a program to sort the given elements using insertion sort technique.



Fill in the missing code so that it produces the desired result.


Sample Test Cases
Test case 1
Enter·value·of·n·:·5	
Enter·element·for·a[0]·:·6	
Enter·element·for·a[1]·:·9	
Enter·element·for·a[2]·:·2	
Enter·element·for·a[3]·:·5	
Enter·element·for·a[4]·:·1	
Before·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·6⏎	
Value·of·a[1]·=·9⏎	
Value·of·a[2]·=·2⏎	
Value·of·a[3]·=·5⏎	
Value·of·a[4]·=·1⏎	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·1⏎	
Value·of·a[1]·=·2⏎	
Value·of·a[2]·=·5⏎	
Value·of·a[3]·=·6⏎	
Value·of·a[4]·=·9⏎	
Test case 2
Enter·value·of·n·:·3	
Enter·element·for·a[0]·:·5	
Enter·element·for·a[1]·:·9	
Enter·element·for·a[2]·:·2	
Before·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·5⏎	
Value·of·a[1]·=·9⏎	
Value·of·a[2]·=·2⏎	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·2⏎	
Value·of·a[1]·=·5⏎	
Value·of·a[2]·=·9⏎	
Test case 3
Enter·value·of·n·:·6	
Enter·element·for·a[0]·:·5	
Enter·element·for·a[1]·:·4	
Enter·element·for·a[2]·:·6	
Enter·element·for·a[3]·:·2	
Enter·element·for·a[4]·:·3	
Enter·element·for·a[5]·:·41	
Before·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·5⏎	
Value·of·a[1]·=·4⏎	
Value·of·a[2]·=·6⏎	
Value·of·a[3]·=·2⏎	
Value·of·a[4]·=·3⏎	
Value·of·a[5]·=·41⏎	
After·sorting·the·elements·in·the·array·are⏎	
Value·of·a[0]·=·2⏎	
Value·of·a[1]·=·3⏎	
Value·of·a[2]·=·4⏎	
Value·of·a[3]·=·5⏎	
Value·of·a[4]·=·6⏎	
Value·of·a[5]·=·41⏎	

*/

//code
#include<stdio.h>
void main() {
	int a[20], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	    for(i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Before sorting the elements in the array are\n");
    for(i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
    
    // Insertion Sort Algorithm
    for(i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    
    printf("After sorting the elements in the array are\n");
    for(i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, a[i]);
    }
}
