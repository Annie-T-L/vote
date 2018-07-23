#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void voteF(int n1)
    {
        QStringList stl1;
        stl1 << "Erica" << "Ferrie" << "Jamasie" << "Lilian" << "Pella";
        QStringList stl2;
        QVector<int>ve1(5);
        for(int i1=0;i1<n1;i1++)
        {
            int n1 = qrand()% 5;
            stl2 << stl1[n1];
        }
        for(int i2=0;i2<stl2.size();i2++)
        {
            if(stl2[i2] == stl1[0])
            {   ve1[0]++;   }
            else if(stl2[i2] == stl1[1])
            {   ve1[1]++;   }
            else if(stl2[i2]==stl1[2])
            {   ve1[2]++;   }
            else if(stl2[i2]==stl1[3])
            {   ve1[3]++;   }
            else if(stl2[i2]==stl1[4])
            {   ve1[4]++;   }
        }
        qDebug() << stl1 << " \n" <<ve1;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.voteF(200);

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
