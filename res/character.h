#ifndef CHARACTER_H
#define CHARACTER_H

#include "config.h"
#include "characterlabel.h"
#include <QWidget>

class Character: public QLabel
{
    Q_OBJECT
public:
    Character(int t_cell_x, int t_cell_y, int LocalScreenx, int LocalScreeny, QWidget* parent = nullptr);
public:
    int  m_hp, m_fullhp, m_move,m_fullmove,m_attrack;
    int m_cellx, m_celly; //  全局位置
    int m_localCellx, m_localCelly; // 桌面位置
    QPixmap icon;
    CharacterLabel *dlg;
    QString name;
public:
    void setLabel();
    void enterEvent(QEvent *)override;
    void leaveEvent(QEvent *)override;
};

class Warrior: public Character
{
public:
    Warrior(int t_cell_x, int t_cell_y, int LocalScreenx, int LocalScreeny, QWidget* parent = nullptr);
};

#endif // CHARACTER_H
