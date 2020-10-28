import java.util.Scanner;
public class BMI
{
  public static void main (String args[])
  {
    Scanner sc = new Scanner (System.in);
      System.out.println ("Press 1 for weight in Kilograms(kg)");
      System.out.println ("Press 2 for weight in Pounds(lbs)");
      System.out.println ("Enter your Choice");
    int n = sc.nextInt ();
    double weight = 0, height = 0;
    switch (n)
      {
      case 1:
	{
	  System.out.println ("Input weight in Kilogram: ");
	  weight = sc.nextDouble ();
	  break;
	}
	case 2:
	{
	  System.out.println ("Input weight in Pounds: ");
	  weight = sc.nextDouble ();
	  weight = weight * 0.453592;
	  break;
	}
      default:
	System.out.println ("Invalid Input");
	break;
      }
    System.out.println ("Press 1 for height in Meters(m)");
    System.out.println ("Press 2 for height in CentiMeters(cms)");
    System.out.println ("Press 3 for height in Foots(foot)");
    System.out.println ("Press 4 for height in Inches(inches)");
    System.out.println ("Press 5 for height in Foots & Inches(foot&inches)");
    System.out.println ("Enter your Choice");
    n = sc.nextInt ();
    switch (n)
      {
      case 1:
	{
	  System.out.println ("Input height in meters: ");
	  height = sc.nextDouble ();
	  break;
	}
      case 2:
	{
	  System.out.println ("Input height in centimeters: ");
	  height = sc.nextDouble ();
	  height = height / 100;
	  break;
	}
      case 3:
	{
	  System.out.println ("Input height in foots: ");
	  height = sc.nextDouble ();
	  height = height * 0.3048;
	  break;
	}
      case 4:
	{
	  System.out.println ("Input height in inches: ");
	  height = sc.nextDouble ();
	  height = height * 0.0254;
	  break;
	}
      case 5:
	{
	  System.out.println ("Input height in foots: ");
	  height = sc.nextDouble ();
	  height = height * 0.3048;
	  System.out.println ("Input height in inches: ");
	  int i = sc.nextInt ();
	  height = height + i * 0.0254;
	  break;
	}
      default:
	System.out.println ("Invalid Input");
	break;
      }
    double BMI = weight / (height * height);
    System.out.println ("\nThe Body Mass Index (BMI) is " + BMI + " kg/m2");
    if (BMI < 18.5)
      System.out.println ("Underweigth");
    else if (BMI < 24.9)
      System.out.println ("Normal Weight");
    else if (BMI < 29.5)
      System.out.println ("Pre-Obesity");
    else if (BMI < 34.5)
      System.out.println ("Obesity Class I");
    else if(BMI<39.5)
        System.out.println("Obesity Class II");
    else
        System.out.println("Obesity Class III");
  }
}
