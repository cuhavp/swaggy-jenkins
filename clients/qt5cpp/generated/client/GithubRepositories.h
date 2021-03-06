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
 * GithubRepositories.h
 * 
 * 
 */

#ifndef GithubRepositories_H_
#define GithubRepositories_H_

#include <QJsonObject>


#include "GithubRepositorieslinks.h"
#include "GithubRepository.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class GithubRepositories: public SWGObject {
public:
    GithubRepositories();
    GithubRepositories(QString* json);
    virtual ~GithubRepositories();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    GithubRepositories* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    GithubRepositorieslinks* getLinks();
    void setLinks(GithubRepositorieslinks* _links);

    QList<GithubRepository*>* getItems();
    void setItems(QList<GithubRepository*>* items);

    qint32 getLastPage();
    void setLastPage(qint32 last_page);

    qint32 getNextPage();
    void setNextPage(qint32 next_page);

    qint32 getPageSize();
    void setPageSize(qint32 page_size);


private:
    QString* _class;
    GithubRepositorieslinks* _links;
    QList<GithubRepository*>* items;
    qint32 last_page;
    qint32 next_page;
    qint32 page_size;
};

}

#endif /* GithubRepositories_H_ */
