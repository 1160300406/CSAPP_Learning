#include "csapp.h"
#include "string.h"
void initjobs()
{
}

void addjob(int pid)
{
}

void deletejob(int pid)
{
}
int g_iIntTimes=0;
/* $begin procmask1 */
void handler(int sig)
{
	 char str[300];
	 sprintf(str,"\n receive signal %d",sig);
	 Sio_puts(str);	
     if( sig == SIGINT && ++g_iIntTimes == 2)
     {
          sleep(1);
          wait(NULL);
          exit(0);
      }
}

int main(int argc, char **argv)
{
    int pid;
	char str[300];
    sigset_t mask_all, prev_all;
    int i;
	
    for(i=1;i<=32;i++)//
    { //if(i!=2 )
		printf("%d  \n",i);
	   if( i!=9 && i!=19 && i!=32&& i!=33&& i!=17&& i!=18)
		   Signal(i, handler);
    }
	Sio_puts("\n forking....\n");
    if(fork()==0)
    {
        pid = getppid();
		printf("\nppid=%d  \n",pid);
       for( i=1;i<=64;i++)
       { 
        if( i!=9 && i!=19 && i!=32&& i!=33)
		{
			sprintf(str,"\n send signal %d",i);
			Sio_puts(str);	
			kill(pid,i);
			sleep(1);
		}
	   }
       exit(1);       
    }
    int r;
    while (1) {
        pause();
        sprintf(str,"\n main continue, after pause()");
        Sio_puts(str);
    }
    exit(0);
}
/* $end procmask1 */
