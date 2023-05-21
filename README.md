<img src=food-g8bdad39a1_1920.jpg />

# 🌾GRAIN KIOSK 주제
관리자가 음식점 키오스크 데이터베이스를 관리하는 프로그램

# 🌾GRAIN KIOSK 에 대한 소개
- 많은 메뉴를 간편하게 정리해주는 GRAIN KIOSK 입니다.
- 간단한 번호입력으로 음식 종류별로 분류해줍니다.

# 🌾GRAIN KIOSK가 가지고 있는 대략적인 기능 설명
- 기본 CRUD 기능과 파일 저장 및 로드 기능
- 음식 이름 검색 기능
- 음식 종류 검색 기능 
- 맵기 단계 표현 기능

# 🌾GRAIN KIOSK CRUD
> 코드 및 기능
```c
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

```


# 🌾개발환경 및 언어
- git
- vs code

# 🌾팀소개 및 팀원이 맡은 역할
## 팀원
 ### 송민영 [minyoung10 Github Link](https://github.com/minyoung10)
  - Repo Owner
  - WIKI 관리
  - 부가 기능 구현
  - 코드 관리 (오류수정)

 ### 류정현 [poly0112 Github Link](https://github.com/poly0112)
  - Contributer
  - CRUD 구현
  - 부가 기능 구현
