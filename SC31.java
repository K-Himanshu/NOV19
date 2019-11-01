import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static int binaryToInteger(String binary)
	{
		char[] numbers = binary.toCharArray();
        	int result = 0;
        	for(int i=numbers.length - 1; i>=0; i--)
            		if(numbers[i]=='1')
                		result += Math.pow(2, (numbers.length-i - 1));
        	return result;
    	}
    	public static int intToWepNum(int P)
    	{
        	String binary=Integer.toBinaryString(P);
        	char[] numbers = binary.toCharArray();
        	int WepNum = 0;
        	for(int i=numbers.length - 1; i>=0; i--)
            		if(numbers[i]=='1')
                		WepNum++;
        	return WepNum;
    	}
  	public static void main (String[] args) throws java.lang.Exception
    	{
        	Scanner s=new Scanner(System.in);
        	int T=s.nextInt();
        	while(T-->0)
        	{
            		int N=s.nextInt(),max=0;
            		int rounds=N-1;
            		String[] S=new String[N];
            		int[] P=new int[N];
            		for(int i=0;i<N;i++)
            		{
                		S[i]=s.next();
                		P[i]=binaryToInteger(S[i]);
            		}
            		for(int i=1;i<N;i++)
            			P[0]=P[0]^P[i];
            		max=intToWepNum(P[0]);
            		System.out.println(""+max);
          	}
	}
}
