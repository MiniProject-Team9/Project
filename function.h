#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[30];//제품 이름
	char type[20];//제품 종류
	int step;
	int price;//제품 가격
}Food;

void addFood(Food *s);//제품 추가 함수
void readFood(Food s);//하나의 제품 정보 읽는 함수
void updateFood(Food *s);//제품 수정 함수
void listFood(Food *s[], int count);//전체 제품 정보를 읽는 함수
int selectMenu();//메뉴 호출 함수
int selectDateNo(Food *s[],int count);//제품번호 선택 함수
void saveData(Food *s[],int count);//파일 저장 함수
int loadData(Food *s[]);//파일 로드 함수
void searchName(Food *s[],int count);//제품 이름 찾는 함수
void searchType(Food *s[],int count);//제품 이름 찾는 함수
void setstep(Food *s[],int count);//맵기 단계를 설정하는 함수

