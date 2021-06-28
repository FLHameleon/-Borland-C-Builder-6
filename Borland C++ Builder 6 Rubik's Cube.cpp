//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream>
#include <conio.h>
#include <math>
#include<time>
using namespace std;

void zapoln();
void mehanina(char[6][3][3]);
void vivod(char[6][3][3]);

void hag1(char[6][3][3]);
void hag2(char[6][3][3]);
void hag3(char[6][3][3]);
void hag4(char[6][3][3]);
void hag5(char[6][3][3]);
void hag6(char[6][3][3]);   
void hag7(char[6][3][3]);
void sohr(char[6][3][3],char[6][3][3]);




char cvet2(int,int,int);////////////////////////
void prokrytka();

int i,j,k,stor;     /*stor,i,j storona,ctroca,ctolbetc*/           int lol;

int h; //????? ??? ??????

char kyb[6][3][3],kv,btt/*(button) ??????*/,byf/* ?????*/,glvn;





string gurn;


/*hagi sbora*/

string hodu,hod;
int fi=0,fi2=0;

char pr0kyb[6][3][3],pr1kyb[6][3][3],pr2kyb[6][3][3],pr3kyb[6][3][3],pr4kyb[6][3][3],pr5kyb[6][3][3],pr6kyb[6][3][3],pr7kyb[6][3][3];





int main()
{

glvn='C';

zapoln();

mehanina(kyb);    /**/




sohr(pr0kyb,kyb);





gurn="";



hag1(kyb);
sohr(pr1kyb,kyb);

hag2(kyb);
sohr(pr2kyb,kyb);

hag3(kyb);
sohr(pr3kyb,kyb);

hag4(kyb);
sohr(pr4kyb,kyb);

hag5(kyb);
sohr(pr5kyb,kyb);

hag6(kyb);
sohr(pr6kyb,kyb);

hag7(kyb);


do{/////////////////////////////////////////////////////////////////////////////////////////////////////////
system("cls");

  vivod(pr0kyb);  cout<<endl;
  vivod(pr1kyb);  cout<<endl;
  vivod(pr2kyb);  cout<<endl;
  vivod(pr3kyb);  cout<<endl;
  vivod(pr4kyb);  cout<<endl;
  vivod(pr5kyb);  cout<<endl;
  vivod(pr6kyb);  cout<<endl;
  vivod(kyb);
  cout<<gurn<<"                 "<<fi2-fi<<endl;
   /* lol=rand()%100;
    cout<<lol;       */

 if(gurn[fi2]=='\0')
 {
btt=(char)getch();
gurn+=btt;

 }




if(btt=='-')
{
cout<<"-";
fi++;
        if(gurn[fi2]=='\0')
        {
        btt=(char)getch();
        gurn+=btt;
        fi2++;
        }
}

if(btt=='2')
{
cout<<"2";
        if(gurn[fi2]=='\0')
        {
        btt=(char)getch();
        gurn+=btt;
        fi2++;
        }
}




//btt=gurn[fi2-1];
prokrytka();
fi2++;



}while(btt!='q');

        return 0;
}
//---------------------------------------------------------------------------



