import java.util.*;
public class operators 
{
public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(); // original meal price
        int tipPercent = scan.nextInt(); // tip percentage
        int taxPercent = scan.nextInt(); // tax percentage
        scan.close();

        double tip = mealCost * tipPercent / 100;
        double tax = mealCost * taxPercent / 100;

        
        int totalCost = (int) Math.round(mealCost + tip + tax);

        System.out.println(totalCost);
    }

}
