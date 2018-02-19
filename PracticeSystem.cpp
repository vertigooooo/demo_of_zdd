#include <iostream>
#include <string>
//#include <vector>	(?)
using namespace std;

//题目
class Problem
{
public:
	//构造函数
	Problem();

	//析构函数
	~Problem();

	//获取这道题当前能得到的分数
	int getGrade();

	//获取这道题的正确结果
	double getResult();

private:
	//这道题的两个操作数
	int x,y;

	//这道题的结果
	double result;

	//操作数取值的最大值，默认为100
	int m_max = 100;

	//操作数取值的最小值，默认为1
	int m_min = 1;

	//当前答对能得到的分数，默认为10
	int m_grade = 10;

	//这道题的类型（加、减、乘、除）
	int m_operateType;

	//

};


//四则运算练习系统
class PracticeSystem
{
public:
	//当前练习的难度等级，0表示易，1表示中，2表示难（默认为1）
	static int level;

	//构造函数
	PracticeSystem();

	//析构函数
	~PracticeSystem();

	//系统初始化
	void init();

	//生成试题（并打印？？）
	void produceProblem();

	//显示错误和正确的提示信息
	void printInfo();

	//解析输入
	void parseInput();

	//判断最终得分
	void judgeFinalGrade();

	//设置系统的难度等级
	void setLevel();

	//判断输入
	bool judgeTrueOrFalse();

	//获取当前分数
	int getGrade(){return m_grade;}

	//显示当前的难度等级
	int getLevel();

private:
	//当前题号
	int m_problemNumber = 1;

	//当前得分
	int m_grade = 0;

	//当前题目
	Problem m_problem;

};




int main(void)
{
	cout << "hello" << endl;

	system("pause");
	return 0;
}

