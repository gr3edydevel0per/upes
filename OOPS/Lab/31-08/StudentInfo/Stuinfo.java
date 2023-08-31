import java.util.*;
class Stuinfo{
  public static void main(String args[]){
    String name;
    int sap;double percent;
    Scanner  sc = new Scanner(System.in);
    System.out.println("Please enter  your name :");
    name = sc.nextLine();
    System.out.println("Please enter your sap id :");
    sap = sc.nextInt();
    System.out.println("Please enter your percentage :");
    percent = sc.nextDouble();
    System.out.println("Name : "+name);
    System.out.println("SAPID : "+sap);
    System.out.println("Percentage : "+percent);

  }


}