void hag7(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////7hag
{ gurn+="x";
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}

int kol=0;

if((kyb8[1][0][2]==kyb8[1][0][1]) && (kyb8[2][0][0]==kyb8[2][0][1])) kol++;
if((kyb8[2][0][2]==kyb8[2][0][1]) && (kyb8[3][0][0]==kyb8[3][0][1])) kol++;
if((kyb8[3][0][2]==kyb8[3][0][1]) && (kyb8[4][0][0]==kyb8[4][0][1])) kol++;
if((kyb8[4][0][2]==kyb8[4][0][1]) && (kyb8[1][0][0]==kyb8[1][0][1])) kol++;
if(kol<4)
{

  if(kol==0)



   {
if(((kyb8[4][0][0]==kyb8[1][0][1]) && (kyb8[3][0][2]==kyb8[4][0][1])) || ((kyb8[4][0][0]==kyb8[4][0][1]) && (kyb8[3][0][2]==kyb8[1][0][1])))
    {
gurn+="-lu-rddr-ul-ru-lddl-ur";  fi+=6;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     } else


if(((kyb8[4][0][0]==kyb8[1][0][1]) && (kyb8[3][0][2]==kyb8[2][0][1])) || ((kyb8[4][0][0]==kyb8[2][0][1]) && (kyb8[3][0][2]==kyb8[1][0][1])))
    {
gurn+="rldd-l-rurldd-l-r-u";  fi+=5;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     } else


if(((kyb8[4][0][0]==kyb8[2][0][1]) && (kyb8[3][0][2]==kyb8[3][0][1])) || ((kyb8[4][0][0]==kyb8[3][0][1]) && (kyb8[3][0][2]==kyb8[2][0][1])))
    {
gurn+="y-lu-rddr-ul-ru-lddl-ur";  fi+=6;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     }


      ///////////////////////////////////// /****************

}else
if(kol==1)
        {
        if((kyb8[1][0][2]==kyb8[1][0][1]) && (kyb8[2][0][0]==kyb8[2][0][1]))
                {
if(((kyb8[4][0][0]==kyb8[4][0][1]) && (kyb8[3][0][2]==kyb8[1][0][1])) || ((kyb8[4][0][0]==kyb8[3][0][1]) && (kyb8[3][0][2]==kyb8[4][0][1])))
    {
gurn+="-r-lddru-rddr-u-l";  fi+=5;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     } else


if(((kyb8[4][0][0]==kyb8[2][0][1]) && (kyb8[3][0][2]==kyb8[3][0][1])) || ((kyb8[4][0][0]==kyb8[3][0][1]) && (kyb8[3][0][2]==kyb8[2][0][1])))
    {
gurn+="-r-lddrl-u-lu-rddr-ulu";  fi+=6;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     }

             }else
             if((kyb8[2][0][2]==kyb8[2][0][1]) && (kyb8[3][0][0]==kyb8[3][0][1]))
             {
if(((kyb8[4][0][2]==kyb8[4][0][1]) && (kyb8[1][0][0]==kyb8[3][0][1])) || ((kyb8[4][0][2]==kyb8[3][0][1]) && (kyb8[1][0][0]==kyb8[4][0][1])))
    {
gurn+="lrdd-l-uldd-lu-r";  fi+=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     } else
if(((kyb8[4][0][2]==kyb8[1][0][1]) && (kyb8[1][0][0]==kyb8[2][0][1])) || ((kyb8[4][0][2]==kyb8[2][0][1]) && (kyb8[1][0][0]==kyb8[1][0][1])))
    {
gurn+="lrdd-r-lur-uldd-lu-r-u";  fi+=6;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     }
             }else


             if((kyb8[4][0][2]==kyb8[4][0][1]) && (kyb8[1][0][0]==kyb8[1][0][1]))
             {
if(((kyb8[2][0][2]==kyb8[3][0][1]) && (kyb8[3][0][0]==kyb8[4][0][1])) || ((kyb8[2][0][2]==kyb8[4][0][1]) && (kyb8[3][0][0]==kyb8[3][0][1])))
    {
gurn+="lrdd-l-rul-urdd-ru-l-u";  fi+=6;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     } else
if(((kyb8[2][0][2]==kyb8[2][0][1]) && (kyb8[3][0][0]==kyb8[1][0][1])) || ((kyb8[2][0][2]==kyb8[1][0][1]) && (kyb8[3][0][0]==kyb8[2][0][1])))
    {
gurn+="rldd-r-urdd-ru-l";  fi+=5;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     }
             }  else
             if((kyb8[4][0][0]==kyb8[4][0][1]) && (kyb8[3][0][2]==kyb8[3][0][1]))
             {
if(((kyb8[1][0][2]==kyb8[1][0][1]) && (kyb8[2][0][0]==kyb8[4][0][1])) || ((kyb8[1][0][2]==kyb8[4][0][1]) && (kyb8[2][0][0]==kyb8[1][0][1])))
    {
gurn+="-l-rddrl-u-ru-lddl-uru";  fi+=6;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     } else
if(((kyb8[1][0][2]==kyb8[2][0][1]) && (kyb8[2][0][0]==kyb8[3][0][1])) || ((kyb8[1][0][2]==kyb8[3][0][1]) && (kyb8[2][0][0]==kyb8[2][0][1])))
    {
gurn+="-r-lddlu-lddl-ur";  fi+=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
     }
             }





    //////////////////////////////////////////////////////////////////////////*








        }

}





}


void hag6(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////6hag
{


gurn+="-x";   fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}

//int vri=0;
int kol=0;

if(kyb8[2][0][0]==kyb8[2][1][1]) kol++;
if(kyb8[2][0][2]==kyb8[2][1][1]) kol++;
if(kyb8[2][2][2]==kyb8[2][1][1]) kol++;
if(kyb8[2][2][0]==kyb8[2][1][1]) kol++;
/*while(vri<90 && kol<4)
{   */

if(kol<4)
for(int i9=0;i9<4;i9++){


if(kyb8[2][0][2]!=kyb8[2][1][1])
{

if(kyb8[0][2][2]==kyb8[2][1][1])
{
gurn+="-rur-u-rur-u";      fi+=4;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}else

//if(kyb8[3][0][0]==kyb8[2][1][1])
{
gurn+="u-r-uru-r-ur";      fi+=4;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}

}

gurn+="f";
prokrytka();
fi2++;


}

   /*
kol=4;
vri++;}   */



}


