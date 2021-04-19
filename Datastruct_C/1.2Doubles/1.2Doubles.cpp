#include <iostream>
using namespace std;

//给出2~15个数,计算是否为倍数
int main()
{
	int i, j, n, count, a[20];  //定义变量,和数组
	cin >> a[0];				//输入第一个数字存在a[0]中
	while (a[0] != -1)			//除非输入-1程序结束
	{
		for (n = 1;n < 20 ;n++)	//a[1]第二位,循环输入20个数字
		{
			cin >> a[n];
			if (a[n] == 0)		//0表示输入结束
				break;			//跳出输入函数开始处理
		}
		count = 0;				//初始化符合要求的个数
		for (i=0; i<n-1; i++)	//从a[0]位置,第一个数开始比较
		{
			for (j = i + 1; j < n; j++)	//循环遍历比较j,
			{
				if (a[i] * 2 == a[j] || a[j] * 2 == a[i])
					count++;
			}
		}
		cout << count << endl;
		cin >> a[0];			//输入下一轮第一个数
	}
	return 0;
}