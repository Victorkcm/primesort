#include <stdio.h>
#include <stdlib.h>
 

int primo (int x)
{
int n=x,i, div=0;
if (n==2)
{
return 1;
}

if (n==0 || n==1)
{
return 2;
} 

else
{
	i=1;
	while (i<n+1)
	{
	if (n%i==0)
		{
		div++;
		}
	if (div>2)
		{
		return 2;
		}
	i++;	
	}

}
}

int main()
{	
  int v,j,f;
  FILE *pipe;
  
  pipe=popen("sort -n -r", "w");

  for (j=0;;j++) {

    scanf ("%d", &v);

    if(v<0)
      break;
  
    else
	{
      	f=primo(v);	
      	if(f==2)
		{
        	fprintf (pipe, "%d\n", v);
      		}
    	}
  }	

  pclose (pipe);

  return 0;
}
