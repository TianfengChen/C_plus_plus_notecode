#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int add(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}

void main(){
    //define array, pointer
    int array[9]; 
    //should be fixed number
    const int num = 3;
    int array_b[num] = {1,2,3,};//correct
    //2 dimension array
    int array_c[4][5];
    int (*q)[5]; //array pointer
    q = array_c; //correct
    int *p[4]; //pointer array
    int b[2] = {1,2};
    int c[3] = {3,4,5};
    p[0] = b;
    p[1] = c;
    
    int *m = array_c[0];
    int **n = &m;
    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            printf("%d",*(m+i*5+j));
        }
    }

    //allocate memory for array
    int* array_d = (int*)malloc(10*sizeof(int));
    array_d = (int*)realloc(array_d,num*sizeof(int));
    int* p = array;
    free(array_d);
    array_d = NULL;

    //function pointer
    int (*fp)(int,int);
    fp = add;
    int (*fp2)(int,int) = (int(*)(int,int))&add;//same
    int k = fp(1,2);
    fp = sub;
    k = fp(2,1);

    //void* void pointer: can point to any type's data
    int a = 10;
    void* ptr = &a;
    printf("%d",*(int*)ptr);//cast



    

}





//use pointer and array length to pass the array to function
int add_all_num_in_array(int* arr,int arr_size){
    int sum;
    for (int i=0;i<arr_size;i++){
        sum+=arr[i];
    }
    return sum;
}