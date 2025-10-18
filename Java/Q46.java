/*
 Q46- Program to Add Two Matrices Using Multi-dimensional Arrays
 */

import java.util.Scanner;

public class Q46{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        // Input dimensions
        System.out.print("Enter number of rows: ");
        int rows=sc.nextInt();
        System.out.print("Enter number of columns: ");
        int cols=sc.nextInt();

        int[][] a=new int[rows][cols];
        int[][] b=new int[rows][cols];
        int[][] sum=new int[rows][cols]; 

        // Input matrix A
        System.out.println("Enter elements of first matrix:");
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                a[i][j] = sc.nextInt();
            }
        }

        // Input matrix B
        System.out.println("Enter elements of second matrix:");
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                b[i][j] = sc.nextInt();
            }
        }

        // Add the matrices
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                sum[i][j]=a[i][j]+b[i][j];
            }
        }

        // Display the result
        System.out.println("Sum of the two matrices:");
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
