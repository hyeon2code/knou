package GradeProcess;

class Grade {
	int english_score;
	int math_score;
	
	void input_grade(int inp1, int inp2) {
		english_score = inp1;
		math_score = inp2;
	}
	
	void output_grade() {
		System.out.println(english_score + math_score);
	}
}

public class GradeOutput {
	public static void main(String args[]) {
		Grade g1, g2;
		g1 = new Grade();
		g2 = new Grade();
		
		g1.input_grade(90, 85);
		g2.input_grade(80, 80);
		
		g1.output_grade();
		g2.output_grade();
	}
}
