#include <SDL/SDL.h>		// SDLを用いるために必要なファイルをインクルード
#include <SDL/SDL_image.h>	// gfxによる図形処理に必要なヘッダファイルをインクルード
#include <SDL/SDL_rotozoom.h>	//図形拡大に必要なファイルをインクルード
#include <SDL/SDL_gfxPrimitives.h>// gfxによる図形処理をするためファイルをインクルード
#include <SDL/SDL_ttf.h>	// TrueTypeフォントを表示するためにファイルをインクルード
#include "system.h"
static SDL_Surface *startimage;
static SDL_Surface *window;
static SDL_Surface *mapimage;
static SDL_Surface *shiroimage,*heiA,*heiB;
static TTF_Font *word,*word1,*word2;
static SDL_Surface *mesA,*mesB,*mesC,*mesD,*mesE,*mesF,*mesG,*mesH,*mesI,*mesJ,*mesK;
static SDL_Surface *image1,*image2,*image3,*image4,*image5,*imageA,*imageB,*imageC,*imageD,
*image6,*image7,*mes1,*mes2,*mes3;
static char *gMsgStr[4] = {"兵力%d","お金合計 %d","ターン %d","スコア %d"};
static char *ga[19] = {"0","1","2","3","4","今津城 収入60","徳島城 収入150","高原寺城 収入120","大西城 収入90","小仁宇城 収入90","三谷城 収入90","坂西城 収入90","内原城 収入150","日和佐城 収入60","中津野城 収入120","吉田城 収入60"};


