#ifndef cases_H
#define cases_H
#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class cases
 {
    int num_case ;

    public :

     cases() { num_case=0 ;};
     cases(int );
     ~cases(){};
     bool  calculeroiepos(player p );
     void suruneoie ( player p );
     void surcaseattente (  player p  );
     void surcaseteleport( player p );
     void surcasepiege( player p  );
     bool caseoccupee(player p);
            };
#endif

