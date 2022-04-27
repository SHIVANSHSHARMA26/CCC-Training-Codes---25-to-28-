import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int s= sc.nextInt();
        int n= sc.nextInt();
        int []a = new int[n];
        int max=0;
        
        for (int i=0;i<n;i++){
            a[i]=sc.nextInt();
            if (a[i]>max)
                max=a[i];
        }
        if(max>=s)
            System.out.println("-1");
        else{
            int d=1,x=s;
            for (int i=0;i<n;)
            {
                if(a[i]<x)
                {
                    x=x-a[i];
                    i++;
                }
                else
                {
                    d++;
                    x=s;
                }
            }
            System.out.println(d);
        }
    }
}
