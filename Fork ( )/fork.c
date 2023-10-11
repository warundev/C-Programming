//Problem Specification : How to get Process ID & Parent Process ID using c language.

#include<stdio.h>

int  main()
{
    int B,C,D,E,F,G,H,I,J;

    B=fork();
    if(B==0)
    {
        printf("B Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());

        D=fork();
        if(D==0)
        {
            printf("D Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());
        }
        else
        {
            F=fork();
            if(F==0)
            {
                printf("F Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());
            }
            else{
                E=fork();
                if (E==0)
                {
                   printf("E Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());

                   H=fork();
                   if(H==0)
                   {
                    printf("H Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());
                   }
                }
                
            }
        }
    }
    else
    {
        printf("A Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());

        C=fork();
        if(C==0)
        {
            printf("C Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());

            G=fork();
            if(G==0)
            {
                printf("G Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());

                J=fork();
                if(J==0)
                {
                    printf("J Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());
                }
                else{
                    I=fork();
                    if(I==0){
                        printf("I Process ID : %d  Parent Process ID : %d\n",getpid(),getppid());
                }
                
            }
        }
    }

    }
    return 0;
}


