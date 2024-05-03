#ifndef QUEST_H
#define QUEST_H

#include <QObject>

class Quest
{
private:
    //Q_OBJECT
    QString task;
    bool modeEasy;
    bool modeMedium;
    bool modeHard;
public:
    Quest();
    void setTask(QString str);
    void setModeEasy();
    void setModeMedium();
    void setModeHard();

    QString getTask() const;
};

inline Quest::Quest()
{
    task = "";
    modeEasy = false;
    modeMedium = false;
    modeHard = false;
}

inline void Quest::setTask(QString str)
{
    task = str;
}

inline void Quest::setModeEasy()
{
    modeEasy = true;

    modeMedium = false;
    modeHard = false;
}

inline void Quest::setModeMedium()
{
    modeMedium = true;

    modeEasy = false;
    modeHard = false;
}

inline void Quest::setModeHard()
{
    modeHard = true;

    modeEasy = false;
    modeMedium = false;
}

inline QString Quest::getTask() const
{
    return task;
}

#endif // QUEST_H
