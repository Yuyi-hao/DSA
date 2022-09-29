// Problem : Merge to sorted list into one 
// Algorithm :
// Step 1: l<- lba, j <- lbb, k=0
// Step 2: Repeat step 3 and 4 while l<uba and j<ubb
// Step 3: if A[l]<B[j] then  C[k]=A[l] and l <- l+1
//         else C[k] = B[j] and j <- j+1
// Step 4: k <- k+1
// Step 5: Repeat step 6 while l<uba 
// Step 6: C[k] = A[l], l <- l+1, k <- k+1
// Step 7: Repeat step 8 while j<uba 
// Step 8: C[k] = B[j], j <- j+1, k <- k+1
// Step 9: Stop

#include<stdio.h>
#define MAX 10 
int arrayC[2*MAX];
int * merge(int  *arrayA, int *arrayB, int na, int nb){
    int l=0,j=0,k=0;
    while(l<na && j<nb){
        if(arrayA[l] < arrayB[j]){
            arrayC[k] = arrayA[l];
            l++;
        }
        else{
            arrayC[k] = arrayB[j];
            j++;
        }
        k++;
    }
    while(l<na){
        arrayC[k] = arrayA[l];
        l++;
        k++;
    }
    while(j<nb){
        arrayC[k] = arrayB[j];
        j++;
        k++;
    }
    return arrayC;
}
void traverse(int array[], int a){
    for(int i=0; i<a ; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int na,nb,arrayA[MAX],arrayB[MAX];
    printf("Enter number of elements in first sorted array : ");
    scanf("%d",&na);
    printf("Enter number of elements in second sorted array : ");
    scanf("%d",&nb);
    printf("Enter the elements of first array saperated by one space  : ");
    for(int i=0; i<na; i++){
        scanf("%d",&arrayA[i]);
    }
    printf("Enter the elements of second array saperated by one space  : ");
    for(int i=0; i<nb; i++){
        scanf("%d",&arrayB[i]);
    }
    printf("Elements in first array : ");
    traverse(arrayA,na);
    printf("Elements in second array : ");
    traverse(arrayB,nb);
    printf("Elements in merged array : ");
    traverse(merge(arrayA,arrayB,na,nb),(na+nb));
    return 0;
}

