#include<stdio.h>
#include<conio.h>

// This program is compiled in turbo c/c++

void main()
{
    int r[50], w[50];    //r=run , w=wicket
    int sr=0, sw=0;       //sr=starting run , sw=starting wicket
    int rr, i;        //rr=run rate

    for(i=0; i<50; i++)
    {
   printf("Enter runs obtained in over = %d\n",i);
        scanf("%d",&r[i]);

    printf("Enter wickets obtained in over = %d\n",i);
        scanf("%d", &w[i]);

        sw = sw + w[i];
        sr = sr +r[i];

        if(sw==10)
        {
            break;
        }
    }
    printf("Total runs obtained are %d",sr);
    printf("\n Total wickets obtained are %d",sw);

    rr = sr/i;

printf("\n Run rate of the team is %d",rr);

      getch();

}