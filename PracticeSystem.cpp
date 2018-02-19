#include <iostream>
#include <string>
//#include <vector>	(?)
using namespace std;

//��Ŀ
class Problem
{
public:
	//���캯��
	Problem();

	//��������
	~Problem();

	//��ȡ����⵱ǰ�ܵõ��ķ���
	int getGrade();

	//��ȡ��������ȷ���
	double getResult();

private:
	//����������������
	int x,y;

	//�����Ľ��
	double result;

	//������ȡֵ�����ֵ��Ĭ��Ϊ100
	int m_max = 100;

	//������ȡֵ����Сֵ��Ĭ��Ϊ1
	int m_min = 1;

	//��ǰ����ܵõ��ķ�����Ĭ��Ϊ10
	int m_grade = 10;

	//���������ͣ��ӡ������ˡ�����
	int m_operateType;

	//

};


//����������ϰϵͳ
class PracticeSystem
{
public:
	//��ǰ��ϰ���Ѷȵȼ���0��ʾ�ף�1��ʾ�У�2��ʾ�ѣ�Ĭ��Ϊ1��
	static int level;

	//���캯��
	PracticeSystem();

	//��������
	~PracticeSystem();

	//ϵͳ��ʼ��
	void init();

	//�������⣨����ӡ������
	void produceProblem();

	//��ʾ�������ȷ����ʾ��Ϣ
	void printInfo();

	//��������
	void parseInput();

	//�ж����յ÷�
	void judgeFinalGrade();

	//����ϵͳ���Ѷȵȼ�
	void setLevel();

	//�ж�����
	bool judgeTrueOrFalse();

	//��ȡ��ǰ����
	int getGrade(){return m_grade;}

	//��ʾ��ǰ���Ѷȵȼ�
	int getLevel();

private:
	//��ǰ���
	int m_problemNumber = 1;

	//��ǰ�÷�
	int m_grade = 0;

	//��ǰ��Ŀ
	Problem m_problem;

};




int main(void)
{
	cout << "hello" << endl;

	system("pause");
	return 0;
}

