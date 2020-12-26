#include <stdio.h>
int main()
{
	int num1, num2;
l1:printf("请输入课程号(例如1-1)：");
	scanf_s("%d-%d", &num1, &num2);
	printf("正在进入_%d_%d\n", num1, num2);
	if (num1 == 1)
	{
		if (num2 == 1)
			_1_1();
		else if (num2 == 2)
			_1_2();
		else if (num2 == 3)
			_1_3();
		else if (num2 == 4)
			_1_4();
		else if (num2 == 5)
			_1_5();
		else if (num2 == 6)
			_1_6();
		else printf("该节课程不存在！");
	}
	else if (num1 == 2)
	{
		if (num2 == 1)
			_2_1();
		else if (num2 == 2)
			_2_2();
		else if (num2 == 3)
			_2_3();
		else if (num2 == 4)
			_2_4();
		else if (num2 == 5)
			_2_5();
		else if (num2 == 6)
			_2_6();
		else if (num2 == 7)
			_2_7();
		else if (num2 == 8)
			_2_8();
		else if (num2 == 9)
			_2_9();
		else printf("该节课程不存在！");
	}
	else if (num1 == 3)
	{
		if (num2 == 1)
			_3_1();
		else if (num2 == 2)
			_3_2();
		else if (num2 == 3)
			_3_3();
		else if (num2 == 4)
			_3_4();
		else if (num2 == 5)
			_3_5();
		else if (num2 == 6)
			_3_6();
		else if (num2 == 7)
			_3_7();
		else if (num2 == 8)
			_3_8();
		else if (num2 == 9)
			_3_9();
		else if (num2 == 10)
			_3_10();
		else printf("该节课程不存在！");
	}
	if (num1 ==4)
	{
		switch (num2)
		{
		case 1:_4_1(); break;        //case完成后加上break，防止case穿透
		case 2:_4_2(); break;
		case 3:_4_3(); break;
		case 4:_4_4(); break;
		case 5:_4_5(); break;
		case 6:_4_6(); break;
		case 7:_4_7(); break;
		case 8:_4_8(); break;
		case 9:_4_9(); break;
		case 10:_4_10(); break;
		case 11:_4_11(); break;
		case 12:_4_12(); break;
		case 13:_4_13(); break;
		case 14:_4_14(); break;
		case 15:_4_15(); break;
		case 16:_4_16(); break;
		case 17:_4_17(); break;
		case 18:_4_18(); break;
		case 19:_4_19(); break;
		case 20:_4_20(); break;
		default:printf("该章节不存在，请检查章节号。");
		}

	}
	printf("\n");
	goto l1;
	return 0;
}

