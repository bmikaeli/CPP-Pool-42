#ifndef ALIEN_CLASS_H
#define ALIEN_CLASS_H

#include <iostream>
#include <stdlib.h>
#include <curses.h>
#include <signal.h>


class AAlien {
public:
    void takeDamage();

    virtual void draw(WINDOW *win);

    virtual void drawDeath(WINDOW *win);

    AAlien &operator=(AAlien &rhs);

    AAlien();

    AAlien(AAlien &src);

    virtual ~AAlien();

    virtual int checkColision(int x, int y);

    int hp;
    int scoreValue;
    char *bulletSkin;
    int X;
    int direction;
    int size;
    int Y;
};

#endif
