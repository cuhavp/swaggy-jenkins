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


#include "ModelBase.h"

#include "GithubOrganization.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ScmOrganisations
    : public ModelBase
{
public:
    ScmOrganisations();
    virtual ~ScmOrganisations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ScmOrganisations members


protected:
};

}
}
}
}

#endif /* ScmOrganisations_H_ */