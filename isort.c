#include <stdio.h>
#include <string.h>
#define SIZE 50

void pointer_shift(int *arr, int i) {
    int k=1;
    int j;
    for(j=i-1 ;j>0; j--){
    *(arr+k+j) = *(arr+j);
    }

}

void insertion_sort(int *arr,int len){
    int i,j,tmp;
    for(i=1;i<len;i++){
        tmp=*(arr +i);
        j=i-1;
        while(tmp<*(arr +j) && j>=0){
            *(arr +(j+1)) =*(arr +j);
            j--;
        }
         *(arr +(j+1)) =tmp;
    }
    
}
    int main()
    {
        
        int arr[SIZE], temp ,i;
        printf("Please enter 50 numbers to the array\n");
        
         for(i=0;i<SIZE;i++){
             scanf("%d",&temp);
             *(arr+i)=temp;
         }
        
         insertion_sort(arr,SIZE);
         for(i=0;i<SIZE;i++){
             
              if(i==SIZE-1)
               printf("%d\n",*(arr+i));
            else printf("%d,",*(arr+i));
          }
          
         // pointer_shift(arr,0);
    //       for(i=0;i<SIZE;i++){
             
    //           if(i==SIZE-1)
    //            printf("%d\n",*(arr+i));
    //         else printf("%d,",*(arr+i));
          
         
    // }
    }




