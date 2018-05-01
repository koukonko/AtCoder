package abc;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ABC_086_A {
	public static void main(String[] args) throws IOException {
		BufferedReader buff = null;
		buff = new BufferedReader(new InputStreamReader(System.in));

		int A = 0, B = 0;
		String[] box = buff.readLine().split(" ");
		A = Integer.parseInt(box[0]);
		B = Integer.parseInt(box[1]);

		if (A * B % 2 == 0) {
			System.out.println("Even");
		} else {
			System.out.println("Odd");
		}
	}
}
