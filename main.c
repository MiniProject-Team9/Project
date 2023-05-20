#include "function.h"

int main(){
	Food *f[20];
	int index =0,count=0;
	int menu;
	index=loadData(f);
	count=index;
	 while (1) {
    menu = selectMenu();
    getchar();
    if (menu == 0)
      break;
    if( menu==1 || menu==3||menu==4 ||menu==5||menu==6||menu==7||menu==8)
      if(count==0){
        printf("아래 번호 중 메뉴를 다시 선택해주세요.\n");
        continue;
      }
    if (menu == 1) {
      listFood(f, index);
    } 
    else if (menu == 2) {
      f[index] = (Food *)malloc(sizeof(Food));
      addFood(f[index++]);
      count++;
    }
    else if (menu == 3) {
      int no = selectDateNo(f, index);
      if (no == 0) {
        printf("=> 취소됨!\n");
        continue;
      }
      updateFood(f[no - 1]);
    } 
    else if (menu == 4) {
      int no = selectDateNo(f, index);
      if (no == 0) {
        printf("=> 취소됨!\n");
        continue;
      }
      deleteFood(f[no-1]);
      count--;
      
    }
    else if(menu==5){
      saveData(f,index);
    }else if(menu==6){
      searchName(f,index);
    }else if(menu==7){
      searchType(f,index);
    }else if(menu==8){
	    setstep(f,index);
    }
  }
  printf("종료됨!\n");
	return 0; 
}
