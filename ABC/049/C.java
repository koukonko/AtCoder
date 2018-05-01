package abc;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ABC_049_C {

	/*
	 * MLE - メモリの使い過ぎ
	 */
	public static void main2(String[] args) throws IOException {
		BufferedReader buff = null;
		buff = new BufferedReader(new InputStreamReader(System.in));

		String line = buff.readLine();
		String[] box = {"dream", "erase", "eraser" ,"dreamer"};
		while(true){
			boolean str_flag = true;

			String[] tmp = new String[4];
			for(int i = 0; i < 4; ++i){
				tmp[i] = "";
				for(int j = line.length() - 1; j > line.length() - box[i].length() - 1 && j >= 0; --j){
					tmp[i] = line.charAt(j) + tmp[i];
				}
				//System.out.print(" // " + tmp[i] + " ");
			}

			for(int i = 0; i < 4; ++i){
				if(tmp[i].equals(box[i])){
					//System.out.println(" * " + line + " " + box[i]);
					line = line.substring(0, line.length() - box[i].length());
					//System.out.println(" ** " + line);
					str_flag = false;
				}
			}
			//System.out.println(line);
			if(line.length() == 0){
				System.out.println("YES");
				break;
			}
			if(str_flag){
				System.out.println("NO");
				break;
			}
		}
	}

	/*
	 * コレセイカイ スゴクカンタン
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader buff = null;
		buff = new BufferedReader(new InputStreamReader(System.in));

		String S = buff.readLine();
		String[] divide = {"dream", "erase", "eraser" ,"dreamer"};

		S = S.replace("eraser", "1");
		S = S.replace("erase", "1");
		S = S.replace("dreamer", "1");
		S = S.replace("dream", "1");
		S = S.replace("1", "");
		System.out.println(S.equals("") ? "YES" : "NO");
	}
}
