/* Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
*/

#include <stdio.h>
int main(){
    int n, k, found=0, index;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements with space::");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to be found: ");
    scanf("%d", &k);
    for(int i=0; i<n; i++){
        if (arr[i]==k)
        {
            index=i;
            found=1;
        }
    }
    if(found==1){
        printf("Element found at index %d.",index);
    }
    else{
        printf("Element not found.");
    }
    return 0;
}
