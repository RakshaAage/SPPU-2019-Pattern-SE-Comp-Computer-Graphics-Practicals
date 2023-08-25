#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
class ball{
	public:
	void sine()
		{
			setcolor(CYAN);
			line(0,getmaxy()/2,getmaxx(),getmaxy()/2);	   //base line			
		}
	void sine(int angle)
	{
			double x,y;
			//Generate sine wave
		for(x=0;x<getmaxx();x++)
		{
			//Calculate y for corresponding x
			y=200*sin(angle*M_PI/180);		//200=height
			y=getmaxy()/2-y;
		
			setcolor(YELLOW);
			circle(x,y,25);
			delay(40);
			cleardevice();	
			angle+=1;
			sine();			
	}
}	
};

int main()
{
	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,NULL);
	ball obj;	
	obj.sine(60);
	delay(5000);
	getch();
	closegraph();
	return 0;
}