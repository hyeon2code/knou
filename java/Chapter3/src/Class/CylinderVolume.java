package Class;

/**
 * File Name: CylinderVolume.java
 * Create by: Dohyeon Kwon (playdev7@gmail.com)
 * Create on: January 03. 2024
 * Last Edited: January 03. 2024
 * Summary: Circle 클래스를 재사용하여 원기둥의 부피를 구하는 프로그램
 */
class Cylinder {
	private Circle c;	// 밑면
	private int h;		// 높이
	
	// 생성자 => 원 인스턴스와 정수를 파라미터로 받음 
	public Cylinder(Circle a, int b) {
		c = a;
		h = b;
	}
	public double getVolume() {
		// 원 인스턴스를 통해 원 면적을 계산하여 활용 
		return c.getArea() * h;
	}
}
public class CylinderVolume {
	public static void main(String args[]) {
		Circle c = new Circle(7);
		int h = 8;
		Cylinder cy = new Cylinder(c, h);
		System.out.println(cy.getVolume());
	}
}
