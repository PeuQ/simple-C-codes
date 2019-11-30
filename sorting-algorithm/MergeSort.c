#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(int array[],int start,int middle,int end){
    int order[end];
    int i = 0;
    int j = middle + 1;
    int k = 0;
    
    while(i<(middle+1) && j<(end+1))
    {
        if (array[i] > array[j])
        {
            order[k] = array[j];
            j++;

        }else{
            order[k] = array[i];
            i++;
        }
        k++;
    }

    for(int l = 0;l<end;l++)
    {
        array[l] = order[l];
    }
}

void mergeSort(int array[],int start,int end){
    if(start<end){
        int middle = start + (end-start)/2;
        mergeSort(array,start,middle);
        mergeSort(array,middle+1,end);
        merge(array,start,middle,end);
    }
}

int main(){
    int array[] = {5,3,6,1,4,10};
    int tamanho = sizeof(array)/sizeof(int);
    
    mergeSort(array,0,tamanho);

    for(int i = 0;i<tamanho;i++){
        printf("%d ",array[i]);
    }
    return 0;
}