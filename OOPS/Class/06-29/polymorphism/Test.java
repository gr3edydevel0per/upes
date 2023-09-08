class Poly{
void m1(){
    System.out.println("no args");
}
void m1(int x){
    System.out.println("x int");

}

void m1(double m){

    System.out.println("doubble m");
}
}

public class Test {

    public static void main(String args[]){
    Poly p = new Poly();
    p.m1();
    p.m1(2);
    p.m1(2.3);


}
}
