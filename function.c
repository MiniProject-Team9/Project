#include "function.h"
void addFood(Food *s){//음식 추가 함수
  printf("음식 이름 : ");
  scanf("%[^\n]s",s->name);
  printf("음식 종류 : ");
  scanf("%s",s->type);
  printf("가격: ");
  scanf("%d",&s->price);
  s->step=0;
}
void readFood(Food s){//하나의 음식 정보 읽는 함수
  printf("%s %s %d %d\n",s.type,s.name,s.price,s.step);
}
void deleteFood(Food *s){
    int deleteok;
      printf("정말로 삭제하시겠습니까?(삭제 :1)");
      scanf("%d", &deleteok);
      if (deleteok == 1) {
        s->price=-1;
        printf("=> 삭제됨!\n");
      }
}
void updateFood(Food *s){//음식 정보 수정 함수
  printf("음식 이름: ");
  scanf("%[^\n]s",s->name);
  printf("음식 종류 : ");
  scanf("%s",s->type);
  printf("가격: ");
  scanf("%d",&s->price);

}
void listFood(Food *s[], int count){//전체 음식 정보를 읽는 함수
  printf("\n━━━━━━━━━⊱GRAIN's Menu ⊰━━━━━━━━\n");
  printf("NO 종류 음식이름  가격 맵기단계\n");
  for (int i = 0; i < count; i++) {
    if (s[i]->price == -1) continue;
    printf("%2d ", i + 1);
    readFood(*s[i]);
  }
  printf("\n");
}
int selectMenu(){//메뉴 호출 함수
  int menu;
  printf("\n •─────GRAIN_KIOSK─────•\n");
  printf("\n");
  printf("┊   1. 메뉴 조회       ┊\n");
  printf("┊   2. 메뉴 추가       ┊\n");
  printf("┊   3. 메뉴 수정       ┊\n");
  printf("┊   4. 메뉴 삭제       ┊\n");
  printf("┊   5. 파일 저장       ┊\n");
  printf("┊   6. 메뉴 이름 검색  ┊\n");
  printf("┊   7. 음식 종류 검색  ┊\n");
  printf("┊   8. 맵기 단계 조정  ┊\n");
  printf("┊   0. 종료            ┊\n");
  printf("\n •─────GRAIN_KIOSK─────•\n");
  printf("\n=> 원하는 메뉴는? ");
  scanf("%d", &menu);
  return menu;
}
int selectDateNo(Food *s[],int count){//음식 번호 선택 함수
int no;
  listFood(s, count);
  printf("번호는 (취소 :0)? ");
  scanf("%d", &no);
  return no;
}
void saveData(Food *s[],int count){//파일 저장 함수
  FILE *fp;
  int i=0;
  fp=fopen("Food.txt","wt");
  for(;i<count;i++){
    if(s[i] -> price == -1) continue;
    fprintf(fp,"%s %d %d %s\n",s[i]->type,s[i]->price,s[i]->step,s[i]->name);
  }
  fclose(fp);
  printf("저장됨!\n");

}
int loadData(Food *s[]){//파일 로드 함수
  FILE *fp;
  int i=0;
  fp=fopen("Food.txt","rt");
  if(fp==NULL){
    printf("\n=> 파일 없음\n");
    return 0;
  }
  for(;i<20;i++){
    s[i]=(Food *)malloc(sizeof(Food));
    fscanf(fp," %s",s[i]->type);
    if(feof(fp)) break;
    fscanf(fp," %d",&s[i]->price);
    fscanf(fp," %d",&s[i]->step);
    fscanf(fp,"%[^\n]s",s[i]->name);
  }
  fclose(fp);
  printf("=> 로딩 성공!\n");
  return i;
}
void searchName(Food *s[],int count){//음식 이름 검색 함수
  char tname[50];
  int check=0;
  printf("\n 검색할 음식은? ");
  scanf("%[^\n]s",tname);
  printf("\n━━━━━━━━━⊱GRAIN's Menu ⊰━━━━━━━━\n");
  printf("NO 종류 음식이름  가격 맵기단계\n");
  
  for(int i=0; i<count; i++){
    if(s[i]->price==-1) continue;
    if(strstr(s[i]->name,tname)){
      printf("%2d ",i+1);
      readFood(*s[i]);
      check++;
    }
    else if(strstr(s[i]->name,tname)){
      printf("%2d ",i+1);
      readFood(*s[i]);
      check++;
    }
  }
    if(check==0)printf("=> 검색 결과 없음\n");

}
void searchType(Food *s[],int count){//음식 종류 검색 함수
  char tname[50];
  int check=0;
  printf("\n 검색할 음식 종류는? ");
  scanf("%s",tname);
  printf("\n━━━━━━━━━⊱GRAIN's Menu ⊰━━━━━━━━\n");
  printf("NO 종류 음식이름  가격 맵기단계\n");
  for(int i=0; i<count; i++){
    if(s[i]->price==-1) continue;
    if(strstr(s[i]->type,tname)){
      printf("%2d ",i+1);
      readFood(*s[i]);
      check++;
    }
    else if(strstr(s[i]->type,tname)){
      printf("%2d ",i+1);
      readFood(*s[i]);
      check++;
    }
  }
    if(check==0)printf("=> 검색 결과 없음\n");

}
void setStep(Food *s[],int count){//맵기 단계를 설정하는 함수
  int a;
  printf("맵기 단계 설정할 메뉴를 고르세요!\n");
  int no=selectDateNo(s,count);
  printf("맵기 단계는(1,2,3) :");
  scanf("%d",&a);
  s[no-1]->step=a;
  printf("설정 되었습니다.\n"); 
}

