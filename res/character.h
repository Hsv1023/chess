#ifndef CHARACTER_H
#define CHARACTER_H

#include "config.h"
#include "characterlabel.h"
#include <QWidget>

class Character: public QLabel
{
    Q_OBJECT

public:
    enum CHARACTERSTATE{BEGIN,FINDPATH,FINDATTRACK,END,DEAD};
    Character(int t_cell_x, int t_cell_y, int LocalScreenx, int LocalScreeny,bool belong, QWidget* parent = nullptr);
public:
    int m_hp, m_fullhp, m_move,m_fullmove,m_attrack, m_attrackable;
    int m_cellx, m_celly; //  全局位置
    int m_localCellx, m_localCelly; // 桌面位置
    bool m_belong;
    QPixmap icon;
    CharacterProperty *propertyDlg;
    CharacterSelection *selectionDlg;
    QString name;
    int characterState;
    bool attrackedOrNot;// 攻击为1，未攻击为0
public:
    void setLabel();
    void enterEvent(QEvent *)override;
    void leaveEvent(QEvent *)override;
    void movePos(int mouseCellx, int mouseCelly, int mouseLocalCellx, int mouseLocalCelly, int steps);
public slots:
    void moveAction();
    void attrackAction();
    void skipAction();
    void attrackedEvent(int attrack);
    void updateInfo();
signals:
    void characterMoveAction(Character*);
    void characterAttrackAction(Character*);
    void infoChanged();
    void beAttracked(int attrack);
    void dieOneCharacter(Character*);//
    void endOneCharacter(Character*);//
    void submitHint(QString);
    void hideCancelButton();
};

class Warrior: public Character
{
public:
    Warrior(int t_cell_x, int t_cell_y, int LocalScreenx, int LocalScreeny,bool belong, QWidget* parent = nullptr);
};
#endif // CHARACTER_H
