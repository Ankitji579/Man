import java.util.*;
public class Main{
    public static void main(String[] args){
        System.out.println("Enter the radius of circle:");
        double pi = 3.14;
        double rad;
        Scanner sc = new Scanner(System.in);
        rad = sc.nextDouble();
        if (rad ==0){
            System.out.println("Not valid");
        }
        else if (rad <0){
            System.out.println("Side cannot be negative");
        }
        else {
            System.out.println("Area of circle:\t" +(pi*rad*rad)+"cm");
            System.out.println("Perimeter of the circle is:" +(2*pi*rad)+"cm");
        }
    }
}

