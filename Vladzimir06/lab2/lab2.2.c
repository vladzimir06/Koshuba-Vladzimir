#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <conio.h>
#include <math.h>


void print_menu() {
    system("cls");  // очищаем экран
    printf("What do you want to do?\n");
    printf("1. Add good to list\n");
    printf("2. Print all goods in list\n");
    printf("3. Print the highest price\n");
    printf("4. Print the lowest price\n");
    printf("5. Exit\n");
    printf(">");
}


float Rast(int g, int v, int s)
{
float R;
if(g <= 3){R = v*0.6;}
  else if(g > 3 && g <10){
	if(v < 2500){R = v*0.35;}
   else {R = v*0.6;}
  }
 else if(g >= 10 && g < 14){R = v*0.6;}
 else if(g >= 14){R = v*2;}

 return R;
}

int _tmain(int argc, _TCHAR* argv[])
{ float c, g, v, s, R, G;
/* printf("¬ведите количество слагаемых: ");
   scanf("%d", &n);      */
 do {
 print_menu();
  int varic;
   switch (varic)
   {
	case 1:
	  printf("cena:");
	  scanf("%f", &c);
	   break;
	case 2:
	  printf("let:");
	  scanf("%f", &g);
	   break;
	case 3:
	  printf("V:");
	  scanf("%f", &v);
	   break;
	case 4:
	  printf("S:");
	  scanf("%f", &s);
	   break;

   }
  if (varic != 5)
		{system("pause");}
 }while (varic != 5);
 printf("\n peregon = %f", s*0.5);
 //----------------------
 Rast (g,v,s);
printf("\n rastomoska: %f",Rast(g, s, v));
 G = R + s*0.5 + c;
//-------------------
  printf("\n coast avto = %f",G);

 getch();
	return 0;
}




