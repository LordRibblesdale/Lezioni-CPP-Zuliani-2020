//
// Created by Green on 22/03/2020.
//

#ifndef PROJECTS_CPP_CASA_H
#define PROJECTS_CPP_CASA_H

class Casa {
    unsigned int numDiStanze;
    unsigned int distanzaDalCentro;

public:
    Casa();
    Casa(int nS, int dC);
    Casa(const Casa& home);
    Casa(Casa&& home);
    ~Casa();

    unsigned int getNumDiStanze() const;

    unsigned int getDistanzaDalCentro() const;

    Casa& operator=(const Casa& home);
    Casa& operator=(Casa&& home);
};

#endif //PROJECTS_CPP_CASA_H
