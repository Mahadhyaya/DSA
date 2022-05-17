#include<stdio.h>

int d[30],p[30],cost[30][30],n,i,j;
 
void dijisk(int src)
        {
         int S[10],u,v,min;
         for(i=0;i<n;i++)
                {
                 d[i]=cost[src][i];
                 p[i]=src;
                 S[i]=0;
                }
                S[src]=1;
                for(i=1;i<n;i++)
                        {
                         min=99;
                         u=-1;
                         for(j=0;j<n;j++)
                                {
                                 if(S[j]==0)
                                   {
                                         if(d[j]<min)
                                                {
                                                 min=d[j];
                                                 u=j;
                                                 }
                                    
                                    }     }
                                if(u==-1)
                                return;
                                S[u]=1;
                                for(v=0;v<n;v++)
                                        {
                                         if(S[v]==0)
                                         if(d[u]+cost[u][v]<d[v])
                                                {
                                                 d[v]=d[u]+cost[u][v];
                                                 p[v]=u;
                                                }
                                  
                                        }
                              }
}
                   
void shortest(int src,int dest)
        {
         int i=dest;
         while(i!=src)
                {
                printf("%d <== ",i);
                i=p[i];
                }
             printf("%d = %d",i,d[dest]);
             printf("\n");
         }
                                        
void main()
        {
         int src;
         printf("Enter the No. of Vertices\n");
         scanf("%d",&n);
         printf("Enter the Matrix\n");
         for(i=0;i<n;i++)
         for(j=0;j<n;j++)
         scanf("%d",&cost[i][j]);
         printf("The matrix is.............:\n"); 
         for(i=0;i<n;i++)
                {
                 for(j=0;j<n;j++)
                 printf("%d\t",cost[i][j]);
                 printf("\n");
                }
                 printf("Enter the Source vertex:\t");
                 scanf("%d",&src);
               dijisk(src);
               for(j=0;j<n;j++)
               shortest(src,j);
         }
