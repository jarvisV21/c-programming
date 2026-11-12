#include<stdio.h>

#include<stdlib.h>
int main(){
    int *ptr == (int*)malloc(sizeof(int));
    if(ptr == null){
        printf("memory allocation failed\n");
        return 1;
    }
    {
        for(int i=0;i<5;i++){
            ptr[i] = i+1;
            {
                for (int i = 0; i<5; i++){
                    printf("%d\n",ptr[i]);
                }

        } free(ptr);
        return 0;
    }

    }
}