int start1(void)
{    
    startimage = IMG_Load ("XX.png");
    startimage = zoomSurface(startimage, 1.0,0.7,1);
    SDL_Rect src_rect = {0,0,1200,900};
    SDL_Rect dst_rect = {0,0};
	SDL_BlitSurface(startimage, &src_rect, window, &dst_rect);
					SDL_Flip(window);
	help =0;

}
int cop(void)
{    
    SDL_Rect src_rect = {0,0,800,600};
    SDL_Rect dst_rect = {0,0};
	SDL_BlitSurface(mapimage, &src_rect, window, &dst_rect);

}
int InitWindow(void)
{

    if((window = SDL_SetVideoMode(1200, 600, 32, SDL_SWSURFACE)) == NULL) {
		printf("failed to initialize videomode.\n");
        return -1;
    }//window作成
    SDL_FillRect(window, NULL, SDL_MapRGB(window->format, 255,255,255));//色の作成
    mapimage = IMG_Load ("tokushima.png");// 地図の読み込み
    mapimage = zoomSurface(mapimage, 1.5,1.5,1);//地図をでかくする
    SDL_Rect src_rect = {0,0,800,600};
    SDL_Rect dst_rect = {0,0};
    SDL_BlitSurface(mapimage, &src_rect, window, &dst_rect);

    return 1;
}

	int hei(int x,int y,int x1, int y1,int q)
	{
	int a,b,c,d,e,f;
	a = (x + x1) /2;
	b = (y + y1) /2;
	c = (a + x) /2;
	d = (b + y) /2;
	e = (a + x1) /2;
	f = (b + y1) /2;

	heiA = IMG_Load ("hei1.png");
    	heiA = zoomSurface(heiA, 0.1,0.1,1);
	SDL_Rect src_rect = {0,0,800,600};
    	SDL_Rect dst_rect = {a,b};
    	SDL_Rect dst_rect1 = {c,d};
    	SDL_Rect dst_rect2 = {e,f};
    	if(q==2){SDL_BlitSurface(heiA, &src_rect, window, &dst_rect);	
	 SDL_Flip(window); return 3;}
    	if(q==1){SDL_BlitSurface(heiA, &src_rect, window, &dst_rect1);	 
	SDL_Flip(window);return 2;}
    	if(q==3){SDL_BlitSurface(heiA, &src_rect, window, &dst_rect2);	 
	SDL_Flip(window);return 0;}
	}
	
	int heiZ(int x,int y,int x1, int y1,int q)
	{
	int a,b,c,d,e,f;
	a = (x + x1) /2;
	b = (y + y1) /2;
	c = (a + x) /2;
	d = (b + y) /2;
	e = (a + x1) /2;
	f = (b + y1) /2;

	heiB = IMG_Load ("hei2.png");
    	heiB = zoomSurface(heiB, 0.15,0.15,1);
	SDL_Rect src_rect = {0,0,800,600};
    	SDL_Rect dst_rect = {a,b};
    	SDL_Rect dst_rect1 = {c,d};
    	SDL_Rect dst_rect2 = {e,f};
    	if(q==2){SDL_BlitSurface(heiB, &src_rect, window, &dst_rect);	
	 SDL_Flip(window); return 3;}
    	if(q==1){SDL_BlitSurface(heiB, &src_rect, window, &dst_rect1);	 
	SDL_Flip(window);return 2;}
    	if(q==3){SDL_BlitSurface(heiB, &src_rect, window, &dst_rect2);	 
	SDL_Flip(window);return 0;}
	}

	void cmand(void)
{	
	TTF_Init(); //TTFライブラリ初期化
	SDL_Color black = {0x00 , 0x00 , 0x00};//黒色にする
	rectangleColor(window, 900, 25, 1100, 70, 0x00ff00ff);//塗りつぶさない四角形
	rectangleColor(window, 900, 95, 1100, 140, 0x00ff00ff);//塗りつぶさない四角形
	rectangleColor(window, 900, 165, 1100, 210, 0x00ff00ff);//塗りつぶさない四角形
	word = TTF_OpenFont("kochi-gothic-subst.ttf", 40);//文字形式の読み込み
	image1 = TTF_RenderUTF8_Blended(word,"戦争",black );
	SDL_Rect asrc_rect = { 0 , 0, image1 -> w, image1 -> h };
	SDL_Rect adst_rect = { 950, 25};
	SDL_BlitSurface(image1, &asrc_rect, window, &adst_rect);
	image2 = TTF_RenderUTF8_Blended(word,"徴兵",black );
	SDL_Rect asrc_rect1 = { 0 , 0, image2 -> w, image2 -> h };
	SDL_Rect adst_rect1 = { 950, 100};
	SDL_BlitSurface(image2, &asrc_rect1, window, &adst_rect1);
	image3 = TTF_RenderUTF8_Blended(word,"ターン終了",black );
	SDL_Rect asrc_rect2 = { 0 , 0, image3 -> w, image3 -> h };
	SDL_Rect adst_rect2= { 900, 175};
	SDL_BlitSurface(image3, &asrc_rect2, window, &adst_rect2);
	word1 = TTF_OpenFont("kochi-gothic-subst.ttf",17);//文字形式の読み込み
	word2 = TTF_OpenFont("kochi-gothic-subst.ttf",80);//文字形式の読み込み
				SDL_Flip(window);
}

    void sen(void)
{
	thickLineColor( window, Dxc, Dyc, Fxc,Fyc, 10,0xff8800ff);
	thickLineColor( window, Dxc, Dyc, Hxc,Hyc, 10,0xff8800ff);
	thickLineColor( window, Bxc, Byc, Cxc,Cyc, 10,0xff8800ff);
	thickLineColor( window, Dxc, Dyc, Gxc,Gyc, 10,0xff8800ff);
	thickLineColor( window, Fxc, Fyc, Hxc,Hyc, 10,0xff8800ff);
	thickLineColor( window, Fxc, Fyc, Kxc,Kyc, 10,0xff8800ff);
	thickLineColor( window, Kxc, Kyc, Ixc,Iyc, 10,0xff8800ff);
	thickLineColor( window, Hxc, Hyc, Gxc,Gyc, 10,0xff8800ff);
	thickLineColor( window, Hxc, Hyc, Bxc,Byc, 10,0xff8800ff);
	thickLineColor( window, Hxc, Hyc, Jxc,Jyc, 10,0xff8800ff);
	thickLineColor( window, Ixc, Iyc, Exc,Eyc, 10,0xff8800ff);
	thickLineColor( window, Exc, Eyc, Jxc,Jyc, 10,0xff8800ff);
	thickLineColor( window, Exc, Eyc, Cxc,Cyc, 10,0xff8800ff);
	thickLineColor( window, Gxc, Gyc, Bxc,Byc, 10,0xff8800ff);
	thickLineColor( window, Jxc, Jyc, Bxc,Byc, 10,0xff8800ff);
	thickLineColor( window, Jxc, Jyc, Cxc,Cyc, 10,0xff8800ff);
	thickLineColor( window, Bxc, Byc, Axc,Ayc, 10,0xff8800ff);
	thickLineColor( window, Cxc, Cyc, Axc,Ayc, 10,0xff8800ff);

}

    void shiro(void)
{

    shiroimage = IMG_Load("shiro_1.png");
    shiroimage = zoomSurface(shiroimage, 0.2,0.2,1);
    SDL_Rect src_rect1 = {0,0,400,400};
    SDL_Rect dst_rect1 = {Ax,Ay};
    SDL_Rect dst_rect2 = {Bx,By};
    SDL_Rect dst_rect3 = {Cx,Cy};
    SDL_Rect dst_rect4 = {Dx,Dy};
    SDL_Rect dst_rect5 = {Ex,Ey};
    SDL_Rect dst_rect6 = {Fx,Fy};
    SDL_Rect dst_rect7 = {Gx,Gy};
    SDL_Rect dst_rect8 = {Hx,Hy};
    SDL_Rect dst_rect9 = {Ix,Iy};
    SDL_Rect dst_rect10 = {Jx,Jy};
    SDL_Rect dst_rect11 = {Kx,Ky};
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect1);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect2);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect3);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect4);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect5);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect6);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect7);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect8);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect9);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect10);
    SDL_BlitSurface(shiroimage, &src_rect1, window, &dst_rect11);

	help = 0;
}


