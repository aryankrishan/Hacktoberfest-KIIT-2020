#include<stdio.h>
#include<stdlib.h>

void add(int** a, int** b, int** c, int r1, int c1) {
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
        
    }
    
}

void Display(int** array, int r1, int c1) {
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf(" %d", *(*array+i)+j);
        }
        printf("\n");
        
    }

    printf("\n");
}

int main() {
    int** a, **b, **c;
    int r1, c1;

    scanf("%d %d", &r1, &c1);

    a=(int**)malloc(r1*sizeof(int*));
    b=(int**)malloc(r1*sizeof(int*));
    c=(int**)malloc(r1*sizeof(int*));

    for (int i = 0; i < r1; i++)
    {
        *(a+i)=(int*)malloc(c1*sizeof(int));
    }

    for (int i = 0; i < r1; i++)
    {
        *(b+i)=(int*)malloc(c1*sizeof(int));
    }

    for (int i = 0; i < r1; i++)
    {
        *(c+i)=(int*)malloc(c1*sizeof(int));
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf(" %d",(*(a+i)+j));
            //scanf(" %d",(*(a+i)+j));
        }
        
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf(" %d",(*(b+i)+j));
        }
        
    }

    add(a, b, c, r1, c1);
    
    Display(a, r1, c1);
    Display(b, r1, c1);
    Display(c, r1, c1);
    
    
}

// Super intresting behaviour found while assigning the value of 2d array in loop by constant
// Change in the above comment ok its all a mess idk how to fix it everythnig is just perfect in this code whats the problem i dint get it at all
// This fiel is a very hot file whats happening find out it really