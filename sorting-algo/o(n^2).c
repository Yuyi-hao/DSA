#include <stdio.h>
#define ARRAY_LEN(xs) (sizeof(xs) / sizeof((xs)[0]))

void xchg(int *num1, int *num2){
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void print_arr(int *arr, int size){
  for(int i=0; i < size; ++i){
    printf("%d ",arr[i]);
  }
  printf("\n");
}


void bubbleSort(int *arr, int size){
  for(int i=0; i< size; ++i){
    for(int j=0; j < size-(i+1); ++j){
      if(arr[j+1] < arr[j])
        xchg(&arr[j+1], &arr[j]);
    }
  }
}

void selectionSort(int *arr, int size){
  int smallest = 0;
  for(int i=0; i < size-1; ++i){
    smallest = i+1;
    for(int j = i+1; j<size; ++j){
      if(arr[smallest] > arr[j]){
        smallest = j;
      }
    }
    if(arr[i] > arr[smallest]){
      xchg(&arr[i], &arr[smallest]);
    }
  }
}

void insertionSort(int *arr, int size){
  int temp, j;
  for(int i=1; i<size; i++){
    temp = arr[i];
    print_arr(arr, size);
    j = i-1;
    while(j >= 0 && arr[j] > temp){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp; 
  }
  
}

int main(){
  int n;
  printf("Enter Number of elements in array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter values separated by space: ");
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }
  int test[] = {1, 2};
  print_arr(test, 2);
  xchg(&test[0], &test[1]);
  print_arr(test, 2);
  
  printf("\nEntered values: ");
  print_arr(arr, n);
  printf("\n");
  insertionSort(arr, n);
  print_arr(arr, n);
  return 0;
}
