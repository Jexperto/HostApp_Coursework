#include "formcontroller.h"
#include <QGuiApplication>
#include <QFile>
#include <QDebug>
#include <eventmessage.h>
#include <messagedata.h>
#include <QJsonObject>
#include <QJsonDocument>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

//    QFile jsonFile("testjson.json");
//        if (!jsonFile.open(QIODevice::ReadWrite | QIODevice::Truncate)) {
//        qDebug() << "Fuck";
//     }
//        MessageData data("formName","user",QJsonObject());
//        EventMessage message("Timestamp","Event",data,"Receiver");
//        QJsonObject object;
//        message.write(object);
//        jsonFile.write(QJsonDocument(object).toJson());
//        jsonFile.close();
//        if (!jsonFile.open(QIODevice::ReadOnly)) {
//                qDebug() << "Fuck, can't read for shit";
//           }

//           QByteArray saveData = jsonFile.readAll();
//           QJsonDocument loadDoc(QJsonDocument::fromJson(saveData));
//           EventMessage msg;
//           msg.read(loadDoc.object());



       FormController controller(&app);
       app.setOrganizationName("somename");
     app.setOrganizationDomain("somename");
    return app.exec();
}
