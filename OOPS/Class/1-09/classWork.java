import java.util.*;
class Rectangle
{
   int length;
   int breadth;
   int area;

   public void setSides(int l,int b){
    length=l;
    breadth=b;
   }
   void calcArea(){
   area=length*breadth;
   System.out.println("Area of rectangle is "+area);
   }


}
class classWork {
    public static void main(String args[]){
        int l,b;
        Scanner sc = new Scanner(System.in);
        Rectangle rect1 = new Rectangle();
        System.out.println("Please enter length if the rectangle");
        l = sc.nextInt();
        System.out.println("Please enter breadth if the rectangle");
        b= sc.nextInt();
       rect1.setSides(l,b);
       rect1.calcArea();
    }
    
}
