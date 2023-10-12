/*
1)Write a program in C to create process with a child process and do each of the following operationas:
    
        a) Read three subjects marks from the user in the parent process and send term to child to proses over a pipe.
        
        b) Child process Should find the grade based on the criteria given in table 1 and pass it to the parent process over a pipe.
        
        c) Finally parent process displays the grade.
        Each process Should print their Process ID's, sleep and wakeup states.
        
            Table 1: Grading

        Average                    Grade
        100 >= Average > 74          A
        74  >= Average > 60          B
        60  >= Average > 45          C
        45  >= Average > 34          D
        34  >= Average > 0           E
        
*/

#include<stdio.h>
int main()
{
    int fd1[2],fd2[2];
    int rv1,rv2;

    rv1=pipe(fd1);
    if(rv1<0)
    {
        printf("pipe1 create failed");
        return -1;
    }

    rv2=pipe(fd2);
    if(rv2<0)
    {
        printf("pipe2 create failed");
        return -1;
    }

    int id=fork();
    if(id<0)
    {
        printf("child create failed");
        return -1;
    }

    if(id == 0)//child
    {
        int m1,m2,m3;
        //read pipe1
        read(fd1[0],&m1,sizeof(m1));
        read(fd1[0],&m2,sizeof(m2));
        read(fd1[0],&m3,sizeof(m3));

          // Print child process wakeup state
        printf("\n----Child Process (PID: %d) - Woken up----\n", getpid());

        int sum=m1 + m2+ m3;
        int avg=sum/3;
        //calculate grade

        char grade;
        if(avg >= 75)
        {
            grade='A';
        }else if (avg >= 61)
        {
            grade='B';
        }else if (avg >= 46)
        {
           grade='C';
        }else if (avg >= 35)
        {
            grade='D';
        }else
        {
            grade='F';
        }
         // Send the grade to the parent process
        write(fd2[1],&grade,sizeof(grade));

        // Print child process wakeup state
        printf("Child Process (PID: %d) - Average: %d, Grade: %c\n", getpid(), avg, grade);

        

    }
    else
    {//parent
    int m1,m2,m3;
    char grade;

        // Print parent process ID
        printf("-----Parent Process (PID: %d) - Created-----\n", getpid());

        printf("Enter the marks for OOP : ");
        scanf("%d",&m1,sizeof(m1));

        printf("\nEnter the marks for OS : ");
        scanf("%d", &m2,sizeof(m2));

        printf("\nEnter the marks for IT Law : ");
        scanf("%d", &m3,sizeof(m3));

        //write pipe1
        write(fd1[1],&m1,sizeof(m1));
        write(fd1[1],&m2,sizeof(m2));
        write(fd1[1],&m3,sizeof(m3));

         // Print parent process wakeup state
        printf("\n----Parent Process (PID: %d) - Woken up----\n", getpid());

        printf("Parent Process (PID: %d) - Sent marks to child\n", getpid());

        //read pipe2
        read(fd2[0],&grade,sizeof(grade));
        printf("\n\nParent Process (PID: %d) - Received Grade: %c\n", getpid(), grade);
        printf("\nYour Grade is : %c",grade,sizeof(grade));
    }
    return 0;
}