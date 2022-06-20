#include <stdio.h>

int main()
{
    /*Initialization of variables.*/
    char str[100],frequency[26];
    int countA,countB,countC,countD,countE,countF,countG,countH,countI,countJ,countK,countL,countM,countN,countO,countP,countQ,countR,countS,countT,countU,countV,countW,countX,countY,countZ;
    int counter,i;

    countA=countB=countC=countD=countE=countF=countG=countH=countI=countJ=countK=countL=countM=countN=countO=countP=countQ=countR=countS=countT=countU=countV=countW=countX=countY=countZ=0;

    for(i=0;i<26;i++)
        frequency[i]=0;

    printf("Enter a string: ");
    gets(str);

    /*Creating the character frequency array.*/
    for(counter=0;str[counter]!=NULL;counter++)
    {

        if(str[counter]=='A')
        {
            countA++;
            frequency[0]=countA;
        }
        else if(str[counter]=='B')
        {
            countB++;
            frequency[1]=countB;
        }
        else if(str[counter]=='C')
        {
            countC++;
            frequency[2]=countC;
        }
        else if(str[counter]=='D')
        {
            countD++;
            frequency[3]=countD;
        }
        else if(str[counter]=='E')
        {
            countE++;
            frequency[4]=countE;
        }
        else if(str[counter]=='F')
        {
            countF++;
            frequency[5]=countF;
        }
        else if(str[counter]=='G')
        {
            countG++;
            frequency[6]=countG;
        }
        else if(str[counter]=='H')
        {
            countH++;
            frequency[7]=countH;
        }
        else if(str[counter]=='I')
        {
            countI++;
            frequency[8]=countI;
        }
        else if(str[counter]=='J')
        {
            countJ++;
            frequency[9]=countJ;
        }
        else if(str[counter]=='K')
        {
            countK++;
            frequency[10]=countK;
        }
        else if(str[counter]=='L')
        {
            countL++;
            frequency[11]=countL;
        }
        else if(str[counter]=='M')
        {
            countM++;
            frequency[12]=countM;
        }
        else if(str[counter]=='N')
        {
            countN++;
            frequency[13]=countN;
        }
        else if(str[counter]=='O')
        {
            countO++;
            frequency[14]=countO;
        }
        else if(str[counter]=='P')
        {
            countP++;
            frequency[15]=countP;
        }
        else if(str[counter]=='Q')
        {
            countQ++;
            frequency[16]=countQ;
        }
        else if(str[counter]=='R')
        {
            countR++;
            frequency[17]=countR;
        }
        else if(str[counter]=='S')
        {
            countS++;
            frequency[18]=countS;
        }
        else if(str[counter]=='T')
        {
            countT++;
            frequency[19]=countT;
        }
        else if(str[counter]=='U')
        {
            countU++;
            frequency[20]=countU;
        }
        else if(str[counter]=='V')
        {
            countV++;
            frequency[21]=countV;
        }
        else if(str[counter]=='W')
        {
            countW++;
            frequency[22]=countW;
        }
        else if(str[counter]=='X')
        {
            countX++;
            frequency[23]=countX;
        }
        else if(str[counter]=='Y')
        {
            countY++;
            frequency[24]=countY;
        }
        else if(str[counter]=='Z')
        {
            countZ++;
            frequency[25]=countZ;
        }
    }
    printf("A=%d B=%d C=%d D=%d E=%d F=%d G=%d H=%d I=%d J=%d K=%d L=%d M=%d N=%d O=%d P=%d Q=%d R=%d S=%d T=%d U=%d V=%d W=%d X=%d Y=%d Z=%d \n\n",countA,countB,countC,countD,countE,countF,countG,countH,countI,countJ,countK,countL,countM,countN,countO,countP,countQ,countR,countS,countT,countU,countV,countW,countX,countY,countZ);

        for(i=0;i<26;i++)
        printf("%d ",frequency[i]);

    return 0;
}
