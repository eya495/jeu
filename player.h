
#ifndef player_H
#define player_H
#include <iostream>
#include <string>

using namespace std;
class player
    {

  string name ;
  int ordre;
  int  Pos;
  int Derniere_pos  ;
  int timewait;
  public :
      player ();
  player (string k,int ordre,int position=0 , int derniere_pos=0 , int t=0 ) ;
  string getname()const ;
  void setname(string ch);
  int getdernierepos () const ;
  int lancede () ;
  int getpos()  ;
  void setpos(int d1 = 0 , int d2 = 0 ) ;


   void settimewait(int b);
 int gettimewait()const;
 bool partieterminee ();
 bool Depassement (int d1 , int d2 );
    };
    #endif

