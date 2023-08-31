import java.util.*;
class Customer{
  public static void main(String args[]){
    String name;int age;
    long mobile_num;String gender;
    Scanner  sc = new Scanner(System.in);
    System.out.println("Please enter  your name :");
    name = sc.nextLine();
    System.out.println("Please enter your mobile number :");
    mobile_num = sc.nextLong();
    System.out.println("Please enter your gender :");
    gender = sc.next();
    System.out.println("Please enter your age :");
    age = sc.nextInt();
    System.out.println("=============================================");
    System.out.println("            Customer Information");
    System.out.println("=============================================");

    System.out.println("Name : "+name);
    System.out.println("Age : "+age);
    System.out.println("Mobile Number : "+mobile_num);
    System.out.println("Gender : "+gender);

  }


}