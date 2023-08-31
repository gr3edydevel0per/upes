class Calccmd{
       public static void main(String args[]){
       Integer num1=Integer.parseInt(args[0]);
       int num2=Integer.parseInt(args[2]);
       char operation = args[1].charAt(0);
       switch(operation){
        case '+':{
            System.out.println(num1+" + "+num2+" = "+(num1+num2));
            break;
        }
        case '-':{
            System.out.println(num1+" - "+num2+" = "+(num1-num2));
            break;
        }
        case 'x':{
            System.out.println(num1+" * "+num2+" = "+(num1*num2));
            break;
        }
                case '/':{
            System.out.println(num1+" / "+num2+" = "+(num1/num2));
            break;
        }
                case '%':{
            System.out.println(num1+" % "+num2+" = "+(num1%num2));
            break;
        }
        default: {
            System.out.println("Invalid operation.");
        }
       }

       }

}