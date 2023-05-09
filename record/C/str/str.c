/*
	C���α׷��� �⼮���� �ǽ� ������
	����ǽ����� - ������ ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		1.2 ���ڿ����� Ư�� ���ڿ��� ��ȯ�ϱ�
		 C���� ���ڿ��� ��ȯ�ϱ� ���� Ư���� �Լ��� �������� �ʴ´�.
		  ����, �Է� ���� ���ڿ� �߿��� Ư�� ���ڿ��� ��ȯ�ϴ� �Լ��� �ۼ��Ѵ�.
		 �ҽ��ڵ� �ۼ�����(�Լ���) - ��ȯ ���ڿ� �Լ� ������ ������ ����.
		  void ReplaceStr(char *string, char *oldstr, char *newstr);
	�ۼ��� �ǵ���
*/

#include <stdio.h> // ����ó�� - stdio.h ������� ���� ����.
#pragma warning(disable:4996) // gets ���� ���� �߻��ϴ� 4996 ��� ����.
void ReplaceStr(char *string, char *oldstr, char *newstr); // �Լ� ���� ����.


void main() { // main �Լ� ����.
	char string[35], oldstr[35], newstr[35]; // char�� ���ڿ� ����.
	printf("���ڿ��� �Է��Ͻÿ�. (�������� �ִ� 34��)\n"); // ���� ���.
	gets(string); // ���ڿ��Է� - string ���ڿ��� �Է�. (���ڿ��� �Է¹��� ��� gets ������ ���)
	printf("��ȯ�ϰ��� �ϴ� ���ڿ��� �Է��Ͻÿ�.\n"); // ���� ���.
	gets(oldstr); // ���ڿ��Է� - oldstr ���ڿ��� �Է�.
	printf("��ȯ�� ���ڿ��� �Է��Ͻÿ�.\n"); // ���� ���.
	gets(newstr); // ���ڿ��Է� - newstr ���ڿ��� �Է�.

	ReplaceStr(string, oldstr, newstr); // ReplaceStr �Լ� ȣ��. (�Ű������� string, oldstr, newstr)

	printf("\n���ڿ��� ������ ���� ��ȯ�Ͽ����ϴ�.\n"); // ���� ���.
	puts(string); // ���ڿ���� - string ���ڿ��� ���.
}
/* main �Լ� ���� */

/* ���ڿ��� �ٲپ��ִ� ReplaceStr �Լ� */
void ReplaceStr(char *string, char *oldstr, char *newstr) { // ReplaceStr �Լ� ����.

	/* ���ڿ��� �ٲ��� �� ��ġ�� ã�� �ݺ��� */
	while(*string !=NULL) { // *string ���ڿ��� ���� NULL�� �ƴҵ���, (string ���ڿ��� ����������.)
		
		/* ���ڿ��� �ٲ��� �� ��ġ�� ã�������� ���ǹ�  */
		if(*string==*oldstr) { // *string ���ڿ��� ���� *oldstr ���ڿ��� ���� ������,

			/* ���ڿ��� �ٲٴ� �ݺ��� */
			while(*newstr != NULL) { // *newstr ���ڿ��� ���� NULL�� �ƴҵ���, (newstr ���ڿ��� ����������.)
					*string=*newstr; // *newstr ���ڿ��� ���� string ���ڿ��� ����.
					*string++; // *string ���ڿ��� ���� 1����. (���ڿ��� ���� 1�����ϸ� �迭�� ��ĭ �̵���.)
					*newstr++; // *string ���ڿ��� ���� 1����.
				 }
			/* �ݺ��� ���� */

		} 
		/* ���ڿ��� �ٲٴ� ���ǹ� ���� */

		*string++; // string ���ڿ��� ���� 1����.
	}
	/* ���ڿ��� �ٲ��� �� ��ġ�� ã�� �ݺ��� ���� */

	*string=NULL; // *string ���ڿ��� ���� NULL�� �̵�. (NULL�� �̵����� ������ ���ڿ� �ڿ� �����Ⱚ�� ���� �� ����.)
} // ReplaceStr �Լ� ����.