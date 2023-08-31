class Fibo{

public static void main(String args[]){

int init1= 0 ;
int init2 = 1 ;
int num;
System.out.print(init1+" "+init2+" ");
for(int i=0;i<8;i++){
    num = init1+init2;
    System.out.print(num+" ");
    init1=init2;
    init2=num;
}

}

}