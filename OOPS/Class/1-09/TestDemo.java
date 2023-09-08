class Demo{
   int rollno;
   String name;
   double marks;
}

class TestDemo{
   public static void main(String args[]){
    Demo d1 = new Demo();
    Demo d2 = new Demo();
    d1.rollno= 2;
    d1.name= "Kanav";
    d1.marks=98.98;
    System.out.println(d1.marks);
   }


}