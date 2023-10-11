// 1.WAP TO FIND MEAN AND MEADIAN OF AN ARRAY //

#include <stdio.h>

int main(){
    printf("You are trying to find mean and median of a given array.\n");
    int n;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);

    int arr[n];
     
    printf("Enter your array:\n");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:\n");
    for(int i = 0; i<n; i++){
        printf(" %d \n", arr[i]);
    }
    float sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum+arr[i];
    }
    printf("Your mean is : %f \n",sum/n);

    // NOW FINDING MEDIAN //

    // for finding median, firstly we have to sort the array entered by the user.

    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Your sorted array is:\n");
    for(int i = 0; i<n; i++){
        printf(" %d ", arr[i]);
        
    }

    float median = 0;
    if(n%2 !=0){
        median = arr[n/2];
    }else{
        median = (arr[n/2] +arr[(n/2)-1])/2.0;
    }

    printf("Your median is: %f", median);
}