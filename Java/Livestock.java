mport java.util.Scanner; class Report
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
Livestock l=new Livestock(); 
Classificationl c=new Classificationl();
Crop p=new Crop();
ClassificationCrop n=new ClassificationCrop(); l.Input();
System.out.println("\n\n*-*-*-*-*-*-*-*> details of livestock are<*-*-*-*-*-*-*-*\n\n");
l.Output();
c.Input();
System.out.println("\n\n*-*-*-*-*-*-*-*>details of classification of livestock are:<*-*-*-*-*-*-*-*\n\n");
c.Output();
p.Input();
System.out.println("\n\n*-*-*-*-*-*-*-*>Details of crop are:<*-*-*-*-*-*-*-*\n\n");
p.Output();
n.Input();
System.out.println("\n\n*-*-*-*-*-*-*-*>details of classification of crop are:<*-*-*-*-*-*-*-*\n\n");
p.output();
}
}
class Livestock
{ int id_no;
String classificationl;
int total_no_of_livestock;
Scanner s1=new Scanner(System.in);
void Input()
{
System.out.println("enter identification no."); 
id_no=s1.nextInt();
System.out.println("enter classification"); 
classificationl=s1.next(); 
System.out.println("enter no of livestock"); 
total_no_of_livestock=s1.nextInt();
}
void Output()
{
System.out.println("identification number is:"+id_no);
System.out.println("Classifcation of livestock:"+classificationl);
