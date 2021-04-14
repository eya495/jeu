#ifndef Game_H
#define Game_H
#include <iostream>
#include <string>
#include "cases.h"
#include "player.h"
using namespace std ;
class Game
    {
    int nb_joueurs;

      player *players ;
      cases *c;
      public :


          Game ();
          void delplayer();
          int getord(player p);
          void play (player p) ;
          void jouer ();


    };
    #endif
