#include <QtDebug>
#include <QDir>
#include <QFileInfo>
#include <iostream>
#include <QString>

using namespace std;

void listDirsRec(QString st) {
    QDir D(st);

    // Get a list of the files
    QFileInfoList L = D.entryInfoList(QDir::Files | QDir::NoDotAndDotDot);
    for (int i=0; i<L.size(); i++) {
        qDebug() << L[i].fileName() ;
    }

    // Get a list of the subdirs
    L = D.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);
    for (int i=0; i<L.size(); i++) {
        qDebug() << L[i].fileName();
    }
    return;
}


int main() {
    QString maxLevelDir;
    //listDirsRec("/tmp") ;

    return 0;
}

