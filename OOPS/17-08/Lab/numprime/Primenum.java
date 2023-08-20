class Primenum {
public static void main(String args[]){
boolean isPrime = true;
int count=0;
for(int num=2;count!=5;num++){
        isPrime = true;
        for (int i = 2; i <= (num / 2); i++) {
                if (num % i == 0) {
                        isPrime = false;
                        break;
                                }
                                            }
        if (isPrime) {
                System.out.println(num);
                count++;
                    }
}
}

}
