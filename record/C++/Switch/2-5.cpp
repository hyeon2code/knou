#include <iostream> // ����ó�� - iostream�� ���� ����

int main() // main �Լ� ����
{
	int score; // int �� score ���� �� ����
	std::cout << "������ �Է��Ͻÿ�." << std::endl; // ������ �Է��Ͻÿ�. ���� ���
	std::cin >> score; // score ���� �� �Է�
	char grade; // char�� grade ���� �� ����
	switch (score / 10) // switch ���Ǻ� ����
	{
	case 10 : // 10�� ���
	case 9: grade = 'A'; // 9�� ��� A��� char�� ���� grade�� ����
		break; // ����������
	case 8: grade = 'B'; // 8�� ��� B��� char�� ���� grade�� ����
		break; // �극��ũ
	case 7: grade = 'C'; // 7�� ��� C��� char�� ���� grade�� ����
		break; // �극��ũ
	case 6: grade = 'D'; // 6�� ��� D��� char�� ���� grade�� ����
		break; // �극��ũ
	default: grade = 'F'; // ������ �⺻ ������ F��� char�� ���� grade�� ����
	}
	std::cout << "����� ������ " << grade << " �Դϴ�." << std::endl; // ���� grade ���� ������ ���� ���
	return 0;
}