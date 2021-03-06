/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BranchImplpermissions.h
 * 
 * 
 */

#ifndef BranchImplpermissions_H_
#define BranchImplpermissions_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class BranchImplpermissions: public SWGObject {
public:
    BranchImplpermissions();
    BranchImplpermissions(QString* json);
    virtual ~BranchImplpermissions();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    BranchImplpermissions* fromJson(QString &jsonString);

    bool getCreate();
    void setCreate(bool create);

    bool getRead();
    void setRead(bool read);

    bool getStart();
    void setStart(bool start);

    bool getStop();
    void setStop(bool stop);

    QString* getClass();
    void setClass(QString* _class);


private:
    bool create;
    bool read;
    bool start;
    bool stop;
    QString* _class;
};

}

#endif /* BranchImplpermissions_H_ */
