import java.io.File;
import java.util.Scanner;

public class Ex10_12 {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(new File("C:/temp/data2.txt"));
		int hap = 0;

		while (sc.hasNextLine())
			hap += sc.nextInt();

		System.out.println("�հ� : " + hap);
		sc.close();
	}
}