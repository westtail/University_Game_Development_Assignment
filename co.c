#include "system.h"
#include <stdlib.h>
#include <time.h> 
int a;
int b;
int s;
int AI(int i){
	int q;
	srand(time(NULL));
	s = rand() % 4 + 1;
	if(tern >=3){
	if(iA == 1){
	if(A >= B-100 && iB ==2 ){ B += 50;}
	if(A >= C-100	&& iC ==2 ){ C += 50;}
	}
	if(iB == 1){
	if(B >= C -100 &&iC == 2 ){ C += 50;}
	if(B >= J - 100 && iJ == 2){ J += 50;}
	if(B >= G - 100 && iG== 2){ G += 50;}
	if(B >= H -100 && iH == 2){ H += 50;}
	
	}
	if(iC == 1){
	if(C >= E -200 && iE == 2){ E += 50;}
	if(C >= J -200  && iJ == 2){ J += 50;}
	if(C >= B -100 && iB ==2 ){ B += 50;}

	}
	if(iD == 1){
	if(D >= F -200 && iF ==2){ F += 50;}
	if(D >= G -200 && iG == 2){ G += 50;}	
	if(D >= H -200 && iH == 2){ H += 50;}
	}
	if(iE == 1){
	if(E >= C -200 &&iC ==2){ C += 50;}	
	if(E >= I -200 && iI ==2){ I += 50;}	
	if(E >= J -200 && iJ == 2){ J += 50;}
	}
	if(iF == 1){
	if(F >= D -200 && iD == 2){ D += 50;}
	if(F >= H -200 && iH ==2){ H += 50;}
	if(F >= K -200 && iK ==2){ K += 50;}
	}
	if(iG == 1){
	if(G >= B -200 && iB ==2){ B += 50;}
	if(G >= H -200 && iH ==2){ H += 50;}
	if(G >= D -200 && iD ==2){ D += 50;}
	}
	if(iH == 1){
	if(H >= B -200 && iB ==2){ B += 50;}
	if(H >= D -200 && iD ==2){ D += 50;}
	if(H >= F -200 && iF ==2){ F += 50;}
	if(H >= G -200 && iG ==2){ G += 50;}
	if(H >= J -200 && iJ ==2){ J += 50;}

	}
	if(iI == 1){
	if(I >= E -200 && iE ==2){ E += 50;}
	if(I >= K -200 && iK ==2){ K += 50;}
	}
	if(iJ == 1){
	if(J >= B -200 && iB ==2){ B += 50;}
	if(J >= C -200 && iC ==2){ C += 50;}
	if(J >= E -200 && iE ==2){ E += 50;}
	if(J >= H -200 && iH ==2){ H += 50;}
	}
	if(iK == 1){
	if(K >= F -200 && iK==2){ K += 50;}
	if(K >= I -200 && iI ==2){ I += 50;}
	}
	}

	
	if( iA == 1){if(iB==2||iC==2){ a = A; }}
	if( iB == 1){ if( B > a){if(iA==2||iC==2||iJ==2||iG==2||iH==2){ a = B;}} 
			  }
	if( iC == 1){ if( C > a){if(iA==2||iB==2||iJ==2||iE==2){ a = C;}} 
			  }
	if( iD == 1){ if( D > a){if(iG==2||iH==2||iF==2){ a = D;}} 
			  }
	if( iE == 1){ if( E > a){if(iJ==2||iC==2||iI==2){ a = E;}} 
			  }
	if( iF == 1){ if( F > a){if(iD==2||iF==2||iK==2){ a = F;}} 
			  }
	if( iG == 1){ if( G > a){if(iB==2||iD==2||iH==2){ a = G;}} 
			  }
	if( iH == 1){ if( H > a){if(iD==2||iF==2||iJ==2||iB==2||iG==2){ a = H;}} 
			  }
	if( iI == 1){ if( I > a){if(iK==2||iE==2){ a = I;}} 
			 }
	if( iJ == 1){ if( J > a){if(iH==2||iB==2||iE==2||iC==2){ a = J;}} 
			  }
	if( iK == 1){ if( K > a){if(iF==2||iI==2){ a = K;}} 
			  }
	b = 0;
	if( iA == 1){ if( A > b && a >= A){if(iB==2||iC==2){ b = A; }}}
	if( iB == 1){ if( B > b && a >=B){if(iA==2||iC==2||iJ==2||iG==2||iH==2){ b = B;}} 
			  }
	if( iC == 1){ if( C > b && a >= C ){if(iA==2||iB==2||iJ==2||iE==2){ b = C;}} 
			  }
	if( iD == 1){ if( D > b && a >= D){if(iG==2||iH==2||iF==2){ b = D;}} 
			  }
	if( iE == 1){ if( E > b && a >= E){if(iJ==2||iC==2||iI==2){ b = E;}} 
			  }
	if( iF == 1){ if( F > b && a >= F){if(iD==2||iF==2||iK==2){ b = F;}} 
			  }
	if( iG == 1){ if( G > b && a >= G){if(iB==2||iD==2||iH==2){ b = G;}} 
			  }
	if( iH == 1){ if( H > b && a >= H){if(iD==2||iF==2||iJ==2||iB==2||iG==2){ b = H;}} 
			  }
	if( iI == 1){ if( I > b && a >= I){if(iK==2||iE==2){ b = I;}} 
			 }
	if( iJ == 1){ if( J > b && a >= J){if(iH==2||iB==2||iE==2||iC==2){ b = J;}} 
			  }
	if( iK == 1){ if( K > b && a >= K){if(iF==2||iI==2){ b = K;}} 
			  }
			



	if( A == a){if(iB == 2 && iC == 2){ C +=50; B+=50;}
			 if(iB == 2 && iC ==1){ B +=100;}
			 if(iB == 1 && iC ==2){ C +=100;} 
			}

	if( B == a){if(iB == 1 && iG == 1){ H += 100; }
			 if(iB == 1 && iC ==1){ J += 100;}
			 if(iB == 1 && iJ ==1){ H +=100;}
			 if(iB == 1 && iH ==1){ if( iG==2){G +=100;}
							    if( iJ ==2){ J +=100;}
			}
			 if(iG ==2 && iH ==2 && iJ ==2){if( s == 1){ G +=50;}
									   if( s == 2){ H +=50;}
									   if( s == 3){ J += 50;}
			}
			}

	if( C == a){if(iC == 1 && iB == 1){ J += 100; }
			 if(iC == 1 && iJ ==1 && iB==2){ B += 50;}
			 if(iC == 1 && iJ ==1 && iE==2){ E += 50;}
			 if(iB ==2 && iJ ==2 ){if( s == 1){ B += 50;}
							  if( s == 2){ J += 50;}
							  if( s == 3){ J += 50; B += 50;}
			}
			}

	if( H == a){if(iH == 1 && iB == 1 && iJ==2){ J += 100; }
			 if(iH == 1 && iB ==1 && iG ==2){ G += 100;}
			 if(iH == 1 && iJ ==1 && iB ==2){ B += 100;}
			 if(iH == 1 && iD ==1 && iF ==2){ F += 100;}
			 if(iH == 1 && iF ==1 && iD ==2){ D += 100;}
			 if(iH == 1 && iG ==1&& iB == 2){ B += 100;}
			 if(iF ==2 && iG ==2 && iJ ==2 && iD ==2  ){if( s == 1){ G +=50;}
									   if( s == 2){ J +=50;}
									   if( s == 3){ F += 50;}
									   if( s == 4){ D +=50;}
			}
			if(iF==2 && iD ==2){if(s ==1){ F +=50;}
							if(s == 2){D +=50;}
							if(s ==3){ F+=30; D+=30;}
			}
			}

	if( J == a){if(iJ == 1 && iC == 1 && iB==2){ B += 100; }
			 if(iJ == 1 && iB ==1 && iC ==2){ C += 100;}
			 if(iJ == 1 && iC ==1 && iE ==2){ E += 100;}
			 if(iJ == 1 && iB ==1 && iH ==2){H += 100;}
			 if(iJ == 1 && iG ==1&& iB == 2){ B += 100;}
			 if(iE ==2 && iH ==2 ){if( s == 1){ E +=100;}
							   if( s == 2){ H +=100;}
							   if( s == 3){ E += 50; H +=50;}
			}
			}

	if( G == a){if(iG == 1 && iB == 1 && iH==2){ H += 100; }
			 if(iG == 1 && iH ==1 && iB ==2){ B += 100;}
			 if(iD ==2 && iH ==2 ){if( s == 1){ D +=100;}
							   if( s == 2){ H +=100;}
							   if( s == 3){ D += 50; H +=50;}
			}
			}
	if( E == a){if(iE == 1 && iJ == 2 && iI==1){ J += 100; }
			 if(iE == 1 && iI ==2 && iJ ==1){ I += 100;}
			 if(iE == 1 && iJ ==1 && iC ==2){ C += 100;}
			 if(iJ ==2 && iI ==2 ){if( s == 1){ J +=100;}
							   if( s == 2){ I +=100;}
							   if( s == 3){ J += 50; I +=50;}
			}
			}
	if( F == a){if(iF == 1 && iH == 1 && iD==2){ D += 100; }
			 if(iF == 1 && iH ==1 && iH ==2){ B += 100;}
			 if(iF == 1 && iD ==1 && iH ==2){ H += 100;}
			 if(iF == 1 && iK ==1 && iH ==2){ H += 100;}
			 if(iD ==2 && iH ==2 ){if( s == 1){ D +=100;}
							   if( s == 2){ H +=100;}
							   if( s == 3){ D += 50; H +=50;}
			}
			}
	if( D == a){if(iD == 1 && iG == 2 ){ G += 100; }
			 if(iD == 1 && iF ==2 ){ F += 100;}
			 if(iF ==2 && iG ==2 ){if( s == 1){ F +=100;}
							   if( s == 2){ G +=100;}
							   if( s == 3){ F += 50; G +=50;}
			}
			}
	if( K == a){if(iK == 1 && iF == 2 ){ F += 100; }
			 if(iK == 1 && iI ==2 ){ I += 100;}
			 if(iF ==2 && iI ==2 ){if( s == 1){ F +=50;}
							   if( s == 2){ I +=50;}
							   if( s == 3){ F += 50; I +=50;}
			}
			}
	if( I == a){if(iI == 1 && iE == 2 ){ E += 100; }
			 if(iI == 1 && iK ==2 ){ K += 100;}
			 if(iE ==2 && iK ==2 ){if( s == 1){ E +=100;}
							   if( s == 2){ K +=100;}
							   if( s == 3){ E += 50; K +=50;}
			}
			}
	deta();
	if(tern >= 3){ 

		if(A == b){if( iB==2 && B > A  &&iA==1 ){ 	iA= game( A,B); 
					q=1;
					while( q > 0){
					q = hei(Bx,By,Ax,Ay,q);
					SDL_Delay(700);
					}
								if(iA== 1){ B= 0;}
								if(iA== 2){ A= B- A;
								B= 100;}
							}
				}
		if(A == b){if( iC==2 && C > A  &&iA==1 ){ 	iA= game( A,C); 
					q=1;
					while( q > 0){
					q = hei(Cx,Cy,Ax,Ay,q);
					SDL_Delay(700);
					}
								if(iA== 1){ C= 0;}
								if(iA== 2){ A= C- A;
								C= 100;}
							}
				}

		if( C == b){if( iJ==2 && J > C  &&iC==1){ 	iC= game( C,J); 
					q=1;
					while( q > 0){
					q = hei(Jx,Jy,Cx,Cy,q);
					SDL_Delay(700);
					}
								if(iC== 1){ J= 0;}
								if(iC== 2){ C= J- C;
								J= 100;}
							}
				} 

		if( C == b){if(iC==1 && iE==2 && E > C  ){ 	iC= game( C,E); 
					q=1;
					while( q > 0){
					q = hei(Ex,Ey,Cx,Cy,q);
					SDL_Delay(700);
					}
								if(iC== 1){ E= 0;}
								if(iC== 2){ C= E- C;
								E= 100;}
							}
				} 
		if( C == b){if(iC==1 && iA==2 && A > C ){ 	iC= game( C,A); 
					q=1;
					while( q > 0){
					q = hei(Ax,Ay,Cx,Cy,q);
					SDL_Delay(700);
					}
								if(iC== 1){ A= 0;}
								if(iC== 2){ C= A- C;
								A= 100;}
							}
				} 
		if( C == b){if(iC==1 && iB==2 && B > C ){ 	iC= game( C,B); 
					q=1;
					while( q > 0){
					q = hei(Bx,By,Cx,Cy,q);
					SDL_Delay(700);
					}
								if(iC== 1){ B= 0;}
								if(iC== 2){ C= B- C;
								B= 100;}
							}
				} 
		if( B == b){if( iH==2 && H > B  &&iB==1){ 	iB= game( B,H); 
					q=1;
					while( q > 0){
					q = hei(Hx,Hy,Bx,By,q);
					SDL_Delay(700);
					}
								if(iB== 1){ H= 0;}
								if(iB== 2){ B= H- B;
								H= 100;}
							}
				}
		if( B == b){if(iB==1 && iG==2 && G > B ){ 	iB= game( B,G); 
					q=1;
					while( q > 0){
					q = hei(Gx,Gy,Bx,By,q);
					SDL_Delay(700);
					}
								if(iB== 1){ G= 0;}
								if(iB== 2){ B= G- B;
								G= 100;}
							}
				}
		if( B == b){if(iB==1 && iC==2 && C > B ){ 	iB= game( B,C); 
					q=1;
					while( q > 0){
					q = hei(Cx,Cy,Bx,By,q);
					SDL_Delay(700);
					}
								if(iB== 1){ C= 0;}
								if(iB== 2){ B= C- B;
								C= 100;}
							}
				}
		if( B == b){if(iB==1 && iA==2 && A > B ){ 	iB= game( B,A); 
					q=1;
					while( q > 0){
					q = hei(Ax,Ay,Bx,By,q);
					SDL_Delay(700);
					}
								if(iB== 1){ A= 0;}
								if(iB== 2){ B= A- B;
								A= 100;}
							}
				}
		if( B == b){if(iB==1 && iJ==2 && J > B ){ 	iB= game( B,J); 
					q=1;
					while( q > 0){
					q = hei(Jx,Jy,Bx,By,q);
					SDL_Delay(700);
					}
								if(iB== 1){ J= 0;}
								if(iB== 2){ B= J- B;
								J= 100;}
							}
				}
		if( J == b){if( iE==2 && E > J  &&iJ==1){ 	iJ= game( J,E); 
					q=1;
					while( q > 0){
					q = hei(Ex,Ey,Jx,Jy,q);
					SDL_Delay(700);
					}
								if(iJ== 1){ E= 0;}
								if(iJ== 2){ J= E- J;
								E= 100;}
							}
				}
		if( J == b){if( iC==2 && C > J  &&iJ==1){ 	iJ= game( J,C); 
					q=1;
					while( q > 0){
					q = hei(Cx,Cy,Jx,Jy,q);
					SDL_Delay(700);
					}
								if(iJ== 1){ C= 0;}
								if(iJ== 2){ J= C- J;
								C= 100;}
							}
				}
		if( J == b){if( iB==2 && B > J  &&iJ==1){ 	iJ= game( J,B); 
					q=1;
					while( q > 0){
					q = hei(Bx,By,Jx,Jy,q);
					SDL_Delay(700);
					}
								if(iJ== 1){ B= 0;}
								if(iJ== 2){ J= B- J;
								B= 100;}
							}
				}
		if( J == b){if( iB==2 && H > J  &&iJ==1){ 	iJ= game( J,H); 
					q=1;
					while( q > 0){
					q = hei(Hx,Hy,Jx,Jy,q);
					SDL_Delay(700);
					}
								if(iJ== 1){ H= 0;}
								if(iJ== 2){ J= H- J;
								H= 100;}
							}
				}
		if( H == b){if( iF==2 && F > H  &&iH==1 ){ 	iH= game( H,F); 
					q=1;
					while( q > 0){
					q = hei(Fx,Fy,Hx,Hy,q);
					SDL_Delay(700);
					}
								if(iH== 1){ F= 0;}
								if(iH== 2){ H= F- H;
								F= 100;}
							}
				}
		if( H == b){if( iH==1&&iD==2 && D > H  ){ 	iH= game( H,D); 					
					q=1;
					while( q > 0){
					q = hei(Dx,Dy,Hx,Hy,q);
					SDL_Delay(700);
					}
								if(iH== 1){ D= 0;}
								if(iH== 2){ H= D- H;
								D= 100;}
							}
				}
		if( H == b){if( iB==2 && B > H  &&iH==1){ 	iH= game( H,B); 
					q=1;
					while( q > 0){
					q = hei(Bx,By,Hx,Hy,q);
					SDL_Delay(700);
					}
								if(iH== 1){ B= 0;}
								if(iH== 2){ H= B- H;
								B= 100;}
							}
				}
		if( H == b){if( iH==1&&iG==2 && G > H  ){ 	iH= game( H,G); 					q=1;
					while( q > 0){
					q = hei(Gx,Gy,Hx,Hy,q);
					SDL_Delay(700);
					}
								if(iH== 1){ G= 0;}
								if(iH== 2){ H= G- H;
								G= 100;}
							}
				}
		if( H == b){if( iH==1&&iJ==2 && J > H  ){ 	iH= game( H,J); 					q=1;
					while( q > 0){
					q = hei(Jx,Jy,Hx,Hy,q);
					SDL_Delay(700);
					}
								if(iH== 1){ J= 0;}
								if(iH== 2){ H= J- H;
								J= 100;}
							}
				}
		if( G == b){if( iD==2 && D > G &&iG==1 ){ 	iG= game( G,D); 
					q=1;
					while( q > 0){
					q = hei(Dx,Dy,Gx,Gy,q);
					SDL_Delay(700);
					}
								if(iG== 1){ D= 0;}
								if(iG== 2){ G= D- G;
								D= 100;}
							}
				}
		if( G == b){if( iB==2 && B > G &&iG==1){ 	iG= game( G,B); 
					q=1;
					while( q > 0){
					q = hei(Bx,By,Gx,Gy,q);
					SDL_Delay(700);
					}
								if(iG== 1){ B= 0;}
								if(iG== 2){ G= B- G;
								B= 100;}
							}
				}
		if( G == b){if( iB==2 && H > G &&iG==1){ 	iG= game( G,H); 
					q=1;
					while( q > 0){
					q = hei(Hx,Hy,Gx,Gy,q);
					SDL_Delay(700);
					}
								if(iG== 1){ H= 0;}
								if(iG== 2){ G= H- G;
								H= 100;}
							}
				}
		if( D == b){if( iF==2 && F > D &&iD==1 ){ 	iD= game( D,F); 
					q=1;
					while( q > 0){
					q = hei(Fx,Fy,Dx,Dy,q);
					SDL_Delay(700);
					}
								if(iD== 1){ F = 0;}
								if(iD== 2){ D= F - D;
								F= 100;}
							}
				}
		if( D == b){if( iG==2 && G > D &&iD==1){ 	iD= game( D,G); 
					q=1;
					while( q > 0){
					q = hei(Gx,Gy,Dx,Dy,q);
					SDL_Delay(700);
					}
								if(iD== 1){ G = 0;}
								if(iD== 2){ D= G - D;
								G= 100;}
							}
				}
		if( D == b){if( iG==2 && H > D &&iD==1){ 	iD= game( D,H); 
					q=1;
					while( q > 0){
					q = hei(Hx,Hy,Dx,Dy,q);
					SDL_Delay(700);
					}
								if(iD== 1){ H = 0;}
								if(iD== 2){ D= H - D;
								H= 100;}
							}
				}
		if( F == b){if( iK==2 && K > F &&iF==1 ){ 	iF= game( F,K); 
					q=1;
					while( q > 0){
					q = hei(Kx,Ky,Fx,Fy,q);
					SDL_Delay(700);
					}
								if(iF== 1){ K= 0;}
								if(iF== 2){ F= K- F;
								K= 100;}
							}
				}
		if( F == b){if( iD==2 && D > F &&iF==1 ){ 	iF= game( F,D); 
					q=1;
					while( q > 0){
					q = hei(Dx,Dy,Fx,Fy,q);
					SDL_Delay(700);
					}
								if(iF== 1){ D= 0;}
								if(iF== 2){ F= D- F;
								D= 100;}
							}
				}
		if( F == b){if( iF==2 && H > F &&iF==1 ){ 	iF= game( F,H); 
					q=1;
					while( q > 0){
					q = hei(Hx,Hy,Fx,Fy,q);
					SDL_Delay(700);
					}
								if(iF== 1){ H= 0;}
								if(iF== 2){ F= H- F;
								H= 100;}
							}
				}
		if( E == b){if( iI==2 && I > E &&iE==1){ 	iE= game( E,I); 
					q=1;
					while( q > 0){
					q = hei(Ix,Iy,Ex,Ey,q);
					SDL_Delay(700);
					}
								if(iE== 1){ I= 0;}
								if(iE== 2){ E= I- E;
								I= 100;}
							}
				}
		if( E == b){if( iJ==2 && J > E &&iE==1){ 	iE= game( E,J); 
					q=1;
					while( q > 0){
					q = hei(Jx,Jy,Ex,Ey,q);
					SDL_Delay(700);
					}
								if(iE== 1){ J= 0;}
								if(iE== 2){ E= J- E;
								J= 100;}
							}
				}
		if( E == b){if( iC==2 && C > E &&iE==1 ){ 	iE= game( E,C); 
					q=1;
					while( q > 0){
					q = hei(Cx,Cy,Ex,Ey,q);
					SDL_Delay(700);
					}
								if(iE== 1){ C= 0;}
								if(iE== 2){ E= C- E;
								C= 100;}
							}
				}
		if( I == b){if( iK==2 && K > I &&iI==1){ 	iI= game( I,K); 
					q=1;
					while( q > 0){
					q = hei(Kx,Ky,Ix,Iy,q);
					SDL_Delay(700);
					}
								if(iI== 1){ K= 0;}
								if(iI== 2){ I= K- I;
								K= 100;}
							}
				}
		if( I == b){if( iE==2 && E > I &&iI==1){ 	iI= game( I,E); 
					q=1;
					while( q > 0){
					q = hei(Ex,Ey,Ix,Iy,q);
					SDL_Delay(700);
					}
								if(iI== 1){ E= 0;}
								if(iI== 2){ I= E- I;
								E= 100;}
							}
				}
		if( K == b){if( iI==2 && I > K &&iK==1){ 	iK= game( K,I); 
					q=1;
					while( q > 0){
					q = hei(Ix,Iy,Kx,Ky,q);
					SDL_Delay(700);
					}
								if(iK== 1){ I= 0;}
								if(iK== 2){ K= I- K;
								I= 100;}
							}
				}
		if( K == b){if( iF==2 && F > K &&iK==1){ 	iK= game( K,F); 
					q=1;
					while( q > 0){
					q = hei(Fx,Fy,Kx,Ky,q);
					SDL_Delay(700);
					}
								if(iK== 1){ F= 0;}
								if(iK== 2){ K= F- K;
								F= 100;}
							}
				}
	}
	cop();
	sen();
	territory(iA,iB,iC,iD,iE,iF,iG,iH,iI,iJ,iK);
	shiro();
	deta();
	OKANE();
	tern += 1;
	 //printf("サイコロの出目 = %d \n", B);
	 //printf("サイコロの出目 = %d \n", b);
	return 1;

}
