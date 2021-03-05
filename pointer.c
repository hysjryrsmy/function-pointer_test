#define _CRT_S_CURE_NO_WARNINGS
#include <stdio.h>


//数组的练习题

//1.若定义int a[2][3]={1,2,3,4,5,6}; 则值为4的数组元素是 a[1][0]

/*2.输出结果是:16
int main()
{
	int arr[] = { 1,2,(3,4),5 };//因为逗号表达式，所以有四个元素
	printf("%d\n", sizeof(arr)); //4*4 = 16 所以大小是16
	return 0;
}
*/

/*3.输出结果是：10 ，9
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));  //hello bit\0;strlen在\0停止
	return 0;
}
*/


//4. 给出以下定义
//char acX[] = "abcdefg";
//char acY[] = { 'a','b','c','d','e','f','g' };
//①数组acX的长度大于数组acY的长度


//5.关于一维数组的描述
//①数组的下标是从0开始的	
//②数组在内存中是连续存放的
//③数组名表示首元素的地址（绝大多数情况）
//④随着数组下标的由小到大，地址由低到高


//6.创建一个整形数组，完成对数组的操作
//①实现函数init()初始化数组为全0
//②实现print()打印数组的每个元素
//③实现reverse() 函数完成数组元素的逆置

/*
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}


}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz); //把数组初始化0
	Print(arr, sz);//打印
	Reverse(arr, sz);
	Print(arr,sz);//打印
	return 0;
}
*/


//7.将数组A中的内容和数组B中的内容进行交换（数组一样大）
/*
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}
*/

