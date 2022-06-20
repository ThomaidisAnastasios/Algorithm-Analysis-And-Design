#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#define N 4
void product(int,int);

/*
     X           Y                X*Y
 +-------+   +-------+     +-------+-------+
 | A | B |   | E | F |     | AE+BG | AF+BH |
 +---+---+ * +---+---+  =  +-------+-------+
 | C | D |   | G | H |     | CE+DG | CF+DH |
 +---+---+   +---+---+     +---------------+
 Seven products:
 P1 = A(F-H)
 P2 = (A+B)H
 P3 = (C+D)E
 P4 = D(G-E)
 P5 = (A+D)(E+H)
 P6 = (B-D)(G+H)
 P7 = (A-C)(E+F)

         +-------------+-------------+
         | P5+P4-P2+P6 |    P1+P2    |
 X * Y = +-------------+-------------+
         |    P3+P4    | P1+P5-P3+P7 |
         +-------------+-------------+
*/

int main()
{
int number=8,AB[N][N],CD[N][N],ABCD[N][N],i,j,r,t,run=1;
float seconds;
clock_t start, end;
double cpu_time_used;

/*Question 1 strassen.*/
product_strassen();
printf("\n");

/*Question 2 simple algorithm.*/
for(t=0;t<10;t++)
{
srand((unsigned)time(NULL));
 start=clock();

 for(i=0;i<N;i++)
 {
    for(j=0;j<N;j++)
    {
      r=rand()%9;
      AB[i][j]=r;
      r=rand()%9;
      CD[i][j]=r;
      ABCD[i][j]=AB[i][j]*CD[i][j];
    }
 }

 end=clock();
 seconds=(float)(end - start)/CLOCKS_PER_SEC;
 seconds=seconds/10;
 printf ("%Question 2 array list size 4 %d run time equals %f.\n",t+1,seconds);
}

printf("\n");

/*Question 3 simple algorithm.*/
for(i=0;i<6;i++)
{
    product(number,run);
    number=number*2;
    run=run+1;
}

return 0;
}

/*Question 1 strassen.*/
void product_strassen()
{
  clock_t start, end;
  double cpu_time_used;

  int strassen0[2][2],strassen1[2][2],strassen2[2][2];
  float seconds;
  int r0,r1,r2,r3,r4,r5,r6;
  int i,j,t,r;

  start=clock();

  /*printf("\nDwse ta 4 noumera tou 1 pinaka.\n");
  for(i =0;i<2;i++)
      for(j =0;j<2;j++)
           scanf("%d",&strassen0[i][j]);

  printf("Dwse ta 4 noumera tou 2 pinaka.\n");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&strassen1[i][j]);*/

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      r=rand()%9;
      strassen0[i][j]=r;
    }
  }

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      r=rand()%9;
      strassen1[i][j]=r;
    }
  }

  printf("\n");

  r0=(strassen0[0][0]+strassen0[1][1])*(strassen1[0][0]+strassen1[1][1]);
  printf("%d\n",r0);
  r1=(strassen0[1][0]+strassen0[1][1])*strassen1[0][0];
  printf("%d\n",r1);
  r2=strassen0[0][0]*(strassen1[0][1]-strassen1[1][1]);
  printf("%d\n",r2);
  r3=strassen0[1][1]*(strassen1[1][0]-strassen1[0][0]);
  printf("%d\n",r3);
  r4=(strassen0[0][0]+strassen0[0][1])*strassen1[1][1];
  printf("%d\n",r4);
  r5=(strassen0[1][0]-strassen0[0][0])*(strassen1[0][0]+strassen1[0][1]);
  printf("%d\n",r5);
  r6=(strassen0[0][1]-strassen0[1][1])*(strassen1[1][0]+strassen1[1][1]);
  printf("%d\n",r6);

  printf("\n");

  strassen2[0][0]=r0+r3-r4+r6;
  printf("%d\n",strassen2[0][0]);
  strassen2[0][1]=r2+r4;
  printf("%d\n",strassen2[0][1]);
  strassen2[1][0]=r1+r3;
  printf("%d\n",strassen2[1][0]);
  strassen2[1][1]=r0-r1+r2+r5;
  printf("%d\n",strassen2[1][1]);

  printf("\n");

  end=clock();
  seconds=(float)(end - start)/CLOCKS_PER_SEC;
  seconds=seconds/10;
  printf ("%Question 1 array list size 2 of strasssen algorithm's run time equals %f.\n",seconds);

  printf("Me pollaplasiasmo algori8mou Strassen to apotelsesma einai.\n");
   for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",strassen2[i][j]);
   }

   printf("\n");

   return;
}

/*Question 3 simple algorithm.*/
void product(int number,int run)
{
clock_t start, end;
double cpu_time_used;

int pinakas0[number][number],pinakas1[number][number],array_product[number][number];
float seconds;
int i,j,r,t;
start=clock();

for(t=0;t<10;t++)
{
 for(i=0;i<number;i++)
 {
    for(j=0;j<number;j++)
    {
      r=rand()%9;
      pinakas0[i][j]=r;
      r=rand()%9;
      pinakas1[i][j]=r;
      array_product[i][j]=pinakas0[i][j]*pinakas1[i][j];
    }
 }
}

 end=clock();
 seconds=(float)(end - start)/CLOCKS_PER_SEC;
 seconds=seconds/10;
 printf ("Question 2 array list size %d %d run time equals %f.\n",i,run,seconds);

 return;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    ptr = (int*) malloc(num * sizeof(int));  //memory allocated using malloc
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements of array: ");
    for(i = 0; i < num; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
*/
