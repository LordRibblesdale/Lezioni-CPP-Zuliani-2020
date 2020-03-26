//
// Created by Green on 18/03/2020.
//

#ifndef PROJECTS_CPP_STAGE_H
#define PROJECTS_CPP_STAGE_H

struct Stage {
   //La chiamata a variabili è gia nota all'header quindi non sarà necessario riferire dove si trova

   int id;
   int difficulty;
   Stage* next;

   public:
   Stage(int id, int difficulty);
   ~Stage();

};

#endif //PROJECTS_CPP_STAGE_H
