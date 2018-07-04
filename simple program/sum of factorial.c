/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s=new Scanner(System.in);
	    int i=1,j=1,fact=1;
	    int sum=0,n;
                n=s.nextInt();	    
	    while(i<=n)
	    {
	    	while(j<=i)
	    	{
	    		fact=fact*i;
	    		j=j+1;
	    	}
	    	sum=sum+fact;
	    	i=i+1;
	    }
	    System.out.print(sum);
	}
}
