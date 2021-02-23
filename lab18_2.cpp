#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

	double overlap(Rect *r1,Rect *r2){
	double y;
	double x;

	y = min( (*r1).y , (*r2).y ) - max( (*r1).y-(*r1).h , (*r2).y-(*r2).h );
	x = min( (*r1).x + (*r1).w , (*r2).x+(*r2).w ) - max( (*r1).x , (*r2).x);
	if(x*y<=0){return 0;}else{
  return x*y;
}


}
