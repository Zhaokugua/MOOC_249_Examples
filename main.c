#include <stdio.h>
int main()
{
	int num1, num2;
l1:printf("������γ̺�(����1-1)��");
	scanf_s("%d-%d", &num1, &num2);
	printf("���ڽ���_%d_%d\n", num1, num2);
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
		else printf("�ýڿγ̲����ڣ�");
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
		else printf("�ýڿγ̲����ڣ�");
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
		else printf("�ýڿγ̲����ڣ�");
	}
	if (num1 ==4)
	{
		switch (num2)
		{
		case 1:_4_1(); break;        //case��ɺ����break����ֹcase��͸
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
		default:printf("���½ڲ����ڣ������½ںš�");
		}

	}
	printf("\n");
	goto l1;
	return 0;
}

int _1_1()
{
	/*��˫�����м�����Hello World*/
	printf("Hello World");
	return 0;
}
int _1_2()
{
	printf("I love imooc!");    /*��һ������Ĵ�ӡ����Ƿ���ȷ*/
	return 0;
}
int _1_3()
{
	printf("���½�Ϊϰ�⡣");
	return 0;
}
int _1_4()
{
	printf("C������һ���Ǵ��ҿ�ʼ��");
	return 0;
}
int _1_5()
{
	printf("�����ҵ�СѽСƻ����\n");
	printf("��ô���㶼���Ӷ�\n");
	printf("����С������ů�ҵ�����\n");
	printf("�����������Ļ� �����\n");
	return 0;

}
int _1_6()
{
	//����һ��˼������ʫ
	printf("��ǰ���¹⣬");
	printf("���ǵ���˪��");
	printf("��ͷ�����£�");
	printf("��ͷ˼���硣");
	/*�̶��ľ�ʫ��д���������أ������绰�����������ǵ����ģ���ͬʱȴ���Ƿḻ�ġ�
	�����������ģ�ȴ������ζ�����ġ�ʫ����û��˵�ı����Ѿ�˵������Ҫ��öࡣ
	���Ĺ�˼��ϸ�¶������ģ���ȴ�����ѿ����ɡ���Ȼ�޼��ġ���������ǲ�����
	�ᵽ��׾���ġ���Ȼ�����������ڹ����޲����������*/
	return 0;
}
int _2_1()
{
	int _3myAge = 18;    //����������ȷ��
	printf("��ϲ�޸���ȷ");
	return 0;
}
int _2_2()
{
	printf("���½�Ϊϰ�⡣");
	return 0;
}
int _2_3()
{
	int age = 18;                     /*���ﶨ������*/
	printf("�ҽ���%d�꣡\n", age);
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
	printf("���䣺%d ��\n", age);
	printf("��ߣ�%d CM\n", height);
	printf("���أ�%f KG\n", weight);
	printf("�Ƿ����ڷ��ֶ�ͯ��%c\n", isfat);
	/*%d,%f,%c��������ں�����н���*/
	return 0;
}
int _2_5()
{
	int age = 18;
	float height = 1.85;
	char unit = 'm';
	printf("С������%d��\n", age);
	printf("С�����%f%c\n", height, unit);
	printf("С��������Ľ������ѧϰIT����");
	return 0;
}
int _2_6()
{
	printf("���½�Ϊϰ�⡣");
	return 0;
}
#define POCKETMONEY 10
int _2_7()
{
	printf("С�������ֵõ�%dԪ�㻨Ǯ\n", POCKETMONEY);
	return 0;
}
int _2_8()
{
	char c = 'a';
	int n = c;  //��c��ֵ��n
	float f = c;  //��c��ֵ��f
	double d = c;
	printf("%f\n", f);
	printf("%lf\n", d);
	return 0;
}
int _2_9()
{
	double num = 2.5;      //���帡���ͱ���num����ֵΪ2.5
	int num2 = (int)num;
	printf("num������������%d\n", num2);
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
	result = a + b + c + d;    //����������Ŷ~
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
	printf("���½�Ϊϰ�⡣");
	return 0;
}
int _3_5()
{
	int x = 10;
	int y = 10;
	//ʹ�ü򵥸�ֵ���ʵ��x����2��
	x = x * 2;
	//ʹ�ø��ϸ�ֵ���ʵ��y����2��
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
	printf("x�Ƿ����y:%d\n", x > y); //x�Ƿ����y
	printf("y�Ƿ���ڵ���x:%d\n", y >= x); //y�Ƿ���ڵ���x
	printf("y�Ƿ�С��z:%d\n", y < z); //y�Ƿ�С��z
	printf("z�Ƿ�С�ڵ���x:%d\n", z <= x); //z�Ƿ�С�ڵ���x
	printf("z�Ƿ����x+y:%d\n", z == x + y); //z�Ƿ����x+y
	return 0;
}
int _3_7()
{
	int height = 175;   //���Ϊ175cm
	double money = 1500000;  //���д��Ϊ150��
	printf("�Ƿ����������%d\n", height >= 180 && money >= 1000000);  //��д��ʽ
	return 0;
}
int _3_8()
{
	printf("���½�Ϊϰ�⡣");
	return 0;
}
int _3_9()
{
	//����С�ඵ���Ǯ
	double money = 12;
	//����򳵻ؼҵķ���
	double cost = 11.5;
	printf("С���ܲ��ܴ򳵻ؼ��أ�");
	//���yС��ʹ򳵻ؼ��ˣ����nС��Ͳ��ܴ򳵻ؼ�
	printf("%c", cost <= money ? 'y' : 'n');
	return 0;
}
int _3_10()
{
	int x = 5;
	int y = 8;
	//��������ʵ�λ�ü�������ʹz��ֵΪ4
	int z = (x * 8) / (y + 2);
	printf("z=%d\n", z);
	return 0;
}
int _4_1()
{
	int height = 185;
	//��ȫ���д���
	if (height >= 180)
	{
		printf("��ϲС�����Բμ�У�����");
	}
	return 0;
}
int _4_2()
{
	int year = 2014; //������2014��
	//��ȫһ�´���
	if (year % 4 == 0)
	{
		printf("����������");
	}
	else
	{
		printf("������ƽ��");
	}

	return 0;
}
int _4_3()
{
	int score = 7200;
	//����һ�´���
	if (score >= 10000)
	{
		printf("��ʯ���");
	}
	else if (score >= 5000)
	{
		printf("�׽����");
	}
	else if (score >= 1000)
	{
		printf("��ͭ���");
	}
	else
	{
		printf("��ͨ���");
	}
	return 0;
}
int _4_4()
{
	int sale = 120; //����ҵ��Ϊ120��
	int year = 1; //�ոս��빫˾1��
	//���ƴ���
	if (sale > 100)
	{
		if (year >= 2)
		{
			printf("��ϲ��������Ա����");
		}
		else
		{
			printf("���ź����������ٽ�����");
		}
	}

	else
	{
		printf("���ź����������ٽ�����");
	}
	return 0;
}
int _4_5()
{
	printf("���½�Ϊ��ϰ�⣡");
	return 0;
}
int _4_6()
{
	int i, sum = 0;
	i = 1;
	while (i <= 100)  //ѭ������Ӧ����ʲô�أ�
	{
		sum = sum + i;
		++i;     //�����ǲ���Ӧ�øı�ѭ��������ֵ
	}
	printf("100������������֮��Ϊ��%d\n", sum);
	return 0;
}
int _4_7()
{
	int number = 200;
	int year = 2014;
	do {
		year++;
		number *= 1.2;            //�����ǲ���Ӧ��д��ʲô��
	} while (number < 1000);    //�������ȱ��ʲô
	printf("��%d���й���ģͻ��1000��\n", year);
	return 0;
}
int _4_8()
{
	// �������sum, num
	int sum, num;
	sum = 0;
	for (num = 0; num <= 10; num++) //forѭ��������num�ı仯ֵ
	{
		sum += num;//����ÿ������֮��ĺ�sum
	}
	printf("10�������ĺ�Ϊ��%d", sum);
	return 0;
}
int _4_9()
{
	//������λ��num,��λ��sd,ʮλ��td,��λ��hd
	int num, sd, td, hd;
	//ѭ��������λ��
	for (num = 100; num < 1000; num++)
	{
		//��ȡ��λ����num��λ�ϵ�����
		hd = num / 100;
		//��ȡ��λ����numʮλ�ϵ�����
		td = num % 100 / 10;
		//��ȡ��λ����num��λ�ϵ�����
		sd = num % 100 % 10;
		//ˮ�ɻ�����������ʲô��
		if (num == hd * hd * hd + td * td * td + sd * sd * sd)
		{
			printf("ˮ�ɻ����֣�%d\n", num);
		}
	}
	return 0;
}
int _4_10()
{
	int inputnum = 0;
	printf("��ѡ��Ҫ������䣺1��whileѭ����2��do-whileѭ����3-forѭ��\n");
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
	int sum = 0;  //�������������sum
	int i = 1;    //����ѭ�����ֱ���i
	int flag = 1; //�������״̬����flag
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
	int sum = 0;  //�������������sum
	int i = 1;    //����ѭ�����ֱ���i
	int flag = 1; //�������״̬����flag
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
	int sum = 0;  //�������������sum
	int i = 1;    //����ѭ�����ֱ���i
	int flag = 1; //�������״̬����flag
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
	printf("���½�Ϊ��ϰ��");
	return 0;
}
int _4_12()
{
	int i, j, k;
	for (i = 1; i < 5; i++)
	{
		/* �۲�ÿ�еĿո���������ȫѭ������ */
		for (j = i; j < 5; j++)
		{
			printf(" ");    //����ո�
		}
		/* �۲�ÿ��*�ŵ���������ȫѭ������ */
		for (k = 0; k < i * 2 - 1; k++)
		{
			printf("*");   //ÿ�������*��
		}
		printf("\n");     //ÿ��ѭ������
	}
	return 0;
}
int _4_13()
{
	// �����������i,j�Լ����result
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
			if (m % n == 0)       //ʲô������������ǰѭ��
				break;                 //����Ӧ���˳���ǰѭ����
		}
		if (m == n)   //nѭ�����������m=n�Ļ������m
			printf("%d  ", m);
	}
	return 0;
}
int _4_15()
{
	int i, sum;
	for (i = 1, sum = 0; i <= 20; i++)
	{
		if (i % 3 == 0)    //�ܱ�3��������������д�أ�
		{
			continue;            //Ӧ�����ĸ�ѭ����������أ�
		}
		sum += i;
	}
	printf("sum=%d\n", sum);
	return 0;
}
int _4_16()
{
	int score = 87; //���Է���Ϊ87�� 
	score /= 10;
	switch (score)
	{
		/*�������´���Ϊʲô�����ַ�ʽ��
		  ���ַ�ʽ�ĺô���*/
	case 10:
	case 9:
		printf("�ȼ�A");
		break;
	case 8:
		printf("�ȼ�B");
		break;               //�����ǲ���ȱ��ʲô��            
	case 7:
	case 6:
		printf("�ȼ�C");
		break;             //�����ǲ���ȱ��ʲô��  
	default:
		printf("�ȼ�D");
		break;
	}
	return 0;
}
int _4_17()
{
	/* ������Ҫ��������� */
	int year = 2008, runnian = 0;
	int month = 8;
	int day = 8, daysum = 0;
	/*
	 * ��ʹ��switch��䣬if...else�����ɱ���
	 * �����뿴С��˼·�ģ����Ե����������еġ���������ô�족
	 * С�໹��ϣ����Ҷ������Ŷ~
	 */
	if (year % 4 == 0)
	{
		runnian = 1;
	}
	switch (month)
    case(8):
		daysum = 31 * 4 + 28 + runnian + 30 * 2 + day;
		printf("%d��%d��%d���Ǹ���ĵ�%d��", year, month, day, daysum);

		return 0;
}
int _4_18()
{
	printf("���½�Ϊ��ϰ��");
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
			goto l12;//�ǲ�������һ���ж��أ�
							//������ʹ��goto���
	}
l12:printf("����forѭ����....");  //��ѡ�����λ����ӱ�ʶ��
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