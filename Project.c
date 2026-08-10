#include <stdio.h>
// we are assuming the user already owns a FIR FILTER if not i have VHDL code on my page somewhere

double arctan (double x )
{
          double Ergebnis = 0;
int i=0;
int k = 0;
int Multiplikation = -1;
int Exponent=0;
double Zaeler = x;
double Nenner=1;
  for (i=0; i <10;i++)
  {
    Multiplikation = Multiplikation * (-1);
    Exponent =(2* i)+1;
    Zaeler = 1.0; 
for (k = 0; k < Exponent; k++) {
         Zaeler = Zaeler * x;
     }
     Nenner = (2*i)+1;
     Ergebnis = Ergebnis +((Multiplikation * Zaeler) / Nenner);
  }
  return Ergebnis;
}
double find_teta( double Q ,double I) // I ist cosinus Q ist sinus 
{
    double teta =0;
  
    if ( I==0)
    {
        if (Q<0)
        {
         return -1.57079632679; //-90 grad
        }
        else if (Q>0)
        {
            return 1.57079632679; //90 grad
        }
        return 0;
    }
      else if (Q/I > 1)
         {
          teta = (3.14/2) - arctan(1 / (Q/I));
         }
    else {
          teta = arctan(Q/I);
          return teta;
          }

}


int main(void) {
    // Dein Code hier
    // irgendwo hier  muss der nutzer den zaeler oder teil von dem eintragen vielleicht mit ADC bin unsicher
    printf("Hallo Welt!\n");
    return 0;
}
