package GradeProcess;

// Grade 클래스 선언 
class Grade{
	// 성적 필드 선언
	int english_score;
	int math_score;
	
	// 나의 성적합을 출력하는 메소드 선언 
	void output_grade() {
		System.out.println(english_score + math_score);
	}
}

// main 영
public class GradeOutput {
	public static void main(String args[]) {
		// Grade 객체 공간 정의
		Grade g1, g2;
		
		// 첫 번째 Grade 객체 선언
		g1 = new Grade();
		// 두 번째 Grade 객체 선언
		g2 = new Grade();
		
		// g1의 성적 정의
		g1.english_score = 90; g1.math_score = 85;
		g2.english_score = 80; g2.math_score = 80;
		
		g1.output_grade();
		g2.output_grade();
	}
}
