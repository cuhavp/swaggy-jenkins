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


#include "ExtensionClassContainerImpl1map.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

ExtensionClassContainerImpl1map::ExtensionClassContainerImpl1map(QString* json) {
    init();
    this->fromJson(*json);
}

ExtensionClassContainerImpl1map::ExtensionClassContainerImpl1map() {
    init();
}

ExtensionClassContainerImpl1map::~ExtensionClassContainerImpl1map() {
    this->cleanup();
}

void
ExtensionClassContainerImpl1map::init() {
    io_jenkins_blueocean_service_embedded_rest_pipeline_impl = new ExtensionClassImpl();
    io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = new ExtensionClassImpl();
    _class = new QString("");
}

void
ExtensionClassContainerImpl1map::cleanup() {
    
    if(io_jenkins_blueocean_service_embedded_rest_pipeline_impl != nullptr) {
        delete io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
    }

    if(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl != nullptr) {
        delete io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

ExtensionClassContainerImpl1map*
ExtensionClassContainerImpl1map::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
ExtensionClassContainerImpl1map::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&io_jenkins_blueocean_service_embedded_rest_pipeline_impl, pJson["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"], "ExtensionClassImpl", "ExtensionClassImpl");
    ::Swagger::setValue(&io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl, pJson["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"], "ExtensionClassImpl", "ExtensionClassImpl");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
ExtensionClassContainerImpl1map::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
ExtensionClassContainerImpl1map::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("io.jenkins.blueocean.service.embedded.rest.PipelineImpl"), io_jenkins_blueocean_service_embedded_rest_pipeline_impl, obj, QString("ExtensionClassImpl"));

    toJsonValue(QString("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"), io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl, obj, QString("ExtensionClassImpl"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

ExtensionClassImpl*
ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() {
    return io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
}
void
ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(ExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_pipeline_impl) {
    this->io_jenkins_blueocean_service_embedded_rest_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
}

ExtensionClassImpl*
ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() {
    return io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
}
void
ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(ExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl) {
    this->io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
}

QString*
ExtensionClassContainerImpl1map::getClass() {
    return _class;
}
void
ExtensionClassContainerImpl1map::setClass(QString* _class) {
    this->_class = _class;
}


}