int _1_1()
{
	/*在双引号中间输入Hello World*/
	printf("Hello World");
	return 0;
}
int _1_2()
{
	printf("I love imooc!");    /*看一下这里的打印语句是否正确*/
	return 0;
}
int _1_3()
{
	printf("该章节为习题。");
	return 0;
}
int _1_4()
{
	printf("C程序中一定是从我开始的");
	return 0;
}
int _1_5()
{
	printf("你是我的小呀小苹果儿\n");
	printf("怎么爱你都不嫌多\n");
	printf("红红的小脸儿温暖我的心窝\n");
	printf("点亮我生命的火 火火火火\n");
	return 0;

}
int _1_6()
{
	//这是一首思念家乡的诗
	printf("床前明月光，");
	printf("疑是地上霜。");
	printf("举头望明月，");
	printf("低头思故乡。");
	/*短短四句诗，写得清新朴素，明白如话。它的内容是单纯的，但同时却又是丰富的。
	它是容易理解的，却又是体味不尽的。诗人所没有说的比他已经说出来的要多得多。
	它的构思是细致而深曲的，但却又是脱口吟成、浑然无迹的。从这里，我们不难领
	会到李白绝句的“自然”、“无意于工而无不工”的妙境。*/
	return 0;
}
int _2_1()
{
	int _3myAge = 18;    //这里命名正确吗？
	printf("恭喜修改正确");
	return 0;
}
int _2_2()
{
	printf("该章节为习题。");
	return 0;
}
int _2_3()
{
	int age = 18;                     /*这里定义年龄*/
	printf("我今年%d岁！\n", age);
	return 0;
}
int _2_4()
{
	int age, height;
	float weight;
	char isfat;
	age = 15;
	height = 162;
	weight = 82.5;
	isfat = 'y';
	printf("年龄：%d 岁\n", age);
	printf("身高：%d CM\n", height);
	printf("体重：%f KG\n", weight);
	printf("是否属于肥胖儿童：%c\n", isfat);
	/*%d,%f,%c此类符号在后面会有讲解*/
	return 0;
}
int _2_5()
{
	int age = 18;
	float height = 1.85;
	char unit = 'm';
	printf("小明今年%d岁\n", age);
	printf("小明身高%f%c\n", height, unit);
	printf("小明现在在慕课网上学习IT技术");
	return 0;
}
int _2_6()
{
	printf("该章节为习题。");
	return 0;
}
#define POCKETMONEY 10
int _2_7()
{
	printf("小明今天又得到%d元零花钱\n", POCKETMONEY);
	return 0;
}
int _2_8()
{
	char c = 'a';
	int n = c;  //将c赋值给n
	float f = c;  //将c赋值给f
	double d = c;
	printf("%f\n", f);
	printf("%lf\n", d);
	return 0;
}
int _2_9()
{
	double num = 2.5;      //定义浮点型变量num并赋值为2.5
	int num2 = (int)num;
	printf("num的整数部分是%d\n", num2);
	return 0;
}

