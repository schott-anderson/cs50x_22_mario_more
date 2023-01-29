#include <cs50.h>
#include <stdio.h>

void createPyramids (int height);

int main(void) 
{

    bool tester = true;

    while (tester)
    {
        int height = get_int("Height: ");

        if (height >= 1 && height<=8)
            {
            createPyramids (height);
            tester = false;
            }
    }
}

void createPyramids (int height){
    int controller = height;

        for(int i = 1; i<height+1; i++){
            for (int c = 0; c <= i; c++)
            {
                for (int l = 0; l < controller; l++)
               {
                if (!c)
                {
                   printf("%s"," ");
                }                
               }
               if (c<i)
               {
                printf("%s", "#");
               } else
               {
                printf("%2s" , " ");
               
               }
            }
            
            for (int j = 0; j < i; j++)
               {
                printf("%s", "#");
               }

            controller -=1;
            printf("\n");
        } 
}