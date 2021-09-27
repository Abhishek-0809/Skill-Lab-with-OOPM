import java.util.*;
public class Lab03 {
     static float bal;



    public static void CreateAccount() {
        Scanner sc = new Scanner(System.in);
        System.out.println("---------Enter Your Details:---------");
        System.out.println("Enter your Full Name: ");
        String name = sc.nextLine();
        System.out.println("Enter Address:");
        String address = sc.nextLine();
        System.out.println("Enter your mobile number:");
        String mobnum = sc.nextLine();
        System.out.println("Enter Your age:");
        String age = sc.nextLine();
        System.out.println("Which type of account you want to create(savings or current)");
        String type = sc.nextLine();
        System.out.println("Your Account is successfully Created!!!!!!");
    }
    public static void deposit(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the amount to deposit: \nRs");
        bal = sc.nextFloat();
        System.out.println("Your amount is successfully deposited!!!!");
    }
    public static void withdraw(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the amount to withdraw: \nRs");
        float withdrawamt = sc.nextFloat();
        if (withdrawamt>bal)
        {
            System.out.println("!!!INSUFFICIENT BALANCE!!!");
        }
        else bal = bal - withdrawamt;
    }


    public static void display(){
        System.out.println("YOUR BALANCE is Rs"+bal);
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("ENTER YOUR CHOICE:\n 1.Create Account\n 2.Deposit\n 3.Withdraw\n 4.Display Balance\n 5.Exit");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    CreateAccount();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Enter valid choice!!!!!");
                    break;
            }
        }
    }
}

