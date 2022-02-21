#include<stdio.h>
#include<conio.h>

// Traversal
void traverse(int array[],int n){
    int i=0;
    while(i<n){
        printf("%d ",array[i]);
        i++;
    }
}

// Insertion Operation
int insertion(int *array,int size,int value, int position,int pointer){
    for(int i=pointer+1;i>=position;i--){
        array[i] = array[i-1];
    }
    array[position-1] = value;
    return value;
}
// Deletion
int deletion(int *array, int size, int position, int pointer){
    int value = array[position-1];
    for(int i=position-1;i<=pointer;i++){
        array[i] = array[i+1]; 
    }
    return value;
}

// Linear search 
int search(int array[], int size, int key){
    for(int i=0;i<=size;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}
// Sort (using bubble sort)
int sort(int *array, int size){
    int t;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<(size-i-1);j++){
            if(array[j]>array[j+1]){
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }  
}

// Updating 
void updating(int *array,int position, int value){
    array[position-1] = value;
}

// Main Function
int main(){
    int n,option,entry;
    printf("Enter the size of array  : ");
    scanf("%d",&n);
    int array[n+1];
    printf("Enter the element of array(enter 0 to end inputs)\n");
    for(int i=0;i<n;i++){
        scanf("%d",&entry);
        if (entry==0){
            array[i]=entry;
            break;
        }
        else{
            array[i]=entry;
        }
        array[i+1]=0;
    }
    fflush(stdin);
    // to find the index of zeroth value
    int pointer=0;
    while (array[pointer]!=0 && pointer<=n+1){
        pointer++;
    }
    printf("%d\n",pointer);
    int size = sizeof(array)/sizeof(array[0]);
    while(1){
        printf("\nOperation can be performed : \n");
        printf("1. Insertion\n2. Deletion\n3. Search\n4. Sort\n5. Traversing\n6. Update a value\n0. Exit\n");
        printf("\nChose operation(1-7) : ");
        scanf("%d",&option);
        switch(option){
            case 1:
                traverse(array,pointer);
                if (pointer>n){
                    printf("\nOverflow occurred\n");
                }
                else{
                    int value,position,positionChoice;
                    printf("\nInsertion\n");
                    printf("Enter the value to be insert : ");
                    scanf("%d",&value);
                    printf("Enter the position(1. Last, 0. Enter position) : ");
                    scanf("%d",&positionChoice);
                    if(positionChoice==1){
                        position = pointer+1;
                    }
                    else{
                        printf("Enter position : ");
                        scanf("%d",&position);
                    }
                    insertion(array,pointer+1,value,position,pointer);
                    pointer++;
                    array[pointer] = 0;
                    printf("Array after insertion : ");
                    traverse(array,pointer);
                    printf("\n");
                }
                break;
            case 2:
                traverse(array,pointer);
                printf("\nDeletion\n");
                if(pointer <= 1){
                    printf("\nUnderflow Occurred\n");
                }
                else{
                    printf("\n1. Delete on a position\n2. Delete by value\n3. Delete last value : ");
                    int deleteChoice,position,value;
                    scanf("%d",&deleteChoice);
                    if(deleteChoice==1){
                        printf("\nEnter the position : ");
                        scanf("%d",&position);
                        deletion(array,size,position,pointer);
                        pointer--;
                        array[pointer] = 0;
                    }
                    else if(deleteChoice == 2){
                        printf("\nEnter the value : ");
                        scanf("%d",&value);
                        position = search(array,size,value);
                        if(position==-1){
                            printf("Element not found\n");
                        }else{
                            deletion(array,size,position+1,pointer);
                            pointer--;
                            array[pointer] = 0;
                        }
                    }
                    else if(deleteChoice == 3){
                        printf("\nDeleting last element\n");
                        position = pointer;
                        deletion(array,size,position,pointer);
                        pointer--;
                        array[pointer] = 0;
                    }
                    else{
                        printf("Wrong choice\n");
                    }
                    printf("\nAfter deletion : ");
                    traverse(array,pointer);
                }
                printf("\n");
                break;
            case 3:
                traverse(array,pointer);
                printf("\nSearch\n");
                printf("Enter the element to be search : ");
                int key,position;
                scanf("%d",&key);
                position = search(array,size,key);
                if(position == -1){
                    printf("\nElement not found\n");
                }
                else{
                    printf("%d found at %d",key,position+1);
                }
                break;
            case 4:
                printf("\nsort\n");
                printf("Before sorting : ");
                traverse(array,pointer);
                printf("\nAfter sorting : ");
                sort(array,pointer);
                traverse(array,pointer);
                printf("\n");
                break;
            case 5:
                printf("Traversing\n");
                printf("Elemnet present in array : ");
                traverse(array,pointer);
                printf("\n");
                break;
            case 6:
                printf("Updating\n");
                int value,choice;
                printf("Enter updated value : ");
                scanf("%d",&value);
                printf("1. Update value at position\n2. Update by value\n");
                scanf("%d",&choice);
                if (choice==1){
                    printf("Enter position : ");
                    scanf("%d",&position);
                    updating(array,position,value);
                }
                else if(choice==2){
                    printf("Enter value to be changed  : ");
                    int key;
                    scanf("%d",&key);
                    position = search(array,pointer,key);
                    if(position == -1){
                        printf("Key no found in array\n");
                    }
                    else{
                        updating(array,position+1,value);
                    }
                }else{
                    printf("Invalid value\n");
                }
                traverse(array,pointer);
                break;
            case 0:
                return 0;
            default:
                printf("Invalid option\n");
                break;
        }
    }
    return 0;  
}