#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[30];//음식 이름
	char type[20];//음식 종류
	int step;// 음식 맵기 단계
	int price;//음식 가격
}Food;

void addFood(Food *s);//음식 추가 함수
void readFood(Food s);//하나의 음식 정보 읽는 함수
void updateFood(Food *s);//음식 수정 함수
void deleteFood(Food *s);//음식 정보 삭제 함수
void listFood(Food *s[], int count);//전체 음식 정보를 읽는 함수
int selectMenu();//메뉴 호출 함수
int selectDateNo(Food *s[],int count);//음식번호 선택 함수
void saveData(Food *s[],int count);//파일 저장 함수
int loadData(Food *s[]);//파일 로드 함수
void searchName(Food *s[],int count);//음식 이름 검색 함수
void searchType(Food *s[],int count);//음식 종류 검색 함수
void setstep(Food *s[],int count);//맵기 단계를 설정하는 함수

