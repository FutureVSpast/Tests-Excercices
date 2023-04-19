#include <stdio.h>
#include <unistd.h>

 int main()
 {
     int pid = fork();

     if (pid == 0)
     {
         printf("PID process.\n");
     }
     else if (pid > 0)
     {
         printf ("PPID process .\n");
     }

     else {

         printf("error .\n");
     }
     return 0;

 }
