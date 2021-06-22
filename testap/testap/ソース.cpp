#include<stdio.h>
void hyouzi(int hand, int myhand);
int main(void) {
	int i=1,hand,myhand,flag=0;
	char s[10];
	printf("じゃんけんゲーム:グーの時は0,チョキの時は1,パーの時は2を入力してね(やめるときは3)\n");
	while (i<9999)
	{
		scanf("%d", &myhand);

		if (myhand == 3)break;
		
		if (i % 2 == 0)hand = 0;
		else if (i % 2 == 1)hand = 1;
		else if (i % 11 == 0)hand = 2;
		
		if (hand == 0 && myhand == 0)flag = 0;
		else if (hand == 0 && myhand == 1)flag = 1;
		else if (hand == 0 && myhand == 2)flag = 2;

		if (hand == 1 && myhand == 0)flag = 1;
		else if (hand == 1 && myhand == 1)flag = 0;
		else if (hand == 1 && myhand == 2)flag = 2;
		
		if (hand == 2 && myhand == 0)flag = 2;
		else if (hand == 2 && myhand == 1)flag = 1;
		else if (hand == 2 && myhand == 2)flag = 0;

		hyouzi(hand,myhand);

		switch (flag)
		{
		case(0):
			printf("あいこ\n");
			break;
		case(1):
			printf("きみの勝ち\n");
			break;
		case(2):
			printf("きみの負け\n");
			break;
		default:
			break;
		}
		i++;
	}
	return 0;
}
void hyouzi(int hand, int myhand) {
	printf("きみの手 %d　VS　パソコンの手%d\n", hand, myhand);
}