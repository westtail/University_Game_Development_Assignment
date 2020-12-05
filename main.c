#include <stdio.h>
#include "system.h"
int help;
int main(int argc, char* argv[]) {

        // SDL初期化
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        printf("failed to initialize SDL.\n");
    }

        /* ウインドウ */
    if( InitWindow() < 0 ){
        printf("failed to initWindow \n");
	} 
	int i=1;
	help =1;
    while( 0 < i ){ 
	if(help ==1){start1();}
	
	i =BBB();}
	SSSZ();
	i = 1;//ループ分のフラグ　１〜１６までで内容が変わる
	a1 = 0;//戦争コマンドのフラグ
	cop();
	syoki();
	sen();//城同士の線を描写
	cmand();//コマンドを描写
	territory(iA,iB,iC,iD,iE,iF,iG,iH,iI,iJ,iK);
	shiro();
	deta();
    while( 0 < i ){
	if(iA==2&&iB==2&&iC==2&&iD==2&&iE==2&&iF==2&&iG==2&&iH==2&&iI==2&&iJ==2&&iK==2)
	{ owari2();
	  SDL_Delay(2000);
	  i = 0;}
	if(iA==1&&iB==1&&iC==1&&iD==1&&iE==1&&iF==1&&iG==1&&iH==1&&iI==1&&iJ==1&&iK==1)
	{ owari();
	  SDL_Delay(3000);
	  i = 0;}
	if(tern ==11){ owari1();
	  			SDL_Delay(3000);
	 			 i = 0;}

	if( i== 4){ i = AI(i);
			territory(iA,iB,iC,iD,iE,iF,iG,iH,iI,iJ,iK);
			shiro();
	}
	else {
	i = AAA(i);//プレイヤーのコマンド

	if(i == 2){	
	 attack();
	}//　戦争コマンドを選択した時　i == 2

	if(i > 4){shironame(i);}//城の名前を描写
	if(help ==1){cop(); sen(); deta(); }//城の兵数を描写
	}

	//printf("%d\n",b);
	

	terndeta();//ターン数を表示
	okanedeta();//お金を表示
	if (help == 1){territory(iA,iB,iC,iD,iE,iF,iG,iH,iI,iJ,iK);}//勢力図の赤　青を描写
	if(help == 1){ shiro();}//城を描写
	SDL_Delay(2);
	
    }
	printf("a" );
DestroyWindow();
	printf("a" );
    SDL_Quit();

    return 0;
}
