//程序名称:Guess Number
//程序作者:谢朝阳
//联系方式:15636112893
//开发时间:2017.7.5
//游戏说明:这是一个简单的猜数游戏。首先设定一个maxnum，值为100。
//程序将在0到100之间随机生成一个答案数值ans，玩家要做的就是猜对
//这个答案数值。当玩家所猜测的数值大于或小于ans时，程序会提示玩
//家猜大了或猜小了，当玩家猜测数值与ans相等时，程序会提示玩家游
//戏胜利，并计算玩家参加猜数游戏的轮数，将游戏过程存档到文件中。
//V1.1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main(){
FILE *fp;
FILE *fp2; 
fp2=fopen("file1.txt","a+");
char a;
if ((fp=fopen("Readme.txt","r"))==NULL){
printf("Cannot open file!\n");exit(0);}
while((a=fgetc(fp))!=EOF)
putchar(a);
fclose(fp);
int maxnum=100,ans,x,turn=0;//
srand( (unsigned )time (NULL) );
ans=rand()%maxnum;	
printf("\n游戏开始,请猜一个数:");
fprintf(fp2,"游戏开始,请猜一个数:");
scanf("%d",&x);
fprintf(fp2,"%d\n",x);
do
    {if(x<ans){
    printf("猜小了，请再猜一个数:");scanf("%d",&x);
	fprintf(fp2,"猜小了，请再猜一个数:%d\n",x);turn++;}
     if(x>ans){
    printf("猜大了，请再猜一个数:");scanf("%d",&x);
	fprintf(fp2,"猜大了，请再猜一个数:%d\n",x);turn++;}
	}while(x!=ans);
printf("恭喜你，猜对了！你一共猜了%d轮",++turn);
fprintf(fp2,"恭喜你，猜对了！你一共猜了%d轮\n\n",turn);
fclose(fp2);
}