int _3_1()
{
	int a, b, c, d;
	int result;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	result = a + b + c + d;    //在这里体验哦~
	printf("%d\n", result);
	return 0;
}
int _3_2()
{
	int x, y;
	x = 10;
	y = -3;
	int jia = x + y;
	int jian = x - y;
	int cheng = x * y;
	int chu = x / y;
	int qiuyu = x % y;
	printf("x+y=%d\n", jia);
	printf("x-y=%d\n", jian);
	printf("x*y=%d\n", cheng);
	printf("x/y=%d\n", chu);
	printf("x%%y=%d\n", qiuyu);
	return 0;
}
int _3_3()
{
	int x = 0;
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);
	return 0;
}
int _3_4()
{
	printf("该章节为习题。");
	return 0;
}
int _3_5()
{
	int x = 10;
	int y = 10;
	//使用简单赋值语句实现x乘以2。
	x = x * 2;
	//使用复合赋值语句实现y乘以2。
	y *= 2;
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	return 0;
}
int _3_6()
{
	int x = 5;
	int y = 5;
	int z = 10;
	printf("x是否大于y:%d\n", x > y); //x是否大于y
	printf("y是否大于等于x:%d\n", y >= x); //y是否大于等于x
	printf("y是否小于z:%d\n", y < z); //y是否小于z
	printf("z是否小于等于x:%d\n", z <= x); //z是否小于等于x
	printf("z是否等于x+y:%d\n", z == x + y); //z是否等于x+y
	return 0;
}
int _3_7()
{
	int height = 175;   //身高为175cm
	double money = 1500000;  //银行存款为150万
	printf("是否符合条件：%d\n", height >= 180 && money >= 1000000);  //填写算式
	return 0;
}
int _3_8()
{
	printf("该章节为习题。");
	return 0;
}
int _3_9()
{
	//定义小编兜里的钱
	double money = 12;
	//定义打车回家的费用
	double cost = 11.5;
	printf("小编能不能打车回家呢：");
	//输出y小编就打车回家了，输出n小编就不能打车回家
	printf("%c", cost <= money ? 'y' : 'n');
	return 0;
}
int _3_10()
{
	int x = 5;
	int y = 8;
	//在这里合适的位置加上括号使z的值为4
	int z = (x * 8) / (y + 2);
	printf("z=%d\n", z);
	return 0;
}
int _4_1()
{
	int height = 185;
	//补全所有代码
	if (height >= 180)
	{
		printf("恭喜小明可以参加校篮球队");
	}
	return 0;
}
int _4_2()
{
	int year = 2014; //今年是2014年
	//补全一下代码
	if (year % 4 == 0)
	{
		printf("今年是闰年");
	}
	else
	{
		printf("今年是平年");
	}

	return 0;
}
int _4_3()
{
	int score = 7200;
	//完善一下代码
	if (score >= 10000)
	{
		printf("钻石玩家");
	}
	else if (score >= 5000)
	{
		printf("白金玩家");
	}
	else if (score >= 1000)
	{
		printf("青铜玩家");
	}
	else
	{
		printf("普通玩家");
	}
	return 0;
}
int _4_4()
{
	int sale = 120; //销售业绩为120万
	int year = 1; //刚刚进入公司1年
	//完善代码
	if (sale > 100)
	{
		if (year >= 2)
		{
			printf("恭喜你获得优秀员工奖");
		}
		else
		{
			printf("很遗憾，期望你再接再厉");
		}
	}

	else
	{
		printf("很遗憾，期望你再接再厉");
	}
	return 0;
}
int _4_5()
{
	printf("该章节为练习题！");
	return 0;
}
int _4_6()
{
	int i, sum = 0;
	i = 1;
	while (i <= 100)  //循环条件应该是什么呢？
	{
		sum = sum + i;
		++i;     //这里是不是应该改变循环变量的值
	}
	printf("100以内所有整数之和为：%d\n", sum);
	return 0;
}
int _4_7()
{
	int number = 200;
	int year = 2014;
	do {
		year++;
		number *= 1.2;            //这里是不是应该写点什么？
	} while (number < 1000);    //这里好像缺点什么
	printf("到%d年招工规模突破1000人\n", year);
	return 0;
}
int _4_8()
{
	// 定义变量sum, num
	int sum, num;
	sum = 0;
	for (num = 0; num <= 10; num++) //for循环条件与num的变化值
	{
		sum += num;//计算每次数字之间的和sum
	}
	printf("10以内数的和为：%d", sum);
	return 0;
}
int _4_9()
{
	//定义三位数num,个位数sd,十位数td,百位数hd
	int num, sd, td, hd;
	//循环所有三位数
	for (num = 100; num < 1000; num++)
	{
		//获取三位数字num百位上的数字
		hd = num / 100;
		//获取三位数字num十位上的数字
		td = num % 100 / 10;
		//获取三位数字num个位上的数字
		sd = num % 100 % 10;
		//水仙花数的条件是什么？
		if (num == hd * hd * hd + td * td * td + sd * sd * sd)
		{
			printf("水仙花数字：%d\n", num);
		}
	}
	return 0;
}
int _4_10()
{
	int inputnum = 0;
	printf("请选择要检查的语句：1：while循环，2：do-while循环，3-for循环\n");
	scanf_s("%d", &inputnum);
	switch (inputnum)
	{
	case 1: _4_10case1(); break;
	case 2: _4_10case2(); break;
	case 3: _4_10case3(); break;
	}
}
int _4_10case1()
{
	int sum = 0;  //定义计算结果变量sum
	int i = 1;    //定义循环数字变量i
	int flag = 1; //定义符号状态变量flag
	while (i <= 100)
	{
		if (i % 2 == 0)
		{
			flag = 0;
		}
		else flag = 1;

		if (flag == 1)
		{
			sum += i;
		}
		else sum -= i;
		i++;

	}
	printf("sum=%d\n", sum);
}
int _4_10case2()
{
	int sum = 0;  //定义计算结果变量sum
	int i = 1;    //定义循环数字变量i
	int flag = 1; //定义符号状态变量flag
	do {
		if (i % 2 == 0)
		{
			flag = 0;
		}
		else flag = 1;

		if (flag == 1)
		{
			sum += i;
		}
		else sum -= i;
		i++;

	} while (i <= 100);
	printf("sum=%d\n", sum);
}
int _4_10case3()
{
	int sum = 0;  //定义计算结果变量sum
	int i = 1;    //定义循环数字变量i
	int flag = 1; //定义符号状态变量flag
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			flag = 0;
		}
		else flag = 1;

		if (flag == 1)
		{
			sum += i;
		}
		else sum -= i;
	}
	printf("sum=%d\n", sum);
}
int _4_11()
{
	printf("该章节为练习题");
	return 0;
}
int _4_12()
{
	int i, j, k;
	for (i = 1; i < 5; i++)
	{
		/* 观察每行的空格数量，补全循环条件 */
		for (j = i; j < 5; j++)
		{
			printf(" ");    //输出空格
		}
		/* 观察每行*号的数量，补全循环条件 */
		for (k = 0; k < i * 2 - 1; k++)
		{
			printf("*");   //每行输出的*号
		}
		printf("\n");     //每次循环换行
	}
	return 0;
}
int _4_13()
{
	// 定义相乘数字i,j以及结果result
	int i, j, result;
	for (i = 9; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d*%d=%d\t", i, j, result);
		}
		printf("\n");
	}

	return 0;
}
int _4_14()
{
	int m, n;
	for (m = 2; m <= 50; m++)
	{
		for (n = 2; n < m; n++)
		{
			if (m % n == 0)       //什么条件下跳出当前循环
				break;                 //这里应该退出当前循环了
		}
		if (m == n)   //n循环结束后，如果m=n的话就输出m
			printf("%d  ", m);
	}
	return 0;
}
int _4_15()
{
	int i, sum;
	for (i = 1, sum = 0; i <= 20; i++)
	{
		if (i % 3 == 0)    //能被3整除这个条件如何写呢？
		{
			continue;            //应该用哪个循环结束语句呢？
		}
		sum += i;
	}
	printf("sum=%d\n", sum);
	return 0;
}
int _4_16()
{
	int score = 87; //考试分数为87分 
	score /= 10;
	switch (score)
	{
		/*想想以下代码为什么用这种方式；
		  这种方式的好处？*/
	case 10:
	case 9:
		printf("等级A");
		break;
	case 8:
		printf("等级B");
		break;               //这里是不是缺点什么？            
	case 7:
	case 6:
		printf("等级C");
		break;             //这里是不是缺点什么？  
	default:
		printf("等级D");
		break;
	}
	return 0;
}
int _4_17()
{
	/* 定义需要计算的日期 */
	int year = 2008, runnian = 0;
	int month = 8;
	int day = 8, daysum = 0;
	/*
	 * 请使用switch语句，if...else语句完成本题
	 * 如有想看小编思路的，可以点击左侧任务中的“不会了怎么办”
	 * 小编还是希望大家独立完成哦~
	 */
	if (year % 4 == 0)
	{
		runnian = 1;
	}
	switch (month)
    case(8):
		daysum = 31 * 4 + 28 + runnian + 30 * 2 + day;
		printf("%d年%d月%d日是该年的第%d天", year, month, day, daysum);

		return 0;
}
int _4_18()
{
	printf("该章节为练习题");
	return 0;
}
int _4_19()
{
	int sum = 0;
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		if (i == 3)
			goto l12;//是不是少了一个判断呢？
							//在这里使用goto语句
	}
l12:printf("结束for循环了....");  //请选择合适位置添加标识符
	return 0;
}
int _4_20()
{
	
		int point[10][10];
		point[0][0] = 1;
		point[1][0] = 1;
		point[1][1] = 1;
		int y = 2, x = 0;
		while (y < 10)
		{
			x = 1;
			point[y][0] = 1;
			point[y][y] = 1;
			while (x < y)
			{
				point[y][x] = point[y - 1][x - 1] + point[y - 1][x];
				x++;
			}
			y++;
		}


		y = 0;
		while (y < 10)
		{
			x = 0;
			int flag, times;
			flag = 0;
			times = (10 - y) * 3;
			while (times > 0)
			{
				printf(" ");
				times--;
			}
			while (x <= y)
			{

				if (point[y][x] == 1)
				{

					printf("%6d", point[y][x]);
					flag++;
					if (flag > 1 || y == 0)
					{
						printf("\n\n");
					}
				}
				else
				{
					printf("%6d", point[y][x]);
				}
				x++;
			}
			y++;
		}

	
}