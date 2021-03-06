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
 * HudsonMasterComputerexecutors.h
 *
 * 
 */

#ifndef HudsonMasterComputerexecutors_H_
#define HudsonMasterComputerexecutors_H_


#include "ModelBase.h"

#include "FreeStyleBuild.h"
#include <string>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonMasterComputerexecutors
    : public ModelBase
{
public:
    HudsonMasterComputerexecutors();
    virtual ~HudsonMasterComputerexecutors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// HudsonMasterComputerexecutors members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getCurrentExecutable() const;
    void setCurrentExecutable(std::shared_ptr<FreeStyleBuild> value);
    bool currentExecutableIsSet() const;
    void unsetCurrentExecutable();
    /// <summary>
    /// 
    /// </summary>
    bool getIdle() const;
    void setIdle(bool value);
    bool idleIsSet() const;
    void unsetIdle();
    /// <summary>
    /// 
    /// </summary>
    bool getLikelyStuck() const;
    void setLikelyStuck(bool value);
    bool likelyStuckIsSet() const;
    void unsetLikelyStuck();
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumber() const;
    void setNumber(int32_t value);
    bool numberIsSet() const;
    void unsetnumber();
    /// <summary>
    /// 
    /// </summary>
    int32_t getProgress() const;
    void setProgress(int32_t value);
    bool progressIsSet() const;
    void unsetProgress();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::shared_ptr<FreeStyleBuild> m_CurrentExecutable;
    bool m_CurrentExecutableIsSet;
    bool m_Idle;
    bool m_IdleIsSet;
    bool m_LikelyStuck;
    bool m_LikelyStuckIsSet;
    int32_t m_number;
    bool m_numberIsSet;
    int32_t m_Progress;
    bool m_ProgressIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* HudsonMasterComputerexecutors_H_ */
