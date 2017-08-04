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


#include "PipelineBranchesitemlatestRun.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineBranchesitemlatestRun::PipelineBranchesitemlatestRun(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineBranchesitemlatestRun::PipelineBranchesitemlatestRun() {
    init();
}

PipelineBranchesitemlatestRun::~PipelineBranchesitemlatestRun() {
    this->cleanup();
}

void
PipelineBranchesitemlatestRun::init() {
    duration_in_millis = 0;
    estimated_duration_in_millis = 0;
    en_queue_time = new QString("");
    end_time = new QString("");
    id = new QString("");
    organization = new QString("");
    pipeline = new QString("");
    result = new QString("");
    run_summary = new QString("");
    start_time = new QString("");
    state = new QString("");
    type = new QString("");
    commit_id = new QString("");
    _class = new QString("");
}

void
PipelineBranchesitemlatestRun::cleanup() {
    


    if(en_queue_time != nullptr) {
        delete en_queue_time;
    }

    if(end_time != nullptr) {
        delete end_time;
    }

    if(id != nullptr) {
        delete id;
    }

    if(organization != nullptr) {
        delete organization;
    }

    if(pipeline != nullptr) {
        delete pipeline;
    }

    if(result != nullptr) {
        delete result;
    }

    if(run_summary != nullptr) {
        delete run_summary;
    }

    if(start_time != nullptr) {
        delete start_time;
    }

    if(state != nullptr) {
        delete state;
    }

    if(type != nullptr) {
        delete type;
    }

    if(commit_id != nullptr) {
        delete commit_id;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

PipelineBranchesitemlatestRun*
PipelineBranchesitemlatestRun::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineBranchesitemlatestRun::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&duration_in_millis, pJson["durationInMillis"], "qint32", "");
    ::Swagger::setValue(&estimated_duration_in_millis, pJson["estimatedDurationInMillis"], "qint32", "");
    ::Swagger::setValue(&en_queue_time, pJson["enQueueTime"], "QString", "QString");
    ::Swagger::setValue(&end_time, pJson["endTime"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&organization, pJson["organization"], "QString", "QString");
    ::Swagger::setValue(&pipeline, pJson["pipeline"], "QString", "QString");
    ::Swagger::setValue(&result, pJson["result"], "QString", "QString");
    ::Swagger::setValue(&run_summary, pJson["runSummary"], "QString", "QString");
    ::Swagger::setValue(&start_time, pJson["startTime"], "QString", "QString");
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&commit_id, pJson["commitId"], "QString", "QString");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
PipelineBranchesitemlatestRun::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineBranchesitemlatestRun::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("durationInMillis", QJsonValue(duration_in_millis));

    obj->insert("estimatedDurationInMillis", QJsonValue(estimated_duration_in_millis));

    toJsonValue(QString("enQueueTime"), en_queue_time, obj, QString("QString"));

    toJsonValue(QString("endTime"), end_time, obj, QString("QString"));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("organization"), organization, obj, QString("QString"));

    toJsonValue(QString("pipeline"), pipeline, obj, QString("QString"));

    toJsonValue(QString("result"), result, obj, QString("QString"));

    toJsonValue(QString("runSummary"), run_summary, obj, QString("QString"));

    toJsonValue(QString("startTime"), start_time, obj, QString("QString"));

    toJsonValue(QString("state"), state, obj, QString("QString"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("commitId"), commit_id, obj, QString("QString"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

qint32
PipelineBranchesitemlatestRun::getDurationInMillis() {
    return duration_in_millis;
}
void
PipelineBranchesitemlatestRun::setDurationInMillis(qint32 duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
}

qint32
PipelineBranchesitemlatestRun::getEstimatedDurationInMillis() {
    return estimated_duration_in_millis;
}
void
PipelineBranchesitemlatestRun::setEstimatedDurationInMillis(qint32 estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
}

QString*
PipelineBranchesitemlatestRun::getEnQueueTime() {
    return en_queue_time;
}
void
PipelineBranchesitemlatestRun::setEnQueueTime(QString* en_queue_time) {
    this->en_queue_time = en_queue_time;
}

QString*
PipelineBranchesitemlatestRun::getEndTime() {
    return end_time;
}
void
PipelineBranchesitemlatestRun::setEndTime(QString* end_time) {
    this->end_time = end_time;
}

QString*
PipelineBranchesitemlatestRun::getId() {
    return id;
}
void
PipelineBranchesitemlatestRun::setId(QString* id) {
    this->id = id;
}

QString*
PipelineBranchesitemlatestRun::getOrganization() {
    return organization;
}
void
PipelineBranchesitemlatestRun::setOrganization(QString* organization) {
    this->organization = organization;
}

QString*
PipelineBranchesitemlatestRun::getPipeline() {
    return pipeline;
}
void
PipelineBranchesitemlatestRun::setPipeline(QString* pipeline) {
    this->pipeline = pipeline;
}

QString*
PipelineBranchesitemlatestRun::getResult() {
    return result;
}
void
PipelineBranchesitemlatestRun::setResult(QString* result) {
    this->result = result;
}

QString*
PipelineBranchesitemlatestRun::getRunSummary() {
    return run_summary;
}
void
PipelineBranchesitemlatestRun::setRunSummary(QString* run_summary) {
    this->run_summary = run_summary;
}

QString*
PipelineBranchesitemlatestRun::getStartTime() {
    return start_time;
}
void
PipelineBranchesitemlatestRun::setStartTime(QString* start_time) {
    this->start_time = start_time;
}

QString*
PipelineBranchesitemlatestRun::getState() {
    return state;
}
void
PipelineBranchesitemlatestRun::setState(QString* state) {
    this->state = state;
}

QString*
PipelineBranchesitemlatestRun::getType() {
    return type;
}
void
PipelineBranchesitemlatestRun::setType(QString* type) {
    this->type = type;
}

QString*
PipelineBranchesitemlatestRun::getCommitId() {
    return commit_id;
}
void
PipelineBranchesitemlatestRun::setCommitId(QString* commit_id) {
    this->commit_id = commit_id;
}

QString*
PipelineBranchesitemlatestRun::getClass() {
    return _class;
}
void
PipelineBranchesitemlatestRun::setClass(QString* _class) {
    this->_class = _class;
}


}
