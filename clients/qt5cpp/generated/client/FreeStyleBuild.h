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
 * FreeStyleBuild.h
 * 
 * 
 */

#ifndef FreeStyleBuild_H_
#define FreeStyleBuild_H_

#include <QJsonObject>


#include "CauseAction.h"
#include "EmptyChangeLogSet.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class FreeStyleBuild: public SWGObject {
public:
    FreeStyleBuild();
    FreeStyleBuild(QString* json);
    virtual ~FreeStyleBuild();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    FreeStyleBuild* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    qint32 getNumber();
    void setNumber(qint32 number);

    QString* getUrl();
    void setUrl(QString* url);

    QList<CauseAction*>* getActions();
    void setActions(QList<CauseAction*>* actions);

    bool getBuilding();
    void setBuilding(bool building);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    qint32 getDuration();
    void setDuration(qint32 duration);

    qint32 getEstimatedDuration();
    void setEstimatedDuration(qint32 estimated_duration);

    QString* getExecutor();
    void setExecutor(QString* executor);

    QString* getFullDisplayName();
    void setFullDisplayName(QString* full_display_name);

    QString* getId();
    void setId(QString* id);

    bool getKeepLog();
    void setKeepLog(bool keep_log);

    qint32 getQueueId();
    void setQueueId(qint32 queue_id);

    QString* getResult();
    void setResult(QString* result);

    qint32 getTimestamp();
    void setTimestamp(qint32 timestamp);

    QString* getBuiltOn();
    void setBuiltOn(QString* built_on);

    EmptyChangeLogSet* getChangeSet();
    void setChangeSet(EmptyChangeLogSet* change_set);


private:
    QString* _class;
    qint32 number;
    QString* url;
    QList<CauseAction*>* actions;
    bool building;
    QString* description;
    QString* display_name;
    qint32 duration;
    qint32 estimated_duration;
    QString* executor;
    QString* full_display_name;
    QString* id;
    bool keep_log;
    qint32 queue_id;
    QString* result;
    qint32 timestamp;
    QString* built_on;
    EmptyChangeLogSet* change_set;
};

}

#endif /* FreeStyleBuild_H_ */
