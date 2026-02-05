#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter the elements in array1 :");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements in array2 :");
    for( int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    int arr3[n1+n2];
    for(int i=0; i<n1; i++){
        arr3[i]=arr[i];
    }
    for(int i=n1; i<(n1+n2); i++){
        arr3[i]=arr2[i-n1];
    }
    for(int i=0; i<(n1+n2); i++){
        for(int j=i; j<(n1+n2); j++){
            if(arr3[j]<arr3[i]){
                int temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for( int i=0; i<(n1+n2); i++){
        printf("%d ", arr3[i]);
    }


    return 0;
}