#include <stdio.h>


int main() {

  short start = -1;
  short c  =  ( (  -1  )   );
  unsigned long n = 0 ;

  char i = (  (fgetc (stdin)  ) )  ;
  while ( i != -1  ) {
     if ( start ==  -1  ) { ++n; c  =  i; start   =c ; { printf ("%c\n", c  )  ; } }
     else {
       if ( c == i ) {   ++n; }
       else  {
         c  =  ( (  i)  )   ;printf("%i\n", n)  ;n  =  0;n  =n + (  1)  ;
         
       }
     }

  i  = fgetc ( stdin   )  ;
  }

  printf ( "%i\n" , n  )  ;


return 0;
   }