int territory(int iA, int iB, int iC,int iD,int iE, int iF, int iG,int iH, int iI,int iJ,int iK)
{
 	if(iA==1){
	boxColor(window, Ax,Ay,Ax1,Ay1,0xff0000ff);
	}
 	if(iA==2){
	boxColor(window, Ax,Ay,Ax1,Ay1,0x0000ffff);
	}
 	if(iB==1){
	boxColor(window, Bx,By,Bx1,By1,0xff0000ff);
	}
 	if(iB==2){
	boxColor(window, Bx,By,Bx1,By1,0x0000ffff);
	}
 	if(iC==1){
	boxColor(window, Cx,Cy,Cx1,Cy1,0xff0000ff);
	}
 	if(iC==2){
	boxColor(window, Cx,Cy,Cx1,Cy1,0x0000ffff);
	}
 	if(iD==1){
	boxColor(window, Dx,Dy,Dx1,Dy1,0xff0000ff);
	}
 	if(iD==2){
	boxColor(window, Dx,Dy,Dx1,Dy1,0x0000ffff);
	}
 	if(iE==1){
	boxColor(window, Ex,Ey,Ex1,Ey1,0xff0000ff);
	}
 	if(iE==2){
	boxColor(window, Ex,Ey,Ex1,Ey1,0x0000ffff);
	}
 	if(iF==1){
	boxColor(window, Fx,Fy,Fx1,Fy1,0xff0000ff);
	}
 	if(iF==2){
	boxColor(window, Fx,Fy,Fx1,Fy1,0x0000ffff);
	}
 	if(iG==1){
	boxColor(window, Gx,Gy,Gx1,Gy1,0xff0000ff);
	}
 	if(iG==2){
	boxColor(window, Gx,Gy,Gx1,Gy1,0x0000ffff);
	}
 	if(iH==1){
	boxColor(window, Hx,Hy,Hx1,Hy1,0xff0000ff);
	}
 	if(iH==2){
	boxColor(window, Hx,Hy,Hx1,Hy1,0x0000ffff);
	}
 	if(iI==1){
	boxColor(window, Ix,Iy,Ix1,Iy1,0xff0000ff);
	}
 	if(iI==2){
	boxColor(window, Ix,Iy,Ix1,Iy1,0x0000ffff);
	}
 	if(iJ==1){
	boxColor(window, Jx,Jy,Jx1,Jy1,0xff0000ff);
	}
 	if(iJ==2){
	boxColor(window, Jx,Jy,Jx1,Jy1,0x0000ffff);
	}
 	if(iK==1){
	boxColor(window, Kx,Ky,Kx1,Ky1,0xff0000ff);
	}
 	if(iK==2){
	boxColor(window, Kx,Ky,Kx1,Ky1,0x0000ffff);
	}



    return 0;
}

	void  nookane(void)
{	
	SDL_Color black = {0x00 , 0x00 , 0x00};//黒色にする
	imageA = TTF_RenderUTF8_Blended(word,"お金がありません",black );
	SDL_Rect asrc_rect = { 0 , 0, imageA -> w, imageA -> h };
	SDL_Rect adst_rect = { 800,450, };
	SDL_BlitSurface(imageA, &asrc_rect, window, &adst_rect);
}
	void  attack(void)
{	

	SDL_Color black = {0x00 , 0x00 , 0x00};//黒色にする

	rectangleColor(window, 800, 500, 1130, 550, 0x00ff00ff);//塗りつぶさない四角形
	if(a1 == 0){
	image4 = TTF_RenderUTF8_Blended(word,"どこから攻めますか？",black );
	SDL_Rect asrc_rect = { 0 , 0, image4 -> w, image4 -> h };
	SDL_Rect adst_rect = { 800, 450};
	SDL_BlitSurface(image4, &asrc_rect, window, &adst_rect);
	image5 = TTF_RenderUTF8_Blended(word,"攻めるのをやめる",black );
	SDL_Rect asrc_rect1 = { 0 , 0, image5 -> w, image5 -> h };
	SDL_Rect adst_rect1 = { 800, 500};
	SDL_BlitSurface(image5, &asrc_rect1, window, &adst_rect1);
        SDL_FreeSurface(image4);
        SDL_FreeSurface(image5);
	}
	if (0 < a1){
	image6 = TTF_RenderUTF8_Blended(word,"どこを攻めますか？",black );
	SDL_Rect asrc_rect2 = { 0 , 0, image6 -> w, image6 -> h };
	SDL_Rect adst_rect2= { 800, 450};
	SDL_BlitSurface(image6, &asrc_rect2, window, &adst_rect2);
	image5 = TTF_RenderUTF8_Blended(word,"攻めるのをやめる",black );
	SDL_Rect asrc_rect1 = { 0 , 0, image5 -> w, image5 -> h };
	SDL_Rect adst_rect1 = { 800, 500};
	SDL_BlitSurface(image5, &asrc_rect1, window, &adst_rect1);
        SDL_FreeSurface(image5);
        SDL_FreeSurface(image6);
	}

}
	void HHH(void)
{	
	SDL_Color black = {0x00 , 0x00 , 0x00};//黒色にする
	rectangleColor(window, 800, 500, 1100, 550, 0x00ff00ff);//塗りつぶさない四角形
	image7 = TTF_RenderUTF8_Blended(word,"徴兵をやめる",black );
	SDL_Rect asrc_rect1 = { 0 , 0, image7 -> w, image7 -> h };
	SDL_Rect adst_rect1 = { 800, 500};
	SDL_BlitSurface(image7, &asrc_rect1, window, &adst_rect1);
        SDL_FreeSurface(image7);
}

	void owari(void)
{	
	boxColor(window, 300,200,900,280,0xffffffff);
	SDL_Color black = {0x00 , 0x00 , 0x00};//黒色にする
	imageB = TTF_RenderUTF8_Blended(word2,"徳島　統一！！",black );
	SDL_Rect asrc_rect1 = { 0 , 0, imageB -> w, imageB -> h };
	SDL_Rect adst_rect1 = { 300, 200};
	SDL_BlitSurface(imageB, &asrc_rect1, window, &adst_rect1);
        SDL_FreeSurface(imageB);
	SDL_Flip(window);
}
	void owari2(void)
{	
	boxColor(window, 300,200,900,280,0xffffffff);
	SDL_Color black = {0x00 , 0x00 , 0x00};//黒色にする
	imageD = TTF_RenderUTF8_Blended(word2,"統一ならず…",black );
	SDL_Rect asrc_rect1 = { 0 , 0, imageD -> w, imageD -> h };
	SDL_Rect adst_rect1 = { 300, 200};
	SDL_BlitSurface(imageD, &asrc_rect1, window, &adst_rect1);
        SDL_FreeSurface(imageD);
	SDL_Flip(window);
}


	void owari1(void)
{	sukoa = 0;
	if(iA==1){ sukoa +=300;}
	if(iB==1){ sukoa +=300;}
	if(iC==1){ sukoa +=300;}
	if(iD==1){ sukoa +=300;}	
	if(iE==1){ sukoa +=300;}
	if(iF==1){ sukoa +=300;}
	if(iG==1){ sukoa +=300;}
	if(iI==1){ sukoa +=300;}
	if(iJ==1){ sukoa +=300;}
	if(iK==1){ sukoa +=300;}
	sukoa +=okane;
	boxColor(window, 300,200,900,280,0xffffffff);
    	SDL_Color colB = {0,255,0};
	char title[ 64 ];
   	sprintf(title, gMsgStr[3], sukoa);
    	imageC = TTF_RenderUTF8_Blended(word2, title,colB );
	SDL_Rect asrc_rect1 = { 0 , 0, imageC -> w, imageC -> h };
	SDL_Rect adst_rect1 = { 300, 200};
	SDL_BlitSurface(imageC, &asrc_rect1, window, &adst_rect1);
        SDL_FreeSurface(imageC);
	SDL_Flip(window);
}


