#ifndef APP_KEY_PUSH_MANAGER_HPP
#define APP_KEY_PUSH_MANAGER_HPP
#include "app/Kbhit.h"
#include "app/Game.hpp"

class KeyPushManager
{
  public:
    KeyPushManager(Game &game);

  public:
    void waitKeyPush();
    void onKeyboardHit();

  public:
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

  protected:
    Game &game;
    Game::GameBoard gb;
    int m_key;
    bool m_isGameBoardMoved;
};

#endif
