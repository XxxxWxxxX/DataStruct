#include <iostream>
using namespace std;

//��ƽ��ֵ������
int main()
{ 
	int i;
	double avg,sum =0.0,str[12] = {0};
	for (i = 0; i < 12; i++)
	{
		cin >> str[i];
		sum += str[i];
	}
	avg = sum / 12;
	printf("$%.2f", avg);
//	cout << "$:" << avg <<endl;	//cout�����ʽ������
}