int deta(void){
	boxColor(window, Ax,Ay-18,Ax1+5,Ay-1,0xffffffff);
	boxColor(window, Bx,By-18,Bx1+5,By-1,0xffffffff);
	boxColor(window, Cx,Cy-18,Cx1+5,Cy-1,0xffffffff);
	boxColor(window, Dx,Dy-18,Dx1+5,Dy-1,0xffffffff);
	boxColor(window, Ex,Ey-18,Ex1+5,Ey-1,0xffffffff);
	boxColor(window, Fx,Fy-18,Fx1+5,Fy-1,0xffffffff);
	boxColor(window, Gx,Gy-18,Gx1+5,Gy-1,0xffffffff);
	boxColor(window, Hx,Hy-18,Hx1+5,Hy-1,0xffffffff);
	boxColor(window, Ix,Iy-18,Ix1+5,Iy-1,0xffffffff);
	boxColor(window, Jx,Jy-18,Jx1+5,Jy-1,0xffffffff);
	boxColor(window, Kx,Ky-18,Kx1+5,Ky-1,0xffffffff);


	SDL_Rect dst_rect1 = {Ax,Ay-18};
	SDL_Rect dst_rect2 = {Bx,By-18};
	SDL_Rect dst_rect3 = {Cx,Cy-18};
	SDL_Rect dst_rect4 = {Dx,Dy-18};
	SDL_Rect dst_rect5 = {Ex,Ey-18};
	SDL_Rect dst_rect6 = {Fx,Fy-18};
	SDL_Rect dst_rect7 = {Gx,Gy-18};
	SDL_Rect dst_rect8 = {Hx,Hy-18};
	SDL_Rect dst_rect9 = {Ix,Iy-18};
   	SDL_Rect dst_rect10 = {Jx,Jy-18};
   	SDL_Rect dst_rect11 = {Kx,Ky-18};
    	SDL_Color colB = {0,0,0};
	char title[ 64 ];
   	sprintf(title, gMsgStr[0], A);
    	mesA = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src1 = {0 , 0 , mesA -> w ,mesA -> h };
    	SDL_BlitSurface(mesA, &src1, window, &dst_rect1);

   	sprintf(title, gMsgStr[0], B);
    	mesB = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src2 = {0 , 0 , mesB -> w ,mesB -> h };
	SDL_BlitSurface(mesB, &src2, window, &dst_rect2);

   	sprintf(title, gMsgStr[0], C);
    	mesC = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src3 = {0 , 0 , mesC -> w ,mesC -> h };
	SDL_BlitSurface(mesC, &src3, window, &dst_rect3);

   	sprintf(title, gMsgStr[0], D);
    	mesD = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src4 = {0 , 0 , mesD -> w ,mesD -> h };
    	SDL_BlitSurface(mesD, &src4, window, &dst_rect4);

   	sprintf(title, gMsgStr[0], E);
    	mesE = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src5 = {0 , 0 , mesE -> w ,mesE -> h };
	SDL_BlitSurface(mesE, &src5, window, &dst_rect5);

   	sprintf(title, gMsgStr[0], F);
    	mesF = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src6 = {0 , 0 , mesF -> w ,mesF -> h };
	SDL_BlitSurface(mesF, &src6, window, &dst_rect6);

   	sprintf(title, gMsgStr[0], G);
    	mesG = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src7 = {0 , 0 , mesG -> w ,mesG -> h };
    	SDL_BlitSurface(mesG, &src7, window, &dst_rect7);

   	sprintf(title, gMsgStr[0], H);
    	mesH = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src8 = {0 , 0 , mesH -> w ,mesH -> h };
	SDL_BlitSurface(mesH, &src8, window, &dst_rect8);

   	sprintf(title, gMsgStr[0], I);
    	mesI = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src9 = {0 , 0 , mesI -> w ,mesI -> h };
	SDL_BlitSurface(mesI, &src9, window, &dst_rect9);

   	sprintf(title, gMsgStr[0], J);
    	mesJ = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src10 = {0 , 0 , mesJ -> w ,mesJ -> h };
	SDL_BlitSurface(mesJ, &src10, window, &dst_rect10);

   	sprintf(title, gMsgStr[0], K);
    	mesK = TTF_RenderUTF8_Blended(word1, title,colB );
        SDL_Rect src11 = {0 , 0 , mesK -> w ,mesK -> h };
	SDL_BlitSurface(mesK, &src11, window, &dst_rect11);



}
int okanedeta(void){
	boxColor(window, 900,370,1200,420,0xffffffff);
    	SDL_Color colB = {0,255,0};
	char title[ 64 ];
   	sprintf(title, gMsgStr[1], okane);
    	mes2 = TTF_RenderUTF8_Blended(word, title,colB );
        SDL_Rect src = {0 , 0 , mes2 -> w ,mes2 -> h };
        SDL_Rect dst = {900, 370};
	SDL_BlitSurface(mes2, &src, window, &dst);
        SDL_FreeSurface(mes2);
	SDL_Flip(window);

}

