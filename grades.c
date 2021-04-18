#include <stdio.h>

int main()
{
   int marks=0;
   printf("grades awarded is as follows :85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F");
   printf("Enter the marks you scored: ");
   scanf("%d",&marks);
   if(marks>=85 && marks<=100){
      printf("Grade A");}
 
   else if(marks>=70 && marks<=84)
      {printf("Grade B");}
else if(marks>=55 && marks<=69)
         {printf("Grade C");
     }
   
   else if(marks>=40 && marks<=54)
       {
           printf("Grade D");
       }
       else if(marks<40)
           {printf("Grade F");}
     
return 0;
}
