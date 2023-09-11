// myfunctions.h
#ifndef DRAWINGFUNCTIONS_H
#define DRAWINGFUNCTIONS_H

#include <raylib.h>
#include <vector>


void graphBackground(int screenWidth, int screenHeight){
 //middle cross
 DrawLine(0, screenHeight/2, screenWidth, screenHeight/2, RED);
 DrawLine(screenWidth/2, 0, screenWidth/2, screenHeight, RED);



 // vertical top line
 DrawLine(screenWidth/2-20, screenHeight/2-30, screenWidth/2+20, screenHeight/2-30, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-60, screenWidth/2+20, screenHeight/2-60, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-90, screenWidth/2+20, screenHeight/2-90, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-120, screenWidth/2+20, screenHeight/2-120, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-150, screenWidth/2+20, screenHeight/2-150, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-180, screenWidth/2+20, screenHeight/2-180, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-210, screenWidth/2+20, screenHeight/2-210, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-240, screenWidth/2+20, screenHeight/2-240, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-270, screenWidth/2+20, screenHeight/2-270, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-300, screenWidth/2+20, screenHeight/2-300, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-330, screenWidth/2+20, screenHeight/2-330, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-360, screenWidth/2+20, screenHeight/2-360, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-390, screenWidth/2+20, screenHeight/2-390, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-420, screenWidth/2+20, screenHeight/2-420, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2-450, screenWidth/2+20, screenHeight/2-450, BLACK);


 //Horizontal LEft line 
 DrawLine(screenWidth/2 -30, screenHeight/2-20, screenWidth/2-30, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -60, screenHeight/2-20, screenWidth/2-60, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -90, screenHeight/2-20, screenWidth/2-90, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -120, screenHeight/2-20, screenWidth/2-120, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -150, screenHeight/2-20, screenWidth/2-150, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -180, screenHeight/2-20, screenWidth/2-180, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -210, screenHeight/2-20, screenWidth/2-210, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -240, screenHeight/2-20, screenWidth/2-240, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -270, screenHeight/2-20, screenWidth/2-270, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -300, screenHeight/2-20, screenWidth/2-300, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -330, screenHeight/2-20, screenWidth/2-330, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -360, screenHeight/2-20, screenWidth/2-360, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -390, screenHeight/2-20, screenWidth/2-390, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -420, screenHeight/2-20, screenWidth/2-420, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 -450, screenHeight/2-20, screenWidth/2-450, screenHeight/2+20, BLACK);
 //Horizontal right line 
 DrawLine(screenWidth/2 +30, screenHeight/2-20, screenWidth/2+30, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +60, screenHeight/2-20, screenWidth/2+60, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +90, screenHeight/2-20, screenWidth/2+90, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +120, screenHeight/2-20, screenWidth/2+120, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +150, screenHeight/2-20, screenWidth/2+150, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +180, screenHeight/2-20, screenWidth/2+180, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +210, screenHeight/2-20, screenWidth/2+210, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +240, screenHeight/2-20, screenWidth/2+240, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +270, screenHeight/2-20, screenWidth/2+270, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +300, screenHeight/2-20, screenWidth/2+300, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +330, screenHeight/2-20, screenWidth/2+330, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +360, screenHeight/2-20, screenWidth/2+360, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +390, screenHeight/2-20, screenWidth/2+390, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +420, screenHeight/2-20, screenWidth/2+420, screenHeight/2+20, BLACK);
 DrawLine(screenWidth/2 +450, screenHeight/2-20, screenWidth/2+450, screenHeight/2+20, BLACK);
 //bottom vertical BOTTOM line 
 DrawLine(screenWidth/2-20, screenHeight/2+30, screenWidth/2+20, screenHeight/2+30, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+60, screenWidth/2+20, screenHeight/2+60, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+90, screenWidth/2+20, screenHeight/2+90, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+120, screenWidth/2+20, screenHeight/2+120, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+150, screenWidth/2+20, screenHeight/2+150, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+180, screenWidth/2+20, screenHeight/2+180, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+210, screenWidth/2+20, screenHeight/2+210, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+240, screenWidth/2+20, screenHeight/2+240, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+270, screenWidth/2+20, screenHeight/2+270, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+300, screenWidth/2+20, screenHeight/2+300, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+330, screenWidth/2+20, screenHeight/2+330, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+360, screenWidth/2+20, screenHeight/2+360, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+390, screenWidth/2+20, screenHeight/2+390, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+420, screenWidth/2+20, screenHeight/2+420, BLACK);
 DrawLine(screenWidth/2-20, screenHeight/2+450, screenWidth/2+20, screenHeight/2+450, BLACK);




 DrawText("0", screenWidth/2-4, screenHeight/2-7, 14, BLACK);

 // positive i markers
 //DrawLine(screenWidth/2-20, screenHeight/2-30, screenWidth/2+20, screenHeight/2-30, BLACK);
 DrawText("4i", screenWidth/2-30, screenHeight/2-40, 16, BLACK);
 
 DrawText("8i", screenWidth/2-35, screenHeight/2-70, 16, BLACK);

 DrawText("12i", screenWidth/2-35, screenHeight/2-100, 16, BLACK);

 DrawText("16i", screenWidth/2-35, screenHeight/2-130, 16, BLACK);

 DrawText("20i", screenWidth/2-35, screenHeight/2-160, 16, BLACK);
 
 DrawText("24i", screenWidth/2-35, screenHeight/2-190, 16, BLACK);

 DrawText("28i", screenWidth/2-35, screenHeight/2-220, 16, BLACK);

 DrawText("32i", screenWidth/2-35, screenHeight/2-250, 16, BLACK);

 DrawText("36i", screenWidth/2-35, screenHeight/2-280, 16, BLACK);

 DrawText("40i", screenWidth/2-35, screenHeight/2-310, 16, BLACK);

 DrawText("44i", screenWidth/2-35, screenHeight/2-340, 16, BLACK);
 
 DrawText("48i", screenWidth/2-35, screenHeight/2-370, 16, BLACK);

 DrawText("52i", screenWidth/2-35, screenHeight/2-400, 16, BLACK);

 DrawText("56i", screenWidth/2-35, screenHeight/2-430, 16, BLACK);
 
 DrawText("60i", screenWidth/2-35, screenHeight/2-460, 16, BLACK);

 //negative i markers 
 DrawText("-4i", screenWidth/2-45, screenHeight/2+30, 16, BLACK);
 
 DrawText("-8i", screenWidth/2-45, screenHeight/2+60, 16, BLACK);

 DrawText("-12i", screenWidth/2-45, screenHeight/2+90, 16, BLACK);

 DrawText("-16i", screenWidth/2-45, screenHeight/2+120, 16, BLACK);

 DrawText("-20i", screenWidth/2-45, screenHeight/2+150, 16, BLACK);
 
 DrawText("-24i", screenWidth/2-45, screenHeight/2+180, 16, BLACK);

 DrawText("-28i", screenWidth/2-45, screenHeight/2+210, 16, BLACK);

 DrawText("-32i", screenWidth/2-45, screenHeight/2+240, 16, BLACK);

 DrawText("-36i", screenWidth/2-45, screenHeight/2+270, 16, BLACK);

 DrawText("-40i", screenWidth/2-45, screenHeight/2+300, 16, BLACK);

 DrawText("-44i", screenWidth/2-45, screenHeight/2+330, 16, BLACK);
 
 DrawText("-48i", screenWidth/2-45, screenHeight/2+360, 16, BLACK);
 
 DrawText("-52i", screenWidth/2-45, screenHeight/2+390, 16, BLACK);

 DrawText("-56i", screenWidth/2-45, screenHeight/2+420, 16, BLACK);
 
 DrawText("-60i", screenWidth/2-45, screenHeight/2+450, 16, BLACK);

}




#endif
