package bot;

import java.util.Scanner;

public class SimpleBot {
    final static Scanner scanner = new Scanner(System.in); // Do not change this line

    public static void main(String[] args) {
        greet("Aid", "2018"); // change it as you need
        remindName();
        guessAge();
        count();
        test();
        end();
    }

    static void greet(String assistantName, String birthYear) {
        System.out.println("Ola! Meu nome é " + assistantName + ".");
        System.out.println("Fui criado em " + birthYear + ".");
        System.out.println("Por favor, me lembre do seu name.");
    }

    static void remindName() {
        String name = scanner.nextLine();
        System.out.println("Que nome bacana você tem, " + name + "!");
    }

    static void guessAge() {
        System.out.println("Deixe me adivinhar sua idade!");
        System.out.println("Diga as sobras da sua idade dividida 3, 5 e 7.");
        int rem3 = scanner.nextInt();
        int rem5 = scanner.nextInt();
        int rem7 = scanner.nextInt();
        int age = (rem3 * 70 + rem5 * 21 + rem7 * 15) % 105;
        System.out.println("Sua idade é " + age + "; é uma boa hora pra aprender a programar!!");
    }

    static void count() {
        System.out.println("Agora vou provar que posso contar até qualquer número!");
        int num = scanner.nextInt();
        for (int i = 0; i <= num; i++) {
            System.out.printf("%d!\n", i);
        }
    }

    static void test() {

        int resposta;

            System.out.println("Vamos testar seu conhecimento com programação!");
            System.out.println("Por que nós usamos metódos?");
            System.out.println("1. Para repetir uma declaração várias vezes.");
            System.out.println("2. Para decompor um programa em várias pequenas subrotinas.");
            System.out.println("3. Para determinar o tempo de execução de um programa.");
            System.out.println("4. Para determinar o tempo de execução de um programa.");

            resposta = scanner.nextInt();

            while(resposta !=2){
                System.out.println("Por favor, tente de novo!");
                resposta = scanner.nextInt();
            }
    }

    static void end() {
        System.out.println("Congratulations, have a nice day!"); // Do not change this text
    }
}
