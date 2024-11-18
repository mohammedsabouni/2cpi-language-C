#include<stdio.h>
#include<stdlib.h>

int main(){

    int i=0 , n=1 ;
    float somme , moyenne ;
    float *T=calloc(1,sizeof(float));

    if ( T == NULL)
    {
        printf("memoire non allouer \n");
        exit(0);
    }
    else
    {
        
        printf("note 1 : ");
        scanf("%f",T);

        while (*(T+i)>= 0)
        {
            T=realloc(T,(n+1)*sizeof(float));
            i++ ;
            n++;

             if (*T==0)
            {
                printf("memoire non allouer \n");
                exit(0);
            }
            else
            {
                printf("note %d : ",i+1);
                scanf("%f",(T+i));
               
            }
            
        }
        
        for (int j = 0; j < i; j++)
        {
            somme += *(T+j);
        }

        moyenne = somme / i ;

        printf("la moyenne de ces %d notes est : %.2f \n",i,moyenne);

        free(T);
        
        
    }
    
    
    

}