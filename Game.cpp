#include<iostream>
#include"Game.h"
#include<string>

using namespace std ;
Game::Game () {
         int i;

          string n ;

          cout<<"entrez votre nombre"<<endl;
          cin>> nb_joueurs ;
          cout<<"check 1"<<endl;
          players=new player [nb_joueurs];

          cout<<"check 2"<<endl;
          c=new cases [63];
          cout<<"check 3"<<endl;

          for ( i =1 ; i < 64 ; i++)
            {
                c[i]=cases(i);//il faut surcharger l'op daffectatio pour la classe cases

            }
            cout<<"check 4"<<endl;
            for ( i = 0; i < nb_joueurs ; i++ )
            {cout<<"donner le nom";
             cin>>n;
            cout<<"check 5"<<endl;
            player A(n,i) ;
            cout<<"check 6"<<endl;

            players[i]=A;/// on doit surcharger l operateur d'affectation;
            cout<<"check 7"<<endl;
            }
          }
 void Game::delplayer(){ for (int i=1; i<nb_joueurs ; i++)
          {if((players[i]).partieterminee())
               players[i]=players[i+1];} }
 int Game::getord(player p)  {
          for(int i=1 ; i<nb_joueurs ; i++)
          { if ((p.getname())==(players[i].getname()))
            {
              return i ; }}}
 void Game::play (player p) {
     int d1,d2;
     int i=p.gettimewait();
              if (i==0){d1=p.lancede();
              d2=p.lancede();
              p.setpos(d1 , d2 );}
              else
              {
                cout<<"joueurs bloqué"<<endl;
                p.settimewait(i-1);}}
 void Game::jouer ()
          {for ( int i =0 ; i< nb_joueurs +1 ; i++)
          {

              cases c ( players[i].getpos());
              //c.surcaseteleport(players[i]);
              c.suruneoie(players[i]);
              //c.surcaseattente(players[i]);
            //c.SurCasespiege(player[i]);
              //play(players[i]);
           }
          }
