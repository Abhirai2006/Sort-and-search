#include<stdio.h>

int main(){
    int i,j,temp,n,choice,element,found = 0;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the choice you want to perform\n1.Bubble sort\n2.Slection sort\n3.Linear search\n4.Binary search: ");
    scanf("%d", &choice);

    switch (choice){

    case 1:
        //Bubble sort.
        for (i=0; i<n-1; i++){
            for (j=0; j<n-1-i; j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        printf("\nThe sorted elements are: ");
        for (i=0; i<n; i++){
           printf("%d ", arr[i]);
        }

        printf("\n");
        break;

    case 2:
        //Selection sort
        break;

    case 3:
        //Linear search.

        printf("\nEnter the element to search: ");
        scanf("%d", &element);

        for(i=0; i<n; i++){
            if(arr[i]==element){
                printf("Element %d is found at index %d\n",element, i);
                found =1;
            }
        }

        if (found == 0)
            printf("\nElement %d is not found in the array",element);

        break;

    case 4:
        //Binary search
        break;


    }
}
