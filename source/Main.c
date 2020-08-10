#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, money, change, rem;

	printf("제품 가격 입력(1 ~ 10000): ");
	scanf("%d", &price);       //제품 가격 입력
	printf("지불금액 입력(1 ~ 10000: ");
	scanf("%d", &money);       //지불 금액 입력

	rem = money - price;       //거스름돈 = 지불금액 - 제품가격

	change = rem / 5000;       //거스름돈을 5000원으로 나눔 -> 5000원의 개수
	printf("- 5000원: %d개 \n", change);

	rem = rem % 5000;          // 5000원을 거슬러 주고 남은 금액
	change = rem / 1000;       // 5000원을 거슬러 주고 남은 금액을 1000원으로 나눔 ->1000원의 개수
	printf("- 1000원: %d개 \n", change);

	rem = rem % 1000;          // 5000원짜리와 1000원짜리를 거슬러 주고 남은 금액
	change = rem / 500;        // 5000원짜리와 1000원짜리를 거슬러 주고 남은 금액을 500원으로 나눔 ->500원의 개수
	printf("- 500원: %d개 \n", change);

	rem = rem % 500;          // 5000원, 1000원, 500원 짜리를 각각 거슬러 주고 남은금액
	change = rem / 100;       // 남은 금액을 100원으로 나눔 ->100원의 개수
	printf("- 100원: %d개 \n", change);

	rem = rem % 100;
	change = rem / 50;
	printf("- 50원: %d개, ", change);

	rem = rem % 50;
	change = rem / 10;
	printf("10원: %d개, ", change);

	rem = rem % 10;
	change = rem / 5;
	printf("5원: %d개, ", change);

	rem = rem % 5;
	change = rem / 1;
	printf("1원: %d개 \n", change);

	return 0;
}
