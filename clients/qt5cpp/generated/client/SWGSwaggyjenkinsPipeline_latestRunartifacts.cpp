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


#include "SWGSwaggyjenkinsPipeline_latestRunartifacts.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGSwaggyjenkinsPipeline_latestRunartifacts::SWGSwaggyjenkinsPipeline_latestRunartifacts(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSwaggyjenkinsPipeline_latestRunartifacts::SWGSwaggyjenkinsPipeline_latestRunartifacts() {
    init();
}

SWGSwaggyjenkinsPipeline_latestRunartifacts::~SWGSwaggyjenkinsPipeline_latestRunartifacts() {
    this->cleanup();
}

void
SWGSwaggyjenkinsPipeline_latestRunartifacts::init() {
    name = new QString("");
    size = 0;
    url = new QString("");
    _class = new QString("");
}

void
SWGSwaggyjenkinsPipeline_latestRunartifacts::cleanup() {
    
    if(name != nullptr) {
        delete name;
    }


    if(url != nullptr) {
        delete url;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

SWGSwaggyjenkinsPipeline_latestRunartifacts*
SWGSwaggyjenkinsPipeline_latestRunartifacts::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSwaggyjenkinsPipeline_latestRunartifacts::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&size, pJson["size"], "qint32", "");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
SWGSwaggyjenkinsPipeline_latestRunartifacts::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSwaggyjenkinsPipeline_latestRunartifacts::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("name"), name, obj, QString("QString"));

    obj->insert("size", QJsonValue(size));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

QString*
SWGSwaggyjenkinsPipeline_latestRunartifacts::getName() {
    return name;
}
void
SWGSwaggyjenkinsPipeline_latestRunartifacts::setName(QString* name) {
    this->name = name;
}

qint32
SWGSwaggyjenkinsPipeline_latestRunartifacts::getSize() {
    return size;
}
void
SWGSwaggyjenkinsPipeline_latestRunartifacts::setSize(qint32 size) {
    this->size = size;
}

QString*
SWGSwaggyjenkinsPipeline_latestRunartifacts::getUrl() {
    return url;
}
void
SWGSwaggyjenkinsPipeline_latestRunartifacts::setUrl(QString* url) {
    this->url = url;
}

QString*
SWGSwaggyjenkinsPipeline_latestRunartifacts::getClass() {
    return _class;
}
void
SWGSwaggyjenkinsPipeline_latestRunartifacts::setClass(QString* _class) {
    this->_class = _class;
}


}