void hag5(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////5hag
{
int vri=0;
int kol=0;

if(kyb8[1][0][1]==kyb8[1][1][1]) kol++;
if(kyb8[2][0][1]==kyb8[2][1][1]) kol++;
if(kyb8[3][0][1]==kyb8[3][1][1]) kol++;
if(kyb8[4][0][1]==kyb8[4][1][1]) kol++;

while(vri<90 && kol<2)
{
kol=0;
gurn+="u";
prokrytka();
fi2++;

if(kyb8[1][0][1]==kyb8[1][1][1]) kol++;
if(kyb8[2][0][1]==kyb8[2][1][1]) kol++;
if(kyb8[3][0][1]==kyb8[3][1][1]) kol++;
if(kyb8[4][0][1]==kyb8[4][1][1]) kol++;
vri++;}

while(vri<90 && kol<4)
{
while(kyb8[2][0][1]==kyb8[2][1][1])
{
gurn+="y";
prokrytka();
fi2++;
}

if(kyb8[1][0][1]!=kyb8[1][1][1])
{
gurn+="ru-ruruu-ru";      fi+=2;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}else
if(kyb8[4][0][1]!=kyb8[4][1][1])
{
gurn+="ru-ruruu-ruu-l-ul-u-luul-u";      fi+=7;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}else
if(kyb8[3][0][1]!=kyb8[3][1][1])
{
gurn+="-l-ul-u-luul-u";      fi+=5;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}



vri++;}


}


void hag4(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////4hag
{
int vri=0;
int kol=0;
if(kyb8[0][1][0]==kyb8[0][1][1]) kol++;
if(kyb8[0][0][1]==kyb8[0][1][1]) kol++;
if(kyb8[0][1][2]==kyb8[0][1][1]) kol++;
if(kyb8[0][2][1]==kyb8[0][1][1]) kol++;


while(vri<90 && kol<4)
{


if(kol==0)
{
gurn+="fru-r-u-f-u-f-u-lulf";      fi+=7;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
break;
} else
if(kol==2)
{
while(kyb8[0][2][1]==kyb8[0][1][1])
{
gurn+="u";
prokrytka();
fi2++;
}


if(kyb8[0][1][0]!=kyb8[0][1][1])
{
gurn+="-f-u-lulf";      fi+=3;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
} else
if(kyb8[0][0][1]!=kyb8[0][1][1])
{
gurn+="fru-r-u-f";      fi+=3;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else
if(kyb8[0][1][2]!=kyb8[0][1][1])
{
gurn+="fur-u-r-f";      fi+=3;   kol=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}



}

vri++;}


}



void mehanina(char kyb8[6][3][3])
{
srand(time(NULL));


string hgzp;

for(i=1;i<500;i++)
{
j=rand()%12;
switch (j)  {
case 0:
{
gurn+="u";
break;
}
case 1:
{
gurn+="-u";
break;
}

case 2:
{
gurn+="d";
break;
}

case 3:
{
gurn+="-d";
break;
}

case 4:
{
gurn+="r";
break;
}

case 5:
{
gurn+="-r";
break;
}

case 6:
{
gurn+="l";
break;
}

case 7:
{
gurn+="-l";
break;
}

case 8:
{
gurn+="f";
break;
}

case 9:
{
gurn+="-f";
break;
}

case 10:
{
gurn+="b";
break;
}

case 11:
{
gurn+="-b";
break;
}

default: cout<<"problema";


// gurn+=hgzp;
}


}
  while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
   fi2=0;
}



void hag3(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////3hag
{
int vri=0;
int kol=0;
int krigu=0;
int krigx=0;
bool ckl;
gurn+="-x";  fi+=1; fi2++;
prokrytka();
fi2++;
if((kyb8[4][1][2]==kyb8[4][1][1]) && (kyb8[1][1][0]==kyb8[1][1][1])) kol++;
if((kyb8[1][1][2]==kyb8[1][1][1]) && (kyb8[2][1][0]==kyb8[2][1][1])) kol++;
if((kyb8[2][1][2]==kyb8[2][1][1]) && (kyb8[3][1][0]==kyb8[3][1][1])) kol++;
if((kyb8[3][1][2]==kyb8[3][1][1]) && (kyb8[4][1][0]==kyb8[4][1][1])) kol++;


while(vri<90 && kol<4)
{

while((kyb8[1][0][1]!=kyb8[0][1][1] && kyb8[0][1][0]!=kyb8[0][1][1]) || (kyb8[2][0][1]!=kyb8[0][1][1] && kyb8[0][2][1]!=kyb8[0][1][1]) || (kyb8[3][0][1]!=kyb8[0][1][1] && kyb8[0][1][2]!=kyb8[0][1][1]) || (kyb8[4][0][1]!=kyb8[0][1][1] && kyb8[0][0][1]!=kyb8[0][1][1]))
{ ckl=true;


for(krigx=0;krigx<4 && ckl==true;krigx++){
gurn+="y";  fi+=0;
prokrytka();
fi2++;

for(krigu=0;krigu<4 && ckl==true;krigu++){
if(kyb8[2][0][1]==kyb8[2][1][1])
        {
if(kyb8[0][2][1]==kyb8[1][1][1])
{
gurn+="-u-luluf-u-f";      fi+=4;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
ckl=false;
break;
}   else

if(kyb8[0][2][1]==kyb8[3][1][1])
{
gurn+="ur-u-r-u-fuf";      fi+=4;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
ckl=false;
break;
}   else

{
gurn+="u";      fi+=0;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}
        }
        else

{
gurn+="u";
prokrytka();
fi2++;
}
        }}



}

if(kol<4)
{
ckl=true;


for(krigx=0;krigx<4 && ckl==true;krigx++){

if((kyb8[2][1][0]!=kyb8[2][1][1]) || (kyb8[1][1][2]!=kyb8[1][1][1]))
{
gurn+="-u-luluf-u-f";      fi+=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
ckl=false;
break;
}else

 if((kyb8[2][1][2]!=kyb8[2][1][1]) || (kyb8[3][1][0]!=kyb8[3][1][1]))
{
gurn+="ur-u-r-u-fuf";      fi+=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
ckl=false;
break;
}   else

  {

gurn+="y";
prokrytka();
fi2++;             }

}


}

vri++;
}
}


















void hag2(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////2hag
{
int vri=0;
int kol=0;
char orent=glvn;
if((kyb8[2][0][0]==orent) && (kyb8[0][2][0]==kyb8[0][1][1]) && (kyb8[1][0][2]==kyb8[1][1][1])) kol++;
if((kyb8[2][0][2]==orent) && (kyb8[0][2][2]==kyb8[0][1][1]) && (kyb8[3][0][0]==kyb8[3][1][1])) kol++;
if((kyb8[2][2][2]==orent) && (kyb8[3][2][0]==kyb8[3][1][1]) && (kyb8[5][0][2]==kyb8[5][1][1])) kol++;
if((kyb8[2][2][0]==orent) && (kyb8[5][0][0]==kyb8[5][1][1]) && (kyb8[1][2][2]==kyb8[1][1][1])) kol++;

bool povt=true;

while(vri<90 && kol<4)
{
povt=true;
if((kyb8[0][0][0]==kyb8[2][1][1]) || (kyb8[3][0][2]==kyb8[2][1][1]) || (kyb8[5][2][2]==kyb8[2][1][1]) || (kyb8[1][2][0]==kyb8[2][1][1]))
{

povt=false;

while((kyb8[0][0][0]==kyb8[2][1][1]) || (kyb8[3][0][2]==kyb8[2][1][1]) || (kyb8[5][2][2]==kyb8[2][1][1]) || (kyb8[1][2][0]==kyb8[2][1][1]))
{
if((kyb8[0][0][0]==kyb8[2][1][1]) && (kyb8[0][1][1]==kyb8[4][0][2]) && (kyb8[1][1][1]==kyb8[1][0][0]))
{
gurn+="ub-u";      fi+=1;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

if((kyb8[3][0][2]==kyb8[2][1][1]) && (kyb8[0][1][1]==kyb8[0][0][2]) && (kyb8[3][1][1]==kyb8[4][0][0]))
{
gurn+="rb-r";      fi+=1;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

if((kyb8[5][2][2]==kyb8[2][1][1]) && (kyb8[5][1][1]==kyb8[4][2][0]) && (kyb8[3][1][1]==kyb8[3][2][2]))
{
gurn+="db-d";      fi+=1;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

if((kyb8[1][2][0]==kyb8[2][1][1]) && (kyb8[1][1][1]==kyb8[4][2][2]) && (kyb8[5][1][1]==kyb8[5][2][0]))
{
gurn+="lb-l";      fi+=1;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else
{
gurn+="b";
prokrytka();
fi2++;
}
}  }    else



if  ((kyb8[0][0][2]==kyb8[2][1][1]) || (kyb8[3][2][2]==kyb8[2][1][1]) || (kyb8[5][2][0]==kyb8[2][1][1]) || (kyb8[1][0][0]==kyb8[2][1][1]))
{
 povt=false;
while((kyb8[0][0][2]==kyb8[2][1][1]) || (kyb8[3][2][2]==kyb8[2][1][1]) || (kyb8[5][2][0]==kyb8[2][1][1]) || (kyb8[1][0][0]==kyb8[2][1][1]))
{


if((kyb8[0][0][2]==kyb8[2][1][1]) && (kyb8[3][1][1]==kyb8[3][0][2]) && (kyb8[0][1][1]==kyb8[4][0][0]))
{
gurn+="-u-bu";      fi+=2;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

if((kyb8[3][2][2]==kyb8[2][1][1]) && (kyb8[5][1][1]==kyb8[5][2][2]) && (kyb8[3][1][1]==kyb8[4][2][0]))
{
gurn+="-r-br";      fi+=2;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

if((kyb8[5][2][0]==kyb8[2][1][1]) && (kyb8[1][1][1]==kyb8[1][2][0]) && (kyb8[5][1][1]==kyb8[4][2][2]))
{
gurn+="-d-bd";      fi+=2;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

if((kyb8[1][0][0]==kyb8[2][1][1]) && (kyb8[0][1][1]==kyb8[0][0][0]) && (kyb8[1][1][1]==kyb8[4][0][2]))
{
gurn+="-l-bl";      fi+=2;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}  else

{
gurn+="b";
prokrytka();
fi2++;
}
}}




if(povt!=false)     
//if(povt==false)      povt=false;        else
if(kyb8[0][2][0]==kyb8[2][1][1])
{
gurn+="-lbl";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[0][2][2]==kyb8[2][1][1])
{
gurn+="r-b-r";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[3][0][0]==kyb8[2][1][1])
{
gurn+="-ubu";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[3][2][0]==kyb8[2][1][1])
{
gurn+="d-b-d";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[5][0][2]==kyb8[2][1][1])
{
gurn+="-rbr";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[5][0][0]==kyb8[2][1][1])
{
gurn+="l-b-l";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[1][2][2]==kyb8[2][1][1])
{
gurn+="-dbd";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}        else

if(kyb8[1][0][2]==kyb8[2][1][1])
{
gurn+="u-b-u";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else












if((kyb8[4][0][0]==kyb8[2][1][1]) && (kyb8[2][0][2]!=kyb8[2][1][1]))
{
gurn+="-ubu";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else

if((kyb8[4][0][2]==kyb8[2][1][1]) && (kyb8[2][0][0]!=kyb8[2][1][1]))
{
gurn+="u-b-u";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else

if((kyb8[4][2][2]==kyb8[2][1][1]) && (kyb8[2][2][0]!=kyb8[2][1][1]))
{
gurn+="l-b-l";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else

if((kyb8[4][2][0]==kyb8[2][1][1]) && (kyb8[2][2][2]!=kyb8[2][1][1]))
{
gurn+="-rbr";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else









if((kyb8[2][0][0]==orent) && ((kyb8[0][2][0]!=kyb8[0][1][1]) || (kyb8[1][0][2]!=kyb8[1][1][1])))
{
gurn+="-l-bl";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else
if((kyb8[2][0][2]==orent) && ((kyb8[0][2][2]!=kyb8[0][1][1]) || (kyb8[3][0][0]!=kyb8[3][1][1])))
{
gurn+="rb-r";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else
if((kyb8[2][2][2]==orent) && ((kyb8[3][2][0]!=kyb8[3][1][1]) || (kyb8[5][0][2]!=kyb8[5][1][1])))
{
gurn+="-r-br";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}      else
if((kyb8[2][2][0]==orent) && ((kyb8[5][0][0]!=kyb8[5][1][1]) || (kyb8[1][2][2]!=kyb8[1][1][1])))
{
gurn+="lb-l";      fi+=1;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}    else

{
gurn+="b";
prokrytka();
fi2++;
}


vri++;
}


}















void hag1(char kyb8[6][3][3]) ///////////////////////////////////////////////////////////////////1hag
{
int vri=0;
int kol=0;
char orent=glvn;
if(orent==kyb8[2][0][1]) kol++;
if(orent==kyb8[2][1][0]) kol++;
if(orent==kyb8[2][1][2]) kol++;
if(orent==kyb8[2][2][1]) kol++;

while(vri<90 && kol<4)
{

if(kyb[0][1][0]==orent)                         ////////1
{
while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="l";
prokrytka();
fi2++;
kol++;
}


if(kyb[0][1][2]==orent)                         ////////2
{
while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="-r";
fi++;
fi2++;
prokrytka();
fi2++;
kol++;
}

if(kyb[3][0][1]==orent)                         ////////3
{
while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="u";
prokrytka();
fi2++;
kol++;
}


if(kyb[3][2][1]==orent)                         ////////4
{
while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="-d";
fi++;
fi2++;
prokrytka();
fi2++;
kol++;
}

if(kyb[5][1][2]==orent)                         ////////5
{
while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="r";
prokrytka();
fi2++;
kol++;
}


if(kyb[5][1][0]==orent)                         ////////6
{
while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="-l";
fi++;
fi2++;
prokrytka();
fi2++;
kol++;
}


if(kyb[1][2][1]==orent)                         ////////7
{
while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="d";
prokrytka();
fi2++;
kol++;
}

if(kyb[1][0][1]==orent)                         ////////8
{
while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="-u";
fi++;
fi2++;
prokrytka();
fi2++;
kol++;
}
/*
if(kyb[][][]==orent)                         ////////
{
while(kyb[2][][]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="";
fi++;//???
fi2++;//???
prokrytka();
fi2++;
kol++;
}
*/


if(kyb[4][0][1]==orent)                         ////////9
{
while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="uu";
//fi++;
 while(gurn[fi2]!='\0'){prokrytka(); fi2++;}


kol++;
}

 /*gurn+="-r-br";      fi+=2;   kol++;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;   */


if(kyb[4][1][2]==orent)                         ////////10
{
while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="ll";
//fi++;


while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
/*fi2++;
prokrytka();
fi2++;*/

kol++;
}


if(kyb[4][2][1]==orent)                         ////////11
{
while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="dd";
//fi++;

   while(gurn[fi2]!='\0'){prokrytka(); fi2++;}

/*fi2++;
prokrytka();
fi2++;
 */
kol++;
}







if(kyb[4][1][0]==orent)                         ////////12
{
while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="rr";
//fi++;

while(gurn[fi2]!='\0'){prokrytka(); fi2++;}

/*fi2++;
prokrytka();
fi2++;
  */
kol++;
}


/*if(kyb[4][][]==orent)                         ////////
{
while(kyb[2][][]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="2";
fi2++;
prokrytka();
fi2++;

kol++;
}  */

if(kyb[0][0][1]==orent)                         ////////13
{
while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="u";
prokrytka();
fi2++;


while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="-r";    
fi++;
fi2++;
prokrytka();
fi2++;

kol++;
}




if(kyb[0][2][1]==orent)                         ////////14
{
while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="u";
prokrytka();
fi2++;


while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="l";
prokrytka();
fi2++;

kol++;
}



if(kyb[3][1][0]==orent)                         ////////15
{
while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="r";
prokrytka();
fi2++;


while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="u";
prokrytka();
fi2++;

kol++;
}

 

if(kyb[3][1][2]==orent)                         //////// 16
{
while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="r";
prokrytka();
fi2++;


while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="-d";   
fi++;
fi2++;
prokrytka();
fi2++;

kol++;
}



if(kyb[5][0][1]==orent)                         ////////17
{
while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="d";
prokrytka();
fi2++;


while(kyb[2][1][2]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="r";
prokrytka();
fi2++;

kol++;
}




if(kyb[5][2][1]==orent)                         ////////18
{
while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="d";
prokrytka();
fi2++;


while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="-l";     
fi++;
fi2++;
prokrytka();
fi2++;

kol++;
}



if(kyb[1][1][2]==orent)                         ////////19
{
while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="l";
prokrytka();
fi2++;


while(kyb[2][2][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="d";
prokrytka();
fi2++;

kol++;
}




if(kyb[1][1][0]==orent)                         ////////20
{
while(kyb[2][1][0]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="l";
prokrytka();
fi2++;


while(kyb[2][0][1]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="-u";   
fi++;
fi2++;
prokrytka();
fi2++;

kol++;
}








/*


if(kyb[][][]==orent)                         ////////
{
while(kyb[2][][]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}
gurn+="";
prokrytka();
fi2++;


while(kyb[2][][]==orent)
{
gurn+="f";
prokrytka();
fi2++;
}

gurn+="";
prokrytka();
fi2++;

kol++;
}
*/
vri++;}
 kol=0;


 /* gurn+="8";
while(gurn[fi2]!='\0'){prokrytka(); fi2++;} */

while(kol<2)
{
kol=0;
gurn+="f";
prokrytka();
fi2++;

if(kyb[0][1][1]==kyb[0][2][1])
kol++;
if(kyb[3][1][1]==kyb[3][1][0])
kol++;
if(kyb[5][1][1]==kyb[5][0][1])
kol++;
if(kyb[1][1][1]==kyb[1][1][2])
kol++;
}



for(i=0;i<1 && kol<3;i++)
{



if(kyb[0][1][1]==kyb[0][2][1])
{

if(kyb[3][1][1]==kyb[3][1][0])
{
gurn+="lf-l-fl";      fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}else

if(kyb[5][1][1]==kyb[5][0][1])
{
gurn+="r-l2f-rl2f";    fi+=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}else

if(kyb[1][1][1]==kyb[1][1][2])
{
gurn+="-r-frf-r";   fi+=3;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}

} else
{
if(kyb[3][1][1]!=kyb[3][1][0])
{
gurn+="u-f-ufu";  fi+=3;      //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
} else

if(kyb[5][1][1]!=kyb[5][0][1])
{
gurn+="u-d2f-ud2f";    fi+=4;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
} else

if(kyb[1][1][1]!=kyb[1][1][2])
{
gurn+="uf-u-fu";    fi+=2;
while(gurn[fi2]!='\0'){prokrytka(); fi2++;}
}
}
  }



}



void sohr(char fotto1[6][3][3],char fotto2[6][3][3])
{
for (stor=0;stor<6;stor++)  {
for (i=0;i<3;i++)
for (j=0;j<3;j++)
fotto1[stor][i][j]=fotto2[stor][i][j];
                            }
}





void zapoln()
{

//cin>>i;

i=2;
switch(i){
case 1:
{
for (stor=0;stor<6;stor++)
{       kv='1';
for (i=0;i<3;i++)
for (j=0;j<3;j++){
kyb[stor][i][j]=kv;
kv++;              }
}

kv='A';
for (i=0;i<3;i++)
for (j=0;j<3;j++){
kyb[3][i][j]=kv;
kv++;              }

for (i=0;i<3;i++)
for (j=0;j<3;j++){
kyb[1][i][j]=kv;
kv++;   }

for (i=0;i<3;i++)
for (j=0;j<3;j++){

kyb[4][i][j]=kv;
if (i==1 && j==1)
kyb[4][i][j]='*';
else
kv++;   }     } break;

////////////////////////////////////11111111 ?????????? ??????  ?????? ?1






case 2:
{
kv='A';
for (stor=0;stor<6;stor++) {
for (i=0;i<3;i++)
for (j=0;j<3;j++)
kyb[stor][i][j]=kv;
kv++;              }
   }                 break;




////////////////////////////////////11111111 ?????????? ??????  ?????? ?2


case 3:
{

kyb[0][0][0]='A';
kyb[0][0][1]='F';
kyb[0][0][2]='D';
kyb[0][1][0]='E';
kyb[0][1][1]='A';
kyb[0][1][2]='B';
kyb[0][2][0]='F';
kyb[0][2][1]='E';
kyb[0][2][2]='D';

kyb[1][0][0]='B';
kyb[1][0][1]='D';
kyb[1][0][2]='B';
kyb[1][1][0]='A';
kyb[1][1][1]='B';
kyb[1][1][2]='C';
kyb[1][2][0]='C';
kyb[1][2][1]='F';
kyb[1][2][2]='D';

kyb[2][0][0]='E';
kyb[2][0][1]='B';
kyb[2][0][2]='C';
kyb[2][1][0]='A';
kyb[2][1][1]='C';
kyb[2][1][2]='C';
kyb[2][2][0]='E';
kyb[2][2][1]='B';
kyb[2][2][2]='F';

kyb[3][0][0]='F';
kyb[3][0][1]='F';
kyb[3][0][2]='A';
kyb[3][1][0]='D';
kyb[3][1][1]='D';
kyb[3][1][2]='B';
kyb[3][2][0]='B';
kyb[3][2][1]='E';
kyb[3][2][2]='A';

kyb[4][0][0]='C';
kyb[4][0][1]='E';
kyb[4][0][2]='E';
kyb[4][1][0]='C';
kyb[4][1][1]='E';
kyb[4][1][2]='D';
kyb[4][2][0]='E';
kyb[4][2][1]='F';
kyb[4][2][2]='A';

kyb[5][0][0]='F';
kyb[5][0][1]='A';
kyb[5][0][2]='C';
kyb[5][1][0]='C';
kyb[5][1][1]='F';
kyb[5][1][2]='A';
kyb[5][2][0]='B';
kyb[5][2][1]='D';
kyb[5][2][2]='D';
} break;







default: cout<<"big errrror";break;                               }
////////////////////////////////////11111111 ?????????? ??????  ?????? ?3

}





void vivod(char kyb8[6][3][3])
{

for (stor=0;stor<1;stor++)
{
for (i=0;i<3;i++)
{
cout<<"      |";
for (j=0;j<3;j++)
cout<<" "<<kyb8[stor][i][j];
cout<<"|"<<endl;
}
}
cout<<"      ________"<<endl;




for (stor=1;stor<2;stor++)
{
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
cout<<" "<<kyb8[stor][i][j]; cout<<"|";
for (j=0;j<3;j++)
cout<<" "<<kyb8[stor+1][i][j]; cout<<"|";
for (j=0;j<3;j++)
cout<<" "<<kyb8[stor+2][i][j]; cout<<"|";
for (j=0;j<3;j++)
cout<<" "<<kyb8[stor+3][i][j];
cout<<endl;
}
}

 cout<<"      ________"<<endl;


for (stor=5;stor<6;stor++)
{
for (i=0;i<3;i++)
{
cout<<"      |";
for (j=0;j<3;j++)
cout<<" "<<kyb8[stor][i][j];
cout<<"|"<<endl;
}
}

  cout<<endl;
}









char cvet2(int x,int y,int z)
{
char cvkyba;

if(x==0 && y==0 && z==1)
cvkyba=kyb[4][0][1];

if(x==0 && y==1 && z==0)
cvkyba=kyb[1][0][1];

if(x==0 && y==1 && z==2)
cvkyba=kyb[3][0][1];

if(x==0 && y==2 && z==1)
cvkyba=kyb[2][0][1];




if(x==1 && y==0 && z==1)
cvkyba=kyb[0][1][0];

if(x==1 && y==1 && z==0)
cvkyba=kyb[4][1][2];

if(x==1 && y==1 && z==2)
cvkyba=kyb[2][1][0];

if(x==1 && y==2 && z==1)
cvkyba=kyb[5][1][0];








if(x==2 && y==0 && z==1)
cvkyba=kyb[0][2][1];

if(x==2 && y==1 && z==0)
cvkyba=kyb[1][1][2];

if(x==2 && y==1 && z==2)
cvkyba=kyb[3][1][0];

if(x==2 && y==2 && z==1)
cvkyba=kyb[5][0][1];





if(x==3 && y==0 && z==1)
cvkyba=kyb[0][1][2];

if(x==3 && y==1 && z==0)
cvkyba=kyb[2][1][2];

if(x==3 && y==1 && z==2)
cvkyba=kyb[4][1][0];

if(x==3 && y==2 && z==1)
cvkyba=kyb[5][1][2];







if(x==4 && y==0 && z==1)
cvkyba=kyb[0][0][1];

if(x==4 && y==1 && z==0)
cvkyba=kyb[3][1][2];

if(x==4 && y==1 && z==2)
cvkyba=kyb[1][1][0];

if(x==4 && y==2 && z==1)
cvkyba=kyb[5][2][1];





if(x==5 && y==0 && z==1)
cvkyba=kyb[2][2][1];

if(x==5 && y==1 && z==0)
cvkyba=kyb[1][2][1];

if(x==5 && y==1 && z==2)
cvkyba=kyb[3][2][1];

if(x==5 && y==2 && z==1)
cvkyba=kyb[4][2][1];




return cvkyba;


}
































void prokrytka()
{
btt=gurn[fi2];


if (gurn[fi2-1]=='-')
{
        h=3;

}
else
if (gurn[fi2-1]=='2')
{
        h=2;

}  else
if (gurn[fi2]=='\0')
{
        h=0;
        fi2--;

}
  else
if (gurn[fi2]=='8')
{
        h=0;
}
else h=1;



for (k=0;k<h;k++)  {
if (btt=='r')
{
for (i=0;i<3;i++)
{
byf=kyb[2][i][2];
kyb[2][i][2]=kyb[5][i][2];
kyb[5][i][2]=kyb[4][2-i][0];
kyb[4][2-i][0]=kyb[0][i][2];
kyb[0][i][2]=byf;
}

byf=kyb[3][0][0];
kyb[3][0][0]=kyb[3][2][0];
kyb[3][2][0]=kyb[3][2][2];
kyb[3][2][2]=kyb[3][0][2];
kyb[3][0][2]=byf;

byf=kyb[3][0][1];
kyb[3][0][1]=kyb[3][1][0];
kyb[3][1][0]=kyb[3][2][1];
kyb[3][2][1]=kyb[3][1][2];
kyb[3][1][2]=byf;
}

if (btt=='l')
{
for (i=0;i<3;i++)
{
byf=kyb[2][i][0];
kyb[2][i][0]=kyb[0][i][0];
kyb[0][i][0]=kyb[4][2-i][2];
kyb[4][2-i][2]=kyb[5][i][0];
kyb[5][i][0]=byf;
}

byf=kyb[1][0][0];
kyb[1][0][0]=kyb[1][2][0];
kyb[1][2][0]=kyb[1][2][2];
kyb[1][2][2]=kyb[1][0][2];
kyb[1][0][2]=byf;

byf=kyb[1][0][1];
kyb[1][0][1]=kyb[1][1][0];
kyb[1][1][0]=kyb[1][2][1];
kyb[1][2][1]=kyb[1][1][2];
kyb[1][1][2]=byf;
}


if (btt=='u')
{
for (i=0;i<3;i++)
{
byf=kyb[2][0][i];
kyb[2][0][i]=kyb[3][0][i];
kyb[3][0][i]=kyb[4][0][i];
kyb[4][0][i]=kyb[1][0][i];
kyb[1][0][i]=byf;
}

byf=kyb[0][0][0];
kyb[0][0][0]=kyb[0][2][0];
kyb[0][2][0]=kyb[0][2][2];
kyb[0][2][2]=kyb[0][0][2];
kyb[0][0][2]=byf;

byf=kyb[0][0][1];
kyb[0][0][1]=kyb[0][1][0];
kyb[0][1][0]=kyb[0][2][1];
kyb[0][2][1]=kyb[0][1][2];
kyb[0][1][2]=byf;
}

if (btt=='d')
{
for (i=0;i<3;i++)
{
byf=kyb[2][2][i];
kyb[2][2][i]=kyb[1][2][i];
kyb[1][2][i]=kyb[4][2][i];
kyb[4][2][i]=kyb[3][2][i];
kyb[3][2][i]=byf;
}

byf=kyb[5][0][0];
kyb[5][0][0]=kyb[5][2][0];
kyb[5][2][0]=kyb[5][2][2];
kyb[5][2][2]=kyb[5][0][2];
kyb[5][0][2]=byf;

byf=kyb[5][0][1];
kyb[5][0][1]=kyb[5][1][0];
kyb[5][1][0]=kyb[5][2][1];
kyb[5][2][1]=kyb[5][1][2];
kyb[5][1][2]=byf;
}

if (btt=='f')
{
for (i=0;i<3;i++)
{
byf=kyb[0][2][i];
kyb[0][2][i]=kyb[1][2-i][2];
kyb[1][2-i][2]=kyb[5][0][2-i];
kyb[5][0][2-i]=kyb[3][i][0];
kyb[3][i][0]=byf;
}

byf=kyb[2][0][0];
kyb[2][0][0]=kyb[2][2][0];
kyb[2][2][0]=kyb[2][2][2];
kyb[2][2][2]=kyb[2][0][2];
kyb[2][0][2]=byf;

byf=kyb[2][0][1];
kyb[2][0][1]=kyb[2][1][0];
kyb[2][1][0]=kyb[2][2][1];
kyb[2][2][1]=kyb[2][1][2];
kyb[2][1][2]=byf;
}


if (btt=='b')
{
for (i=0;i<3;i++)
{
byf=kyb[0][0][i];
kyb[0][0][i]=kyb[3][i][2];
kyb[3][i][2]=kyb[5][2][2-i];
kyb[5][2][2-i]=kyb[1][2-i][0];
kyb[1][2-i][0]=byf;
}

byf=kyb[4][0][0];
kyb[4][0][0]=kyb[4][2][0];
kyb[4][2][0]=kyb[4][2][2];
kyb[4][2][2]=kyb[4][0][2];
kyb[4][0][2]=byf;

byf=kyb[4][0][1];
kyb[4][0][1]=kyb[4][1][0];
kyb[4][1][0]=kyb[4][2][1];
kyb[4][2][1]=kyb[4][1][2];
kyb[4][1][2]=byf;
}




if (btt=='z')
{
for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
byf=kyb[0][i][j];
kyb[0][i][j]=kyb[1][2-j][i];
kyb[1][2-j][i]=kyb[5][2-i][2-j];
kyb[5][2-i][2-j]=kyb[3][j][2-i];
kyb[3][j][2-i]=byf;
}

byf=kyb[2][0][0];
kyb[2][0][0]=kyb[2][2][0];
kyb[2][2][0]=kyb[2][2][2];
kyb[2][2][2]=kyb[2][0][2];
kyb[2][0][2]=byf;

byf=kyb[2][0][1];
kyb[2][0][1]=kyb[2][1][0];
kyb[2][1][0]=kyb[2][2][1];
kyb[2][2][1]=kyb[2][1][2];
kyb[2][1][2]=byf;


byf=kyb[4][0][0];
kyb[4][0][0]=kyb[4][0][2];
kyb[4][0][2]=kyb[4][2][2];
kyb[4][2][2]=kyb[4][2][0];
kyb[4][2][0]=byf;

byf=kyb[4][0][1];
kyb[4][0][1]=kyb[4][1][2];
kyb[4][1][2]=kyb[4][2][1];
kyb[4][2][1]=kyb[4][1][0];
kyb[4][1][0]=byf;
}


if (btt=='y')
{
for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
byf=kyb[2][i][j];
kyb[2][i][j]=kyb[3][i][j];
kyb[3][i][j]=kyb[4][i][j];
kyb[4][i][j]=kyb[1][i][j];
kyb[1][i][j]=byf;
}

byf=kyb[0][0][0];
kyb[0][0][0]=kyb[0][2][0];
kyb[0][2][0]=kyb[0][2][2];
kyb[0][2][2]=kyb[0][0][2];
kyb[0][0][2]=byf;

byf=kyb[0][0][1];
kyb[0][0][1]=kyb[0][1][0];
kyb[0][1][0]=kyb[0][2][1];
kyb[0][2][1]=kyb[0][1][2];
kyb[0][1][2]=byf;


byf=kyb[5][0][0];
kyb[5][0][0]=kyb[5][0][2];
kyb[5][0][2]=kyb[5][2][2];
kyb[5][2][2]=kyb[5][2][0];
kyb[5][2][0]=byf;

byf=kyb[5][0][1];
kyb[5][0][1]=kyb[5][1][2];
kyb[5][1][2]=kyb[5][2][1];
kyb[5][2][1]=kyb[5][1][0];
kyb[5][1][0]=byf;
}




if (btt=='x')
{
for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
byf=kyb[2][i][j];
kyb[2][i][j]=kyb[5][i][j];
kyb[5][i][j]=kyb[4][2-i][2-j];
kyb[4][2-i][2-j]=kyb[0][i][j];
kyb[0][i][j]=byf;
}

byf=kyb[3][0][0];
kyb[3][0][0]=kyb[3][2][0];
kyb[3][2][0]=kyb[3][2][2];
kyb[3][2][2]=kyb[3][0][2];
kyb[3][0][2]=byf;

byf=kyb[3][0][1];
kyb[3][0][1]=kyb[3][1][0];
kyb[3][1][0]=kyb[3][2][1];
kyb[3][2][1]=kyb[3][1][2];
kyb[3][1][2]=byf;


byf=kyb[1][0][0];
kyb[1][0][0]=kyb[1][0][2];
kyb[1][0][2]=kyb[1][2][2];
kyb[1][2][2]=kyb[1][2][0];
kyb[1][2][0]=byf;

byf=kyb[1][0][1];
kyb[1][0][1]=kyb[1][1][2];
kyb[1][1][2]=kyb[1][2][1];
kyb[1][2][1]=kyb[1][1][0];
kyb[1][1][0]=byf;
}

 }


}
