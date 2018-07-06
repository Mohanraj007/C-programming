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
		int i,n,n1,n2;
		int a[]=new int[30];
		n=s.nextInt();
		n1=s.nextInt();
		n2=s.nextInt();
		for(i!=0;i<n;i++)
		{
			a[i]=n%10;
			i++;
			n=n/10;
		}
		for(i!=0;i<n1;i++)
		{
			a[i]=n1%10;
			i++;
			n1=n1/10;
		}
		for(i!=0;i<n2;i++)
		{
			a[i]=n1%10;
			i++;
			n2=n2/10;
		}
		System.out.print(a[i]);
		
	}
}


/*Generating pin numbers from the given numbers 

Input1:123
Input2:456
Input3:789

The output should be the maximum value of all the digits in the given number followed by the minimum digit of the place value

Output: 9123*/


