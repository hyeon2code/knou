#include <iostream> // ����ó�� - iostream�� ���� ����
using namespace std; // ǥ�� c++ ���̺귯���� std�� �⺻ ��Ī�������� ����

class Box { // Box Ŭ���� ����
private : // ���ü� ���� = private = ����� Ŭ����(��������)
	int height, width, depth; // int�� height(����), width(�ʺ�), depth(����) ���� ����
public: // ���ü� ���� - public = ���� Ŭ����(����)
	void init(int h, int w, int d) { // void�� init �Լ� ����(int h, int w, int d ������ �Ű������� ����)
		height = h; // public Ŭ������ h���� private Ŭ������ height ���� ����) // ���ڿ��� ���ڷ�
		width = w; // public Ŭ������ w���� private Ŭ������ width ���� ����)
		depth = d; // depth Ŭ������ depth�� public Ŭ������ d���� ����
	}
	int volume() const {
		return height * width * depth;
	}
};

int main()
{
	Box b;
	b.init(5, 10, 10);
	cout << b.volume() << endl;
	return 0;
}