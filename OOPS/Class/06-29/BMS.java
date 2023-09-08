import java.util.*;

class CustomerAccount{
long acc_num;
String name;
double balance;
Scanner sc = new Scanner(System.in); 

void getdata(){
    System.out.println("Account Number is :"+acc_num);
    System.out.println("Account Holder Name :"+name);
    System.out.println("Account Balance is :"+balance);
}
void createAccount(){
    System.out.println("Please enter account number :");
    this.acc_num=sc.nextLong();
    System.out.println("Please enter account holder name :");
    this.name=sc.next();
    System.out.println("Please enter account balance:");
    this.balance=sc.nextDouble();
    this.getdata();
}

void deposit(double amount){
    this.balance+=amount;
    System.out.println("Your Account Balance is :"+balance);
}

void withdraw(int amount){
    if(amount >this.balance){
        System.out.println("Insufficient Account Balance");
    }
    else{
        System.out.println(amount+" Withdrawn from Account ");
    }
}

}


class BMS{
public static void main(String args[])
{
  
    CustomerAccount C1= new CustomerAccount();
    C1.createAccount();
    C1.deposit(5000);
    


}
}

