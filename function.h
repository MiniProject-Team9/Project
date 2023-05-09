#include <stdio.h>
#include <string.h>

typedef struct{
	char name[30];//제품 이름
	char kind[20];//제품 종류
	int price;
	int step=0;//맵기 단계
}Product;
