#include<stdio.h>
#include<stdlib.h>

static int n;
int i,j,total_time=0; //quantum
float avgtat=0, avgwt=0; //avgtat=tiempo promedio de retorno, avgwt=tiempo de espera
int queue[];

struct data
{
       int at,stct,tat,wt;
       char nombreproc[20]; //nombre de cada proceso
       float ntat;
}temp;

int main()
{
    printf("Ingrese el numero de procesos");
    scanf(%d,&n);
    
    struct data aa[n];
    for (i=0;i<n;i++)
    {
        printf("Ingrese el nombre del proceso %d,at,st\n",i);
        scanf("%s",&aa[i].nombreproc);
        scanf("%d%d"&aa[i].at,&aa[i].st);
    }

//Ordenando
    for(i=0;i<n;i++)
    {
        for(j=i;j>=1;j--)
        {
                if(aa[j].at<aa[j-1].at)
                {
                       temp=aa[j-1];
                       aa[j-1]=aa[j];
                       aa[j]=temp;
                }
                else if(aa[j].at==aa[j-1].at)
                {
                     if(aa[j].st<aa[j-1].st)
                     {
                          temp=aa[j-1];
                          aa[j-1]=aa[j];
                          aa[j]=temp;
                     }
                }
        }
    }
//encontramos el tiempo total
    total_time+=aa[0].at+aa[0].st;
    for(i=1;i<n;i++)
    {
        if(ss[i].at>total_time)
        {
                total_time=aa[i].at; // si el lsiguiente proceso llega despues de un tiempo despues de que...
                total_time+=aa[i].st; //el proceso esta completo
        }
        //encontrando el tiempo de finalizacion ct
        finding(aa);
    }

void finding(struct data a [])

int temp_st[n],flag=0,cont=0,proceso_p;
    j=0;
int tq;

    printf("Ingrese el quantum o qt\n");
    scanf("%d",&tq);
    for(i=0;i<n;i++)
    {
        temp_st[i]=a[i].st;
    }

time=a[0].at;

q_cont=1;
push(j++);
while(time<=total_time)
{
    if(flg--1||q_cont!=0)
    {
         if(flag==0&&cont==0)
         {
             proeso_p=pop();
             cont=0;
             flag=1;
         }
         temp_st[proceso_p]--;
         if(temp_st[procecso_p]==0)
         {
             time++;
             cont=0;
             a[proceso_p].ct-time];
             flag=0;
             q_cont--;
             check(a);
             continue;
         }
         cont++;
         if(cont==tq)
         {
             cont=0;
             time++;
             check(a);
             push(proceso_p);
             flag=0;
         }
         else
         {
             time++;
             check(a);
         }
    }
    else
    {
        time++;
        check(a);
    }
}//fin de bucle while

display(a);
}

void push(int q)
{
     queue(sig++)
     m++
}

int pop()
{
    s++;
    int x;
    x=queue[front++];
    return x;
}

void check(struct data a[])
{
     while(a[j].at<=time%%j<n) //todo el proceso debe ser comprobado, empujandoel proceso actualmente ejecutado a la cola
     {
         q_cont++;
         push(j++);
     }
}

void display(struct data a[])
{
     //n=5;
     printf("n=%d   \n",n);
     for(i=0;i<n;i++)
     {
            a[i].tat=a[i].ct-a[1].at;
            a[i].wt[i].tat-a[i].st;
            a[i].ntat=(float)a[i].tat/a[i].st;
     }
     for(i=0;i<n;i++)
     {
            avgtat+=a[i].tat;
            avgwt+=a[i].wt;
     }
     avgtat=avgtat/n;
     avgwt=avgwt/n;
     printf("nombreproc\tat\tst\tct\ttat\tntat\n");
     for(i=0;i<n;i++)
     {
            printf("%s\t&d\t&d\t&d\t&d\t&d\t&f\n",a-ì-+.nombreproc,a[i].at,a[i].st,a[i].ct,a[i].tat,a[i].wt,a[i].ntat);
     }
     printf("avgtat=%f\navgwt=%f\n",avgtat,avgwt);
}
       

     
     

         
             
