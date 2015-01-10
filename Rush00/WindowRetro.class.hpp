#ifndef WindowRetro_CLASS_H
#define WindowRetro_CLASS_H

#include <iostream>
#include <stdlib.h>
#include <curses.h>
#include <signal.h>
#include "User.class.hpp"
#include <unistd.h>
#include "AAlien.class.hpp"
#include "Bullet.Weapon.class.hpp"
#include "Stupid.Alien.class.hpp"

class WindowRetro {
public:
    WindowRetro();

    ~WindowRetro();

    int handleKey(User *user, int key);

    void addAliens(int x, int y, int direction, int scoreValue);

    void Play();

private:

    void fire();

    void deleteAlien(int i);

    void drawAliens();

    void moveAliens();

    void drawBorders(WINDOW *screen);

    void drawBullets();

    void addBullet(int x, int y, int direction);

    void checkResize();

    void checkColisions(int x, int y);

    int width;
    int height;
    int scoreSize;
    User *user;
    AAlien *aliens;
    Bullet *bullets;
    int nbBullets;
    int nbAliens;
    WINDOW *plate;
    WINDOW *infos;
};

#endif