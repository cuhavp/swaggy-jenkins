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


#include "Hudson.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

Hudson::Hudson(QString* json) {
    init();
    this->fromJson(*json);
}

Hudson::Hudson() {
    init();
}

Hudson::~Hudson() {
    this->cleanup();
}

void
Hudson::init() {
    _class = new QString("");
    assigned_labels = new QList<HudsonassignedLabels*>();
    mode = new QString("");
    node_description = new QString("");
    node_name = new QString("");
    num_executors = 0;
    description = new QString("");
    jobs = new QList<FreeStyleProject*>();
    primary_view = new AllView();
    quieting_down = false;
    slave_agent_port = 0;
    unlabeled_load = new UnlabeledLoadStatistics();
    use_crumbs = false;
    use_security = false;
    views = new QList<AllView*>();
}

void
Hudson::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(assigned_labels != nullptr) {
        QList<HudsonassignedLabels*>* arr = assigned_labels;
        foreach(HudsonassignedLabels* o, *arr) {
            delete o;
        }
        delete assigned_labels;
    }

    if(mode != nullptr) {
        delete mode;
    }

    if(node_description != nullptr) {
        delete node_description;
    }

    if(node_name != nullptr) {
        delete node_name;
    }


    if(description != nullptr) {
        delete description;
    }

    if(jobs != nullptr) {
        QList<FreeStyleProject*>* arr = jobs;
        foreach(FreeStyleProject* o, *arr) {
            delete o;
        }
        delete jobs;
    }

    if(primary_view != nullptr) {
        delete primary_view;
    }



    if(unlabeled_load != nullptr) {
        delete unlabeled_load;
    }



    if(views != nullptr) {
        QList<AllView*>* arr = views;
        foreach(AllView* o, *arr) {
            delete o;
        }
        delete views;
    }
}

Hudson*
Hudson::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
Hudson::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::Swagger::setValue(&assigned_labels, pJson["assignedLabels"], "QList", "HudsonassignedLabels");
    
    ::Swagger::setValue(&mode, pJson["mode"], "QString", "QString");
    ::Swagger::setValue(&node_description, pJson["nodeDescription"], "QString", "QString");
    ::Swagger::setValue(&node_name, pJson["nodeName"], "QString", "QString");
    ::Swagger::setValue(&num_executors, pJson["numExecutors"], "qint32", "");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    
    ::Swagger::setValue(&jobs, pJson["jobs"], "QList", "FreeStyleProject");
    
    ::Swagger::setValue(&primary_view, pJson["primaryView"], "AllView", "AllView");
    ::Swagger::setValue(&quieting_down, pJson["quietingDown"], "bool", "");
    ::Swagger::setValue(&slave_agent_port, pJson["slaveAgentPort"], "qint32", "");
    ::Swagger::setValue(&unlabeled_load, pJson["unlabeledLoad"], "UnlabeledLoadStatistics", "UnlabeledLoadStatistics");
    ::Swagger::setValue(&use_crumbs, pJson["useCrumbs"], "bool", "");
    ::Swagger::setValue(&use_security, pJson["useSecurity"], "bool", "");
    
    ::Swagger::setValue(&views, pJson["views"], "QList", "AllView");
    
}

QString
Hudson::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
Hudson::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    QJsonArray assigned_labelsJsonArray;
    toJsonArray((QList<void*>*)assigned_labels, &assigned_labelsJsonArray, "assigned_labels", "HudsonassignedLabels");
    obj->insert("assignedLabels", assigned_labelsJsonArray);

    toJsonValue(QString("mode"), mode, obj, QString("QString"));

    toJsonValue(QString("nodeDescription"), node_description, obj, QString("QString"));

    toJsonValue(QString("nodeName"), node_name, obj, QString("QString"));

    obj->insert("numExecutors", QJsonValue(num_executors));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    QJsonArray jobsJsonArray;
    toJsonArray((QList<void*>*)jobs, &jobsJsonArray, "jobs", "FreeStyleProject");
    obj->insert("jobs", jobsJsonArray);

    toJsonValue(QString("primaryView"), primary_view, obj, QString("AllView"));

    obj->insert("quietingDown", QJsonValue(quieting_down));

    obj->insert("slaveAgentPort", QJsonValue(slave_agent_port));

    toJsonValue(QString("unlabeledLoad"), unlabeled_load, obj, QString("UnlabeledLoadStatistics"));

    obj->insert("useCrumbs", QJsonValue(use_crumbs));

    obj->insert("useSecurity", QJsonValue(use_security));

    QJsonArray viewsJsonArray;
    toJsonArray((QList<void*>*)views, &viewsJsonArray, "views", "AllView");
    obj->insert("views", viewsJsonArray);

    return obj;
}

QString*
Hudson::getClass() {
    return _class;
}
void
Hudson::setClass(QString* _class) {
    this->_class = _class;
}

QList<HudsonassignedLabels*>*
Hudson::getAssignedLabels() {
    return assigned_labels;
}
void
Hudson::setAssignedLabels(QList<HudsonassignedLabels*>* assigned_labels) {
    this->assigned_labels = assigned_labels;
}

QString*
Hudson::getMode() {
    return mode;
}
void
Hudson::setMode(QString* mode) {
    this->mode = mode;
}

QString*
Hudson::getNodeDescription() {
    return node_description;
}
void
Hudson::setNodeDescription(QString* node_description) {
    this->node_description = node_description;
}

QString*
Hudson::getNodeName() {
    return node_name;
}
void
Hudson::setNodeName(QString* node_name) {
    this->node_name = node_name;
}

qint32
Hudson::getNumExecutors() {
    return num_executors;
}
void
Hudson::setNumExecutors(qint32 num_executors) {
    this->num_executors = num_executors;
}

QString*
Hudson::getDescription() {
    return description;
}
void
Hudson::setDescription(QString* description) {
    this->description = description;
}

QList<FreeStyleProject*>*
Hudson::getJobs() {
    return jobs;
}
void
Hudson::setJobs(QList<FreeStyleProject*>* jobs) {
    this->jobs = jobs;
}

AllView*
Hudson::getPrimaryView() {
    return primary_view;
}
void
Hudson::setPrimaryView(AllView* primary_view) {
    this->primary_view = primary_view;
}

bool
Hudson::getQuietingDown() {
    return quieting_down;
}
void
Hudson::setQuietingDown(bool quieting_down) {
    this->quieting_down = quieting_down;
}

qint32
Hudson::getSlaveAgentPort() {
    return slave_agent_port;
}
void
Hudson::setSlaveAgentPort(qint32 slave_agent_port) {
    this->slave_agent_port = slave_agent_port;
}

UnlabeledLoadStatistics*
Hudson::getUnlabeledLoad() {
    return unlabeled_load;
}
void
Hudson::setUnlabeledLoad(UnlabeledLoadStatistics* unlabeled_load) {
    this->unlabeled_load = unlabeled_load;
}

bool
Hudson::getUseCrumbs() {
    return use_crumbs;
}
void
Hudson::setUseCrumbs(bool use_crumbs) {
    this->use_crumbs = use_crumbs;
}

bool
Hudson::getUseSecurity() {
    return use_security;
}
void
Hudson::setUseSecurity(bool use_security) {
    this->use_security = use_security;
}

QList<AllView*>*
Hudson::getViews() {
    return views;
}
void
Hudson::setViews(QList<AllView*>* views) {
    this->views = views;
}


}

