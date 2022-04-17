// Problem : Concatenation 
// Algorithm :
// Step 1: K <- LBA
// Step 2: Repeat step 3 while k<UBA
// Step 3: c[k] = arrayA[k], k <- k+1
// Step 4: l <- LBB 
// Step 5: Repeat step 6 while l<UBB
// step 6: c[k] = arrayB[l], k <- k+1, l <- l+1
// Step 7: Stop 

#include<stdio.h>
#define MAX 10
int arrayC[2 * MAX],arrayA[MAX], arrayB[MAX];
int * concatenation(int * arrayA, int * arrayB, int * uba, int *ubb){
    int k,l;
    for( k=0; k<(*uba); k++){
        arrayC[k] = arrayA[k];
    }
    for( l=0; l<(*ubb); l++){
        arrayC[k]=arrayB[l];
        k++;
    }
    return arrayC;

}
void traverse(int * array, int ub){
    for(int i=0 ; i<(ub); i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int na, nb, *uba, *ubb;
    printf("Enter number of elemets in first array : ");
    scanf("%d", &na);
    uba = &na;
    printf("Enter elements of first array : ");
    for(int i=0; i<na; i++){
        scanf("%d",&arrayA[i]);
    }
    printf("Enter number of elemets in second array : ");
    scanf("%d", &nb);
    ubb = &nb;
    printf("Enter elements of second array : ");
    for(int i=0; i<nb; i++){
        scanf("%d",&arrayB[i]);
    }
    printf("Elements of first array : ");
    traverse(arrayA,na);
    printf("Elements of second array : ");
    traverse(arrayB,nb);
    printf("Array after concatenation : ");
    traverse((concatenation(arrayA,arrayB,uba,ubb)),(na+nb));
    return 0;
}


