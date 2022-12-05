#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int ball(int y)
{	
		int c2;
		//ball
		circle(25,c2=170-y,15);			//creating main object
		
		return c2;
		
}

int main()
{	
	int i =0,j =0,ch;
	int score;
	char str[10];
	int out,out1,out4,out5;
	int c2;
	
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	
		
		//road											//initial position
		line(0,240,getmaxx(),240);
		//celieng													
		line(0,100,getmaxx(),100);
		outtextxy(250,30,"PRESS 'Space' TO START");
		
		outtextxy(250,260,"Press 0 for DOWN");
		outtextxy(250,280,"Press 9 for UP");
		ball(0);
	
	
	while(1)												//loop for final text
	{

	while(1)												
	{	
		i =0;
		

		if (kbhit() )									//if space is pressed
		{
		 	ch = getch();
		 	score=0;
		 	
		if(ch == 32)
		{
		
			while(1)
			{
				
				int out;
			
					
				for(i=0;i<=getmaxx()+350;i++)
				{
					
					
				
				//road
				line(0,240,getmaxx(),240);
				//celieng
				line(0,100,getmaxx(),100);
				//obstalce1
				rectangle( out1 = 300-i,100,330-i,190);
					
				//obstalce2
				rectangle( out =  getmaxx() - i, 190,  	getmaxx()+30  - i, 240 );
				
				//obstacle3
				rectangle(out4 = (getmaxx()+200)-i , 100, (getmaxx()+230)-i,200);
				//obstacle4
				rectangle( out5 = ( getmaxx() + 350) - i,200 , (getmaxx()+380 ) - i, 240 );
				
				if (kbhit())
				{
					ch = getch();
					if(ch == 48) 				//down '0' key
					{
						j = j -10;
					}
					else if ( ch == 57)			//up '9 ' key
					{
						j = j + 10;
					}
					
				}
				 c2 = ball(j);
			
				
			
				sprintf(str,"Score:%d",score);
				outtextxy(500,15,str);
					
				if((c2 == 100) || c2 == 240)
				{	
				
					goto label;
				}
				
				if ( ( c2>=100 && c2<=205 ) && (out1>=0&&out1<=40 ) )	//obstacle 1
				{
				
					goto label;
				}
				else if((c2>=175  && c2<=240) && (out>=0 && out<=40)) // obstacle 2
				{	
				
					goto label;
				}
				else if ( (c2>=100 && c2<=215) && (out4>=0 && out4<=40  )) //obstacle 3 
				{	
				
					goto label;
				}
				else if ( (c2<=240 && c2>=185) && (out5 >=0 && out5<=40 ) ) //obstacle 4
				{
				
					goto label;
				}
			
					delay(1);
					cleardevice();
					ball(j);
				
				
				}
				
			
				score= score + 10;	
				
			}
			}
				
			}
				
			}
			
				label:
				
					outtextxy(250,30,"YOU LOST !!!");
					
					sprintf(str, " FINAL SCORE:%d",score);
					outtextxy(235,50,str);
					
					outtextxy(200,260,"PRESS 'SPACE' TO RESTART");
					
					
			
			
			}
			getch();
		}
