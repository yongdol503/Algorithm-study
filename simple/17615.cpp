#include<iostream>
#include<string>

#define MIN(a,b) (a)>(b)?(b):(a)

using namespace std;

int main()
{
    int redBall=0,blueBall=0,leftBall=0,rightBall=0,flag=1,num,left,right;
    char leftColor,rightColor,last;
    string ball;
    cin>>num>>ball;
    last=leftColor=ball[0];
    rightColor=ball[num-1];
    for(int i=0;i<num;i++)
    {
        if(ball[i]=='R')
            redBall++;
        else
            blueBall++;
        if(last!=ball[i])
        {
            flag++;
            rightBall=0;
        }
        if(flag==1)
            leftBall++;
        else
            rightBall++;
        last=ball[i];
    }
    if(flag==1 || flag==2)
        cout<<0;
    else
    {
        left=(leftColor=='R'?redBall:blueBall);
        right=(rightColor=='R'?redBall:blueBall);
        cout<<(MIN(blueBall,MIN(redBall,((left-leftBall)<(right-rightBall)?(left-leftBall):(right-rightBall)))))<<endl;
    }
    return 0;
}