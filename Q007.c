#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int left=0, right=n-1;
    while(left<right){
        int temp= arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}