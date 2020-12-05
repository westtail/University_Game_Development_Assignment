#include "system.h"
int sukoa;
int tern;
int okane;
int heitai;
int a1;
int iA;// 城の色
int iB;
int iC;
int iD;
int iE;
int iF;
int iG;
int iH;
int iI;
int iJ;
int iK;
int A; //兵数
int B;
int C;
int D;
int E;
int F;
int G;
int H;
int I;
int J;
int K;
int q;
void syoki(void){
	int s=0;
	srand(time(NULL));
	s = rand() % 11 + 1;
	tern = 1;

	if(s==1){iA = 1;	okane = 140;}
	else{iA=2;}
	if(s==2){iB = 1;	okane = 50;}
	else{iB=2;}
	if(s==3){iC = 1;	okane = 80;}
	else{iC=2;}
	if(s==4){iD = 1;	okane = 110;}
	else{iD=2;}
	if(s==5){iE = 1;	okane = 110;}
	else{iE=2;}
	if(s==6){iF = 1;	okane = 110;}
	else{iF=2;}
	if(s==7){iG = 1;	okane = 110;}
	else{iG=2;}
	if(s==8){iH = 1;	okane = 50;}
	else{iH=2;}
	if(s==9){iI = 1;	okane = 140;}
	else{iI=2;}
	if(s==10){iJ = 1;	okane = 80;}
	else{iJ=2;}
	if(s==11){iK = 1;	okane = 140;}
	else{iK=2;}
	 //printf("サイコロの出目 = %d \n", s);
	A = 60;
	B = 150;
	C = 120;
	D = 90;
	E = 90;
	F = 90;
	G = 90;
	H = 150;
	I = 60;
	J = 120;
	K = 60;
}
int BBB(void)
{	SDL_Event event;
   if(SDL_PollEvent(&event)){
     switch(event.type){
        case SDL_MOUSEBUTTONDOWN:   return 0;

}}	 return 1;}
int AAA(int a)
{  

	SDL_Event event;
   if(SDL_PollEvent(&event)){
     switch(event.type){
        case SDL_QUIT:  return 0;
	case SDL_MOUSEBUTTONDOWN:	//マウスをクリックした時
	if( a ==1 || 4 < a ){
// 攻めるとき
	if( 1100 >= event.button.x && 900 <= event.button.x && 70 >= 					event.button.y && 25 <= event.button.y ){SSS();	return 2;}
//徴兵するとき
	if( 1100 >= event.button.x && 900 <= event.button.x && 140 >= 					event.button.y && 95 <= event.button.y ){
	SSS();
	HHH();	
	if(okane <= 90){
	nookane();
	return 3;
	}

	else return 3;}
//ターン終了
	if( 1100 >= event.button.x && 900 <= event.button.x && 210 >= 					event.button.y && 165 <= event.button.y ){SSS();	return 4;}
///////////////////////////////城の兵を観る
	if( Ax1 >= event.button.x && Ax <= event.button.x && Ay1 >= 					event.button.y && Ay <= event.button.y ){
	heitai = A;
	return 5;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y ){
	heitai = B;	
	return 6;
	}
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y ){
	heitai = C;	
	return 7;
	}
	if( Dx1 >= event.button.x && Dx <= event.button.x && Dy1 >= 					event.button.y && Dy <= event.button.y ){
	heitai = D;	
	return 8;
	}
	if( Ex1 >= event.button.x && Ex <= event.button.x && Ey1 >= 					event.button.y && Ey <= event.button.y ){
	heitai = E;	
	return 9;
	}
	if( Fx1 >= event.button.x && Fx <= event.button.x && Fy1 >= 					event.button.y && Fy <= event.button.y ){
	heitai = F;	
	return 10;
	}	if( Gx1 >= event.button.x && Gx <= event.button.x && Gy1 >= 					event.button.y && Gy <= event.button.y ){
	heitai = G;	
	return 11;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y ){
	heitai = H;	
	return 12;
	}
	if( Ix1 >= event.button.x && Ix <= event.button.x && Iy1 >= 	
				event.button.y && Iy <= event.button.y ){
	heitai = I;	
	return 13;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y ){
	heitai = J;	
	return 14;
	}
	if( Kx1 >= event.button.x && Kx <= event.button.x && Ky1 >= 	
				event.button.y && Ky <= event.button.y ){
	heitai = K;	
	return 15;
	}
	}
	
// 攻めるとき
	if( a == 2){
	if( 1100 >= event.button.x && 800 <= event.button.x && 550 >= 					event.button.y && 500 <= event.button.y ){
	SSS();
	return 1;
	}
////////////////////////////////////攻める場所を指定
/////////A
	if(a1 == 1){	
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y && iB==2){
	iB = game(A,B);
					q=1;
					while( q > 0){
					q = heiZ(Ax,Ay,Bx,By,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iB == 1){ B = A - B;
				A = 0;
	}
	if(iB == 2){ A = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y && iC==2){
	iC = game(A,C);
					q=1;
					while( q > 0){
					q = heiZ(Ax,Ay,Cx,Cy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iC == 1){ C = A - C;
				A = 0;
	}
	if(iC == 2){ A = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
/////////////B
	if(a1 == 2){	
	if( Ax1 >= event.button.x && Ax <= event.button.x && Ay1 >= 					event.button.y && Ay <= event.button.y && iA==2){
	iA = game(B,A);
					q=1;
					while( q > 0){
					q = heiZ(Bx,By,Ax,Ay,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iA == 1){ A = B - A;
				B = 0;
	}
	if(iA == 2){ B = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y && iC==2){
	iC = game(B,C);
					q=1;
					while( q > 0){
					q = heiZ(Bx,By,Cx,Cy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iC == 1){ C = B - C;
				B = 0;
	}
	if(iC == 2){ B = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y && iJ==2){
	iJ = game(B,J);
					q=1;
					while( q > 0){
					q = heiZ(Bx,By,Jx,Jy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iJ == 1){ J = B - J;
				B = 0;
	}
	if(iJ == 2){ B = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Gx1 >= event.button.x && Gx <= event.button.x && Gy1 >= 					event.button.y && Gy <= event.button.y && iG==2){
	iG = game(B,G);
					q=1;
					while( q > 0){
					q = heiZ(Bx,By,Gx,Gy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iG == 1){ G = B - G;
				B = 0;
	}
	if(iG == 2){ B = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y && iH==2){
	iH = game(B,H);
					q=1;
					while( q > 0){
					q = heiZ(Bx,By,Hx,Hy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iH == 1){ H = B - H;
				B = 0;
	}
	if(iH == 2){ B = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
////////////////////C
	if(a1 == 3){	
	if( Ax1 >= event.button.x && Ax <= event.button.x && Ay1 >= 					event.button.y && Ay <= event.button.y && iA==2){
	iA = game(C,A);
					q=1;
					while( q > 0){
					q = heiZ(Cx,Cy,Ax,Ay,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iA == 1){ A = C - A;
				C = 0;
	}
	if(iA == 2){ C = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y && iB==2){
	iB = game(C,B);
					q=1;
					while( q > 0){
					q = heiZ(Cx,Cy,Bx,By,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iB == 1){ B = C - B;
				C = 0;
	}
	if(iB == 2){ C = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y && iJ==2){
	iJ= game(C,J);
					q=1;
					while( q > 0){
					q = heiZ(Cx,Cy,Jx,Jy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iJ == 1){ J = C - J;
				C = 0;
	}
	if(iJ == 2){ C = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Ex1 >= event.button.x && Ex <= event.button.x && Ey1 >= 					event.button.y && Ey <= event.button.y && iE==2){
	iE = game(C,E);
					q=1;
					while( q > 0){
					q = heiZ(Cx,Cy,Ex,Ey,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iE == 1){ E = C - E;
				C = 0;
	}
	if(iE == 2){ C = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
////////////////////D
	if(a1 == 4){	
	if( Fx1 >= event.button.x && Fx <= event.button.x && Fy1 >= 					event.button.y && Fy <= event.button.y && iF==2){
	iF = game(D,F);
					q=1;
					while( q > 0){
					q = heiZ(Dx,Dy,Fx,Fy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iF == 1){ F = D - F;
				D = 0;
	}
	if(iF == 2){ D = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Gx1 >= event.button.x && Gx <= event.button.x && Gy1 >= 					event.button.y && Gy <= event.button.y && iG==2){
	iG = game(D,G);
					q=1;
					while( q > 0){
					q = heiZ(Dx,Dy,Gx,Gy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iG == 1){ G = D - G;
				D = 0;
	}
	if(iG == 2){ D = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y&& iH==2){
	iH= game(D,H);
					q=1;
					while( q > 0){
					q = heiZ(Dx,Dy,Hx,Hy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iH == 1){ H = D - H;
				D = 0;
	}
	if(iH == 2){ D = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
///////////////////////////E
	if(a1 == 5){	
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y && iC==2){
	iC = game(E,C);
					q=1;
					while( q > 0){
					q = heiZ(Ex,Ey,Cx,Cy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iC == 1){ C = E - C;
				E = 0;
	}
	if(iC == 2){ E = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Ix1 >= event.button.x && Ix <= event.button.x && Iy1 >= 					event.button.y && Iy <= event.button.y && iI==2){
	iI = game(E,I);
					q=1;
					while( q > 0){
					q = heiZ(Ex,Ey,Ix,Iy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iI == 1){ I = E - I;
				E = 0;
	}
	if(iI == 2){ E = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y && iJ==2){
	iJ= game(E,J);
					q=1;
					while( q > 0){
					q = heiZ(Ex,Ey,Jx,Jy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iJ == 1){ J = E - J;
				E = 0;
	}
	if(iJ == 2){ E = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
///////////////////////////F
	if(a1 == 6){	
	if( Dx1 >= event.button.x && Dx <= event.button.x && Dy1 >= 					event.button.y && Dy <= event.button.y && iD==2){
	iD = game(F,D);
					q=1;
					while( q > 0){
					q = heiZ(Fx,Fy,Dx,Dy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iD == 1){ D = F - D;
				F = 0;
	}
	if(iD == 2){ F = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y && iH==2){
	iH = game(F,H);
					q=1;
					while( q > 0){
					q = heiZ(Fx,Fy,Hx,Hy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iH == 1){ H = F - H;
				F = 0;
	}
	if(iH == 2){ F = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Kx1 >= event.button.x && Kx <= event.button.x && Ky1 >= 					event.button.y && Ky <= event.button.y && iK==2){
	iK= game(F,K);
					q=1;
					while( q > 0){
					q = heiZ(Fx,Fy,Kx,Ky,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iK == 1){ K = F - K;
				F = 0;
	}
	if(iK == 2){ F = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
///////////////////////////G
	if(a1 == 7){	
	if( Dx1 >= event.button.x && Dx <= event.button.x && Dy1 >= 					event.button.y && Dy <= event.button.y && iD==2){
	iD = game(G,D);
					q=1;
					while( q > 0){
					q = heiZ(Gx,Gy,Dx,Dy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iD == 1){ D = G - D;
				G = 0;
	}
	if(iD == 2){ G = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y && iB==2){
	iB = game(G,B);
					q=1;
					while( q > 0){
					q = heiZ(Gx,Gy,Bx,By,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iB == 1){ B = G - B;
				G = 0;
	}
	if(iB == 2){ G = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y && iH==2){
	iH= game(G,H);
					q=1;
					while( q > 0){
					q = heiZ(Gx,Gy,Hx,Hy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iH == 1){ H = G - H;
				G = 0;
	}
	if(iH == 2){ G = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
///////////////////////////H
	if(a1 == 8){	
	if( Dx1 >= event.button.x && Dx <= event.button.x && Dy1 >= 					event.button.y && Dy <= event.button.y && iD==2){
	iD = game(H,D);
					q=1;
					while( q > 0){
					q = heiZ(Hx,Hy,Dx,Dy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iD == 1){ D = H - D;
				H = 0;
	}
	if(iD == 2){ H = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y && iB==2){
	iB = game(H,B);
					q=1;
					while( q > 0){
					q = heiZ(Hx,Hy,Bx,By,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iB == 1){ B = H - B;
				H = 0;
	}
	if(iB == 2){ H = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Fx1 >= event.button.x && Fx <= event.button.x && Fy1 >= 					event.button.y && Fy <= event.button.y && iF==2){
	iF= game(H,F);
					q=1;
					while( q > 0){
					q = heiZ(Hx,Hy,Fx,Fy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iF == 1){ F = H - F;
				H = 0;
	}
	if(iF == 2){ H = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Gx1 >= event.button.x && Gx <= event.button.x && Gy1 >= 					event.button.y && Gy <= event.button.y && iG==2){
	iG = game(H,G);
					q=1;
					while( q > 0){
					q = heiZ(Hx,Hy,Gx,Gy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iG == 1){ G = H - G;
				H = 0;
	}
	if(iG == 2){ H = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y && iJ==2){
	iJ = game(H,J);
					q=1;
					while( q > 0){
					q = heiZ(Hx,Hy,Jx,Jy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iJ == 1){ J = H - J;
				H = 0;
	}
	if(iJ == 2){ H = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
/////////////////////////// I
	if(a1 == 9){	
	if( Ex1 >= event.button.x && Ex <= event.button.x && Ey1 >= 					event.button.y && Ey <= event.button.y && iE==2){
	iE = game(I,E);
					q=1;
					while( q > 0){
					q = heiZ(Ix,Iy,Ex,Ey,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iE == 1){ E = I - E;
				I = 0;
	}
	if(iE == 2){ I = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Kx1 >= event.button.x && Kx <= event.button.x && Ky1 >= 					event.button.y && Ky <= event.button.y && iK==2){
	iK = game(I,K);
					q=1;
					while( q > 0){
					q = heiZ(Ix,Iy,Kx,Ky,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iK == 1){ K = I - K;
				I = 0;
	}
	if(iK == 2){ I = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
///////////////////////////J
	if(a1 == 10){	
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y && iC==2){
	iC = game(J,C);
					q=1;
					while( q > 0){
					q = heiZ(Jx,Jy,Cx,Cy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iC == 1){ C = J - C;
				J = 0;
	}
	if(iC == 2){ J = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y && iB==2){
	iB = game(J,B);
					q=1;
					while( q > 0){
					q = heiZ(Jx,Jy,Bx,By,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iB == 1){ B = J - B;
				J = 0;
	}
	if(iB == 2){ J = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Ex1 >= event.button.x && Ex <= event.button.x && Ey1 >= 					event.button.y && Ey <= event.button.y && iE==2){
	iE = game(J,E);
					q=1;
					while( q > 0){
					q = heiZ(Jx,Jy,Ex,Ey,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iE == 1){ E = J - E;
				J = 0;
	}
	if(iE == 2){ J = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y && iH==2){
	iH= game(J,H);
					q=1;
					while( q > 0){
					q = heiZ(Jx,Jy,Hx,Hy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iH == 1){ H = J - H;
				J = 0;
	}
	if(iH == 2){ J = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
/////////////////////////// K
	if(a1 == 11){	
	if( Ix1 >= event.button.x && Ix <= event.button.x && Iy1 >= 					event.button.y && Iy <= event.button.y && iI==2){
	iI = game(K,I);
					q=1;
					while( q > 0){
					q = heiZ(Kx,Ky,Ix,Iy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iI == 1){ I = K - I;
				K = 0;
	}
	if(iI == 2){ K = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	if( Fx1 >= event.button.x && Fx <= event.button.x && Fy1 >= 					event.button.y && Fy <= event.button.y && iF==2){
	iF = game(K,F);
					q=1;
					while( q > 0){
					q = heiZ(Kx,Ky,Fx,Fy,q);
					SDL_Delay(300);
					}
	a1 = 0;
	if(iF == 1){ F = K - F;
				K = 0;
	}
	if(iF == 2){ K = 0 ;}
	help = 1;
	SSS();
	return 1;
	}
	else return 2;
	}
/////////////////////////////////どこから攻めるか	
	if( Ax1 >= event.button.x && Ax <= event.button.x && Ay1 >= 					event.button.y && Ay <= event.button.y && iA==1 ){
	if( iA ==2){
	SSS();
	return 1;}
	a1 = 1;
	SSS();
 	return 2;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y && iB==1  ){
	if( iB ==2){
	SSS();
	return 1;}
	a1 = 2;
	SSS();
 	return 2;
	}
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y && iC==1 ){
	if( iC ==2){
	SSS();
	return 1;}
	a1 = 3;
	SSS();
 	return 2;
	}
	if( Dx1 >= event.button.x && Dx <= event.button.x && Dy1 >= 					event.button.y && Dy <= event.button.y && iD==1 ){
	if( iD ==2){
	SSS();
	return 1;}
	a1 = 4;
	SSS();
 	return 2;
	}
	if( Ex1 >= event.button.x && Ex <= event.button.x && Ey1 >= 					event.button.y && Ey <= event.button.y && iE==1 ){
	if( iE ==2){
	SSS();
	return 1;}
	a1 = 5;
	SSS();
 	return 2;
	}
	if( Fx1 >= event.button.x && Fx <= event.button.x && Fy1 >= 					event.button.y && Fy <= event.button.y && iF==1 ){
	if( iF ==2){
	SSS();
	return 1;}
	a1 = 6;
	SSS();
 	return 2;
	}
	if( Gx1 >= event.button.x && Gx <= event.button.x && Gy1 >= 					event.button.y && Gy <= event.button.y && iG==1 ){
	if( iG ==2){
	SSS();
	return 1;}
	a1 = 7;
	SSS();
 	return 2;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y && iH==1 ){
	if( iH ==2){
	SSS();
	return 1;}
	a1 = 8;
	SSS();
 	return 2;
	}
	if( Ix1 >= event.button.x && Ix <= event.button.x && Iy1 >= 					event.button.y && Iy <= event.button.y && iI==1 ){
	if( iI ==2){
	SSS();
	return 1;}
	a1 = 9;
	SSS();
 	return 2;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y && iJ==1 ){
	if( iJ ==2){
	SSS();
	return 1;}
	a1 = 10;
	SSS();
 	return 2;
	}
	if( Kx1 >= event.button.x && Kx <= event.button.x && Ky1 >= 					event.button.y && Ky <= event.button.y && iK==1 ){
	if( iK ==2){
	SSS();
	return 1;}
	a1 = 11;
	SSS();
 	return 2;
	}

	}
//////////////////////////////////////////徴兵するとき
	if( a == 3){
	if( 1100 >= event.button.x && 800 <= event.button.x && 550 >= 					event.button.y && 500 <= event.button.y ){
	SSS();
	return 1;
	}
	if( okane >= 100){
	if( Ax1 >= event.button.x && Ax <= event.button.x && Ay1 >= 					event.button.y && Ay <= event.button.y ){
	if( iA ==2){
	SSS();
	return 1;}
	A += 100;
	okane -=100;
	heitai = A;
	help =1;
	SSS();
	return 5;
	}
	if( Bx1 >= event.button.x && Bx <= event.button.x && By1 >= 					event.button.y && By <= event.button.y ){
	if( iB ==2){
	SSS();
	return 1;}
	B += 100;
	okane -=100;
	heitai = B;
	help =1;
	SSS();
	return 5;
	}
	if( Cx1 >= event.button.x && Cx <= event.button.x && Cy1 >= 					event.button.y && Cy <= event.button.y ){
	if( iC ==2){
	SSS();
	return 1;}
	C += 100;
	okane -=100;
	heitai = C;
	help =1;
	SSS();
	return 5;
	}
	if( Dx1 >= event.button.x && Dx <= event.button.x && Dy1 >= 					event.button.y && Dy <= event.button.y ){
	if( iD ==2){
	SSS();
	return 1;}
	D += 100;
	okane -=100;
	heitai = D;
	help =1;
	SSS();
	return 5;
	}
	if( Ex1 >= event.button.x && Ex <= event.button.x && Ey1 >= 					event.button.y && Ey <= event.button.y ){
	if( iE ==2){
	SSS();
	return 1;}
	E += 100;
	okane -=100;
	heitai = E;
	help =1;
	SSS();
	return 5;
	}
	if( Fx1 >= event.button.x && Fx <= event.button.x && Fy1 >= 					event.button.y && Fy <= event.button.y ){
	if( iF ==2){
	SSS();
	return 1;}
	F += 100;
	okane -=100;
	heitai = F;
	help =1;
	SSS();
	return 5;
	}
	if( Gx1 >= event.button.x && Gx <= event.button.x && Gy1 >= 					event.button.y && Gy <= event.button.y ){
	if( iG ==2){
	SSS();
	return 1;}
	G += 100;
	okane -=100;
	heitai = G;
	help =1;
	SSS();
	return 5;
	}
	if( Hx1 >= event.button.x && Hx <= event.button.x && Hy1 >= 					event.button.y && Hy <= event.button.y ){
	if( iH ==2){
	SSS();
	return 1;}
	H += 100;
	okane -=100;
	heitai = H;
	help =1;
	SSS();
	return 5;
	}
	if( Ix1 >= event.button.x && Ix <= event.button.x && Iy1 >= 	
				event.button.y && Iy <= event.button.y ){
	if( iI ==2){
	SSS();
	return 1;}
	I += 100;
	okane -=100;
	heitai = I;
	help =1;
	SSS();	
	return 5;
	}
	if( Jx1 >= event.button.x && Jx <= event.button.x && Jy1 >= 					event.button.y && Jy <= event.button.y ){
	if( iJ ==2){
	SSS();
	return 1;}
	J += 100;
	okane -=100;
	heitai = J;
	help =1;
	SSS();	
	return 5;
	}
	if( Kx1 >= event.button.x && Kx <= event.button.x && Ky1 >= 	
				event.button.y && Ky <= event.button.y ){
	if( iK ==2){
	SSS();
	return 1;}
	K += 100;
	okane -=100;
	heitai = K;
	help =1;
	SSS();	
	return 5;
	}
	}
	}//徴兵　
	      default:break;
     }

   }
	if(  -1 < a){ return a;}
return 1;
}


int OKANE(void)
{
	if( iA == 1){ okane += 60;}
	if( iB == 1){ okane += 150;}
	if( iC == 1){ okane += 120;}
	if( iD == 1){ okane += 90;}
	if( iE == 1){ okane += 90;}
	if( iF == 1){ okane += 90;}
	if( iG == 1){ okane += 90;}
	if( iH == 1){ okane += 150;}
	if( iI == 1){ okane += 60;}
	if( iJ == 1){ okane += 120;}
	if( iK == 1){ okane += 60;}

}

int game(int a,int b)
{	if( a >= b){  return 1;}
	if( a < b){  return 2;}
	
}


