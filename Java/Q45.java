/*
 Q45- Program to Calculate Standard Deviation
 */



import java.util.Scanner;

public class Q45{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number of elements: ");
        int n=sc.nextInt();

        double[] arr=new double[n];
        double sum=0.0;

        System.out.println("Enter elements:");
        for(int i=0; i<n; i++){
            arr[i]=sc.nextDouble();
            sum += arr[i];
        }

        double mean = sum/n;
        double variance = 0.0;

        for(double num : arr){
            variance+=Math.pow(num-mean, 2);
        }

        variance/=n;
        double stdDev = Math.sqrt(variance);

        System.out.println("Standard Deviation = " + stdDev);
        sc.close();
    }
}
