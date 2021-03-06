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
 * ExtensionClassImpl.h
 *
 * 
 */

#ifndef ExtensionClassImpl_H_
#define ExtensionClassImpl_H_


#include "ModelBase.h"

#include "ExtensionClassImpllinks.h"
#include <string>
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassImpl
    : public ModelBase
{
public:
    ExtensionClassImpl();
    virtual ~ExtensionClassImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ExtensionClassImpl members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExtensionClassImpllinks> getLinks() const;
    void setLinks(std::shared_ptr<ExtensionClassImpllinks> value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getClasses();
    bool classesIsSet() const;
    void unsetClasses();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::shared_ptr<ExtensionClassImpllinks> m__links;
    bool m__linksIsSet;
    std::vector<std::string> m_Classes;
    bool m_ClassesIsSet;
};

}
}
}
}

#endif /* ExtensionClassImpl_H_ */
