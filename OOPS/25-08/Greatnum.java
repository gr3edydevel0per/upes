import java.util.*;  

class Greatnum{
   public static void main(String args[]){

    Scanner sc=new Scanner(System.in);  
    System.out.print("Enter first number- ");  
    int a= sc.nextInt();  
    System.out.print("Enter second number- ");  
    int b= sc.nextInt();  
    System.out.print("Enter third number- ");  
    int c= sc.nextInt();  
    if(a>b && a>c){
        System.out.println(a+" is greatest among all");
    } 
    else if (b>c && b> a){
             System.out.println(b+" is greatest among all");
    }
    else{
            System.out.println(c+" is greatest among all");

    }
 System.out.println("Author : Kanav RollNo: R2142220090");

   }




}