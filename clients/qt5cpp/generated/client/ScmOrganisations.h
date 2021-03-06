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
 * ScmOrganisations.h
 * 
 * 
 */

#ifndef ScmOrganisations_H_
#define ScmOrganisations_H_

#include <QJsonObject>


#include "GithubOrganization.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class ScmOrganisations: public SWGObject {
public:
    ScmOrganisations();
    ScmOrganisations(QString* json);
    virtual ~ScmOrganisations();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    ScmOrganisations* fromJson(QString &jsonString);


private:
};

}

#endif /* ScmOrganisations_H_ */
