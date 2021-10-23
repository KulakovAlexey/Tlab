#include "helper.h"

Helper::Helper(QObject *parent) : QObject(parent)
{
    // init final
    //level1
    finalconfig.insert(1,{2,2,2,2,2,2,2,2,2,2,
                          2,2,1,1,2,2,1,1,2,2,
                          2,1,2,2,1,1,2,2,1,2,
                          1,2,2,2,2,1,2,2,2,1,
                          1,2,2,2,1,2,2,2,2,1,
                          1,2,2,2,2,1,2,2,2,1,
                          2,1,2,2,1,2,2,2,1,2,
                          2,1,2,2,2,1,2,2,1,2,
                          2,2,1,1,2,2,1,1,2,2,
                          2,2,2,2,1,1,2,2,2,2});

    //level2
    finalconfig.insert(2,{2,2,2,1,1,1,1,2,2,2,
                          2,2,1,2,2,2,2,1,2,2,
                          2,1,2,2,2,1,2,2,1,2,
                          1,2,2,2,2,2,2,1,2,1,
                          1,2,2,1,1,2,2,2,2,1,
                          1,2,2,1,1,2,2,2,2,1,
                          1,2,2,2,2,2,2,2,2,1,
                          2,1,2,2,2,2,2,2,1,2,
                          2,2,1,2,2,2,2,1,2,2,
                          2,2,2,1,1,1,1,2,2,2});

    //level3
    finalconfig.insert(3,{2,2,2,2,2,2,2,2,2,2,
                          2,2,2,2,2,2,2,2,2,2,
                          2,2,1,1,2,2,2,2,2,1,
                          2,1,2,1,1,1,1,1,1,1,
                          1,2,1,2,2,2,2,2,1,1,
                          1,1,2,1,1,1,1,1,1,2,
                          1,2,1,2,2,2,2,2,2,2,
                          1,2,1,2,2,2,2,2,2,2,
                          1,1,2,2,2,2,2,2,2,2,
                          2,2,2,2,2,2,2,2,2,2});

    //level4
    finalconfig.insert(4,{2,2,2,2,1,1,2,2,2,2,
                          2,2,2,1,2,2,1,2,2,2,
                          2,2,2,2,1,2,1,2,2,2,
                          2,2,2,2,1,2,1,1,1,2,
                          2,2,2,1,2,2,1,2,2,1,
                          1,1,1,2,2,1,1,1,1,1,
                          2,2,2,2,1,2,2,2,2,1,
                          2,2,2,2,1,1,1,1,1,1,
                          1,1,1,2,2,1,2,2,1,1,
                          2,2,2,1,1,1,1,1,2,2});

    //level5
    finalconfig.insert(5,{2,2,2,1,2,1,2,2,2,1,
                          1,2,1,2,1,2,1,2,2,2,
                          2,1,2,1,2,1,2,1,2,1,
                          2,1,2,1,2,1,2,1,2,2,
                          2,1,2,2,2,1,2,1,2,2,
                          1,2,2,1,2,1,1,2,1,1,
                          1,2,1,2,2,2,2,2,1,2,
                          1,2,2,2,2,2,2,2,1,2,
                          2,1,1,2,2,2,2,1,2,2,
                          2,2,2,1,1,1,1,2,2,2});

    //level6
    finalconfig.insert(6,{2,2,1,1,1,1,1,1,2,2,
                          2,1,2,2,1,2,2,2,1,2,
                          1,2,1,1,2,1,2,1,2,1,
                          2,1,2,2,1,2,2,2,1,2,
                          2,1,1,2,2,1,2,1,1,2,
                          2,1,2,1,2,2,1,2,1,2,
                          2,1,2,1,2,1,2,2,1,2,
                          2,1,2,2,1,2,2,2,1,2,
                          2,2,1,2,2,2,2,1,2,2,
                          2,2,2,1,1,1,1,2,2,2});


    // init start
    //level1
    startconfig.insert(1,{0,0,0,0,0,0,0,0,0,0,
                          0,3,0,0,0,3,0,0,3,0,
                          3,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          3,0,0,0,0,0,0,0,0,3,
                          0,0,0,0,0,0,0,0,0,0,
                          0,3,0,0,3,0,0,0,3,0,
                          0,0,0,0,0,0,0,0,0,0});

    //level2
    startconfig.insert(2,{0,0,3,0,0,0,0,3,0,0,
                          0,3,0,0,0,0,0,0,3,0,
                          3,0,3,0,3,0,3,0,0,3,
                          0,0,3,3,0,3,3,0,0,0,
                          0,0,3,0,0,3,3,3,0,0,
                          0,0,3,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          3,0,3,0,0,0,0,0,0,3,
                          0,0,0,0,0,0,0,0,3,0,
                          0,0,3,0,0,0,0,3,0,0});

    //level3
    startconfig.insert(3,{0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          3,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,3,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          3,0,0,0,0,0,0,0,0,0});

    //level4
    startconfig.insert(4,{0,0,0,0,0,0,3,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,3,0,0,0,3,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,3,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,3,0,0,0,0,0,0,
                          0,0,3,0,0,0,0,0,0,3});

    //level5
    startconfig.insert(5,{0,0,0,0,0,0,0,0,0,0,
                          0,3,0,0,0,0,0,3,3,0,
                          3,0,0,0,0,0,0,0,0,0,
                          3,0,0,0,0,0,0,0,3,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,3,3,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,3,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,3,0,0,0,0,0,3,0,0});

    //level6
    startconfig.insert(6,{0,3,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,3,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,3,0,0,0,0,0,
                          0,0,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,3,0,0,0,0,
                          0,3,0,0,0,0,0,0,0,0,
                          0,0,0,0,0,0,0,3,0,0});
}

bool Helper::checkWin(QVector<int> configs, int lvl) {
    QVector<int> final = finalconfig[lvl];
    auto it = final.begin();
    for (int i = 0; i < configs.lenght(); i++) {
        if (configs[i] != 3){
            if (*it == 1 && configs[i] != 1) return false;
            else {
                if (*it != 1 && configs[i] == 1) return false;
                else it++;
            }
        }
        else {
            it++;
        }
    }

    return true;
}

QVector<int> Helper::newGame(int lvl) {

    QVector<int> start = startconfig[lvl];

    return start;
}

QVector<int> Helper::startGame(int lvl) {

    QMap<int, QVector<int> > config = finalconfig;

    QVector<int> start = config[lvl];

    return start;
}