int terndeta(void){
	boxColor(window, 0,0,400,100,0xffffffff);
    	SDL_Color colB = {0,255,0};
	char title[ 64 ];
   	sprintf(title, gMsgStr[2], tern);
    	mes3 = TTF_RenderUTF8_Blended(word, title,colB );
        SDL_Rect src = {0 , 0 , mes3 -> w ,mes3 -> h };
        SDL_Rect dst = {0, 0};
	SDL_BlitSurface(mes3, &src, window, &dst);
        SDL_FreeSurface(mes3);

}

int shironame(int i){
	boxColor(window, 850,230,1200,300,0xffffffff);
    	SDL_Color colB = {0,255,0};
    	mes1 = TTF_RenderUTF8_Blended(word, ga[i],colB );
        SDL_Rect src = {0 , 0 , mes1 -> w ,mes1 -> h };
        SDL_Rect dst = {850, 230};
	SDL_BlitSurface(mes1, &src, window, &dst);
        SDL_FreeSurface(mes1);


}
	int DestroyWindow(void)
{

	SDL_FreeSurface(window);
	SDL_FreeSurface(mapimage);
	SDL_FreeSurface(shiroimage);
	TTF_CloseFont(word);
	TTF_CloseFont(word1);
	TTF_CloseFont(word2);
	SDL_FreeSurface(image1);
	SDL_FreeSurface(image2);
	SDL_FreeSurface(image3);

	SDL_FreeSurface(imageA);


	TTF_Quit();
}

void SSS(void)
{
	boxColor(window, 700,400,1200,600,0xffffffff);
}
void SSSZ(void)
{
	boxColor(window, 0,0,1200,600,0xffffffff);
}
