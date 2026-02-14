#include <stdio.h> 
#include <graphics.h> 

int main()  
{ 
int gd = DETECT, gm; 
initgraph(&gd, &gm, ""); // BGI files same folder 
outtext("Graphics Mode Initialized Successfully"); 
getch(); 
closegraph(); 
return 0; 
} 
