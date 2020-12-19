#include<stdio.h>
Int main()
{

    Int m1,m2,m3,m4,m5,per;
    Printf("enter marks in five subject");
    Scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    Per=(m1+m2+m3+m4+m5)/500*100;
    
    If(per>=60)
       Printf("first division");
     else
      {
          If(per>=50)
             Printf("second division");
           else
             {
                If(per>=40)
                     Printf("third division");
                 else
                     Printf("fail");
              }
         }
      return 0;
}
