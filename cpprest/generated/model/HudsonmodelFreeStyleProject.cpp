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



#include "HudsonmodelFreeStyleProject.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HudsonmodelFreeStyleProject::HudsonmodelFreeStyleProject()
{
    m__class = U("");
    m__classIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Url = U("");
    m_UrlIsSet = false;
    m_Color = U("");
    m_ColorIsSet = false;
    m_ActionsIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_DisplayNameOrNull = U("");
    m_DisplayNameOrNullIsSet = false;
    m_FullDisplayName = U("");
    m_FullDisplayNameIsSet = false;
    m_FullName = U("");
    m_FullNameIsSet = false;
    m_Buildable = false;
    m_BuildableIsSet = false;
    m_BuildsIsSet = false;
    m_FirstBuildIsSet = false;
    m_HealthReportIsSet = false;
    m_InQueue = false;
    m_InQueueIsSet = false;
    m_KeepDependencies = false;
    m_KeepDependenciesIsSet = false;
    m_LastBuildIsSet = false;
    m_LastCompletedBuildIsSet = false;
    m_LastFailedBuild = U("");
    m_LastFailedBuildIsSet = false;
    m_LastStableBuildIsSet = false;
    m_LastSuccessfulBuildIsSet = false;
    m_LastUnstableBuild = U("");
    m_LastUnstableBuildIsSet = false;
    m_LastUnsuccessfulBuild = U("");
    m_LastUnsuccessfulBuildIsSet = false;
    m_NextBuildNumber = 0;
    m_NextBuildNumberIsSet = false;
    m_QueueItem = U("");
    m_QueueItemIsSet = false;
    m_ConcurrentBuild = false;
    m_ConcurrentBuildIsSet = false;
    m_ScmIsSet = false;
    
}

HudsonmodelFreeStyleProject::~HudsonmodelFreeStyleProject()
{
}

void HudsonmodelFreeStyleProject::validate()
{
    // TODO: implement validation
}

web::json::value HudsonmodelFreeStyleProject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_UrlIsSet)
    {
        val[U("url")] = ModelBase::toJson(m_Url);
    }
    if(m_ColorIsSet)
    {
        val[U("color")] = ModelBase::toJson(m_Color);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Actions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("actions")] = web::json::value::array(jsonArray);
        }
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_DisplayNameIsSet)
    {
        val[U("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DisplayNameOrNullIsSet)
    {
        val[U("displayNameOrNull")] = ModelBase::toJson(m_DisplayNameOrNull);
    }
    if(m_FullDisplayNameIsSet)
    {
        val[U("fullDisplayName")] = ModelBase::toJson(m_FullDisplayName);
    }
    if(m_FullNameIsSet)
    {
        val[U("fullName")] = ModelBase::toJson(m_FullName);
    }
    if(m_BuildableIsSet)
    {
        val[U("buildable")] = ModelBase::toJson(m_Buildable);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Builds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("builds")] = web::json::value::array(jsonArray);
        }
    }
    if(m_FirstBuildIsSet)
    {
        val[U("firstBuild")] = ModelBase::toJson(m_FirstBuild);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_HealthReport )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("healthReport")] = web::json::value::array(jsonArray);
        }
    }
    if(m_InQueueIsSet)
    {
        val[U("inQueue")] = ModelBase::toJson(m_InQueue);
    }
    if(m_KeepDependenciesIsSet)
    {
        val[U("keepDependencies")] = ModelBase::toJson(m_KeepDependencies);
    }
    if(m_LastBuildIsSet)
    {
        val[U("lastBuild")] = ModelBase::toJson(m_LastBuild);
    }
    if(m_LastCompletedBuildIsSet)
    {
        val[U("lastCompletedBuild")] = ModelBase::toJson(m_LastCompletedBuild);
    }
    if(m_LastFailedBuildIsSet)
    {
        val[U("lastFailedBuild")] = ModelBase::toJson(m_LastFailedBuild);
    }
    if(m_LastStableBuildIsSet)
    {
        val[U("lastStableBuild")] = ModelBase::toJson(m_LastStableBuild);
    }
    if(m_LastSuccessfulBuildIsSet)
    {
        val[U("lastSuccessfulBuild")] = ModelBase::toJson(m_LastSuccessfulBuild);
    }
    if(m_LastUnstableBuildIsSet)
    {
        val[U("lastUnstableBuild")] = ModelBase::toJson(m_LastUnstableBuild);
    }
    if(m_LastUnsuccessfulBuildIsSet)
    {
        val[U("lastUnsuccessfulBuild")] = ModelBase::toJson(m_LastUnsuccessfulBuild);
    }
    if(m_NextBuildNumberIsSet)
    {
        val[U("nextBuildNumber")] = ModelBase::toJson(m_NextBuildNumber);
    }
    if(m_QueueItemIsSet)
    {
        val[U("queueItem")] = ModelBase::toJson(m_QueueItem);
    }
    if(m_ConcurrentBuildIsSet)
    {
        val[U("concurrentBuild")] = ModelBase::toJson(m_ConcurrentBuild);
    }
    if(m_ScmIsSet)
    {
        val[U("scm")] = ModelBase::toJson(m_Scm);
    }
    

    return val;
}

void HudsonmodelFreeStyleProject::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("url")))
    {
        setUrl(ModelBase::stringFromJson(val[U("url")]));
        
    }
    if(val.has_field(U("color")))
    {
        setColor(ModelBase::stringFromJson(val[U("color")]));
        
    }
    {
        m_Actions.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("actions")))
        {
        for( auto& item : val[U("actions")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Actions.push_back( std::shared_ptr<HudsonmodelFreeStyleProjectactions>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelFreeStyleProjectactions> newItem(new HudsonmodelFreeStyleProjectactions());
                newItem->fromJson(item);
                m_Actions.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
        
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
        
    }
    if(val.has_field(U("displayNameOrNull")))
    {
        setDisplayNameOrNull(ModelBase::stringFromJson(val[U("displayNameOrNull")]));
        
    }
    if(val.has_field(U("fullDisplayName")))
    {
        setFullDisplayName(ModelBase::stringFromJson(val[U("fullDisplayName")]));
        
    }
    if(val.has_field(U("fullName")))
    {
        setFullName(ModelBase::stringFromJson(val[U("fullName")]));
        
    }
    if(val.has_field(U("buildable")))
    {
        setBuildable(ModelBase::boolFromJson(val[U("buildable")]));
    }
    {
        m_Builds.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("builds")))
        {
        for( auto& item : val[U("builds")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Builds.push_back( std::shared_ptr<HudsonmodelFreeStyleBuild>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
                newItem->fromJson(item);
                m_Builds.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("firstBuild")))
    {
        if(!val[U("firstBuild")].is_null())
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromJson(val[U("firstBuild")]);
            setFirstBuild( newItem );
        }
        
    }
    {
        m_HealthReport.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("healthReport")))
        {
        for( auto& item : val[U("healthReport")].as_array() )
        {
            
            if(item.is_null())
            {
                m_HealthReport.push_back( std::shared_ptr<HudsonmodelFreeStyleProjecthealthReport>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelFreeStyleProjecthealthReport> newItem(new HudsonmodelFreeStyleProjecthealthReport());
                newItem->fromJson(item);
                m_HealthReport.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("inQueue")))
    {
        setInQueue(ModelBase::boolFromJson(val[U("inQueue")]));
    }
    if(val.has_field(U("keepDependencies")))
    {
        setKeepDependencies(ModelBase::boolFromJson(val[U("keepDependencies")]));
    }
    if(val.has_field(U("lastBuild")))
    {
        if(!val[U("lastBuild")].is_null())
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromJson(val[U("lastBuild")]);
            setLastBuild( newItem );
        }
        
    }
    if(val.has_field(U("lastCompletedBuild")))
    {
        if(!val[U("lastCompletedBuild")].is_null())
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromJson(val[U("lastCompletedBuild")]);
            setLastCompletedBuild( newItem );
        }
        
    }
    if(val.has_field(U("lastFailedBuild")))
    {
        setLastFailedBuild(ModelBase::stringFromJson(val[U("lastFailedBuild")]));
        
    }
    if(val.has_field(U("lastStableBuild")))
    {
        if(!val[U("lastStableBuild")].is_null())
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromJson(val[U("lastStableBuild")]);
            setLastStableBuild( newItem );
        }
        
    }
    if(val.has_field(U("lastSuccessfulBuild")))
    {
        if(!val[U("lastSuccessfulBuild")].is_null())
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromJson(val[U("lastSuccessfulBuild")]);
            setLastSuccessfulBuild( newItem );
        }
        
    }
    if(val.has_field(U("lastUnstableBuild")))
    {
        setLastUnstableBuild(ModelBase::stringFromJson(val[U("lastUnstableBuild")]));
        
    }
    if(val.has_field(U("lastUnsuccessfulBuild")))
    {
        setLastUnsuccessfulBuild(ModelBase::stringFromJson(val[U("lastUnsuccessfulBuild")]));
        
    }
    if(val.has_field(U("nextBuildNumber")))
    {
        setNextBuildNumber(ModelBase::int32_tFromJson(val[U("nextBuildNumber")]));
    }
    if(val.has_field(U("queueItem")))
    {
        setQueueItem(ModelBase::stringFromJson(val[U("queueItem")]));
        
    }
    if(val.has_field(U("concurrentBuild")))
    {
        setConcurrentBuild(ModelBase::boolFromJson(val[U("concurrentBuild")]));
    }
    if(val.has_field(U("scm")))
    {
        if(!val[U("scm")].is_null())
        {
            std::shared_ptr<HudsonscmNullSCM> newItem(new HudsonscmNullSCM());
            newItem->fromJson(val[U("scm")]);
            setScm( newItem );
        }
        
    }
    
}

void HudsonmodelFreeStyleProject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("url"), m_Url));
        
    }
    if(m_ColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("color"), m_Color));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Actions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("actions"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayName"), m_DisplayName));
        
    }
    if(m_DisplayNameOrNullIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayNameOrNull"), m_DisplayNameOrNull));
        
    }
    if(m_FullDisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullDisplayName"), m_FullDisplayName));
        
    }
    if(m_FullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullName"), m_FullName));
        
    }
    if(m_BuildableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("buildable"), m_Buildable));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Builds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("builds"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_FirstBuildIsSet)
    {
        if (m_FirstBuild.get())
        {
            m_FirstBuild->toMultipart(multipart, U("firstBuild."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_HealthReport )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("healthReport"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_InQueueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("inQueue"), m_InQueue));
    }
    if(m_KeepDependenciesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("keepDependencies"), m_KeepDependencies));
    }
    if(m_LastBuildIsSet)
    {
        if (m_LastBuild.get())
        {
            m_LastBuild->toMultipart(multipart, U("lastBuild."));
        }
        
    }
    if(m_LastCompletedBuildIsSet)
    {
        if (m_LastCompletedBuild.get())
        {
            m_LastCompletedBuild->toMultipart(multipart, U("lastCompletedBuild."));
        }
        
    }
    if(m_LastFailedBuildIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("lastFailedBuild"), m_LastFailedBuild));
        
    }
    if(m_LastStableBuildIsSet)
    {
        if (m_LastStableBuild.get())
        {
            m_LastStableBuild->toMultipart(multipart, U("lastStableBuild."));
        }
        
    }
    if(m_LastSuccessfulBuildIsSet)
    {
        if (m_LastSuccessfulBuild.get())
        {
            m_LastSuccessfulBuild->toMultipart(multipart, U("lastSuccessfulBuild."));
        }
        
    }
    if(m_LastUnstableBuildIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("lastUnstableBuild"), m_LastUnstableBuild));
        
    }
    if(m_LastUnsuccessfulBuildIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("lastUnsuccessfulBuild"), m_LastUnsuccessfulBuild));
        
    }
    if(m_NextBuildNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("nextBuildNumber"), m_NextBuildNumber));
    }
    if(m_QueueItemIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("queueItem"), m_QueueItem));
        
    }
    if(m_ConcurrentBuildIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("concurrentBuild"), m_ConcurrentBuild));
    }
    if(m_ScmIsSet)
    {
        if (m_Scm.get())
        {
            m_Scm->toMultipart(multipart, U("scm."));
        }
        
    }
    
}

void HudsonmodelFreeStyleProject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(U("url"))));
        
    }
    if(multipart->hasContent(U("color")))
    {
        setColor(ModelBase::stringFromHttpContent(multipart->getContent(U("color"))));
        
    }
    {
        m_Actions.clear();
        if(multipart->hasContent(U("actions")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("actions"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Actions.push_back( std::shared_ptr<HudsonmodelFreeStyleProjectactions>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelFreeStyleProjectactions> newItem(new HudsonmodelFreeStyleProjectactions());
                newItem->fromJson(item);
                m_Actions.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
        
    }
    if(multipart->hasContent(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("displayName"))));
        
    }
    if(multipart->hasContent(U("displayNameOrNull")))
    {
        setDisplayNameOrNull(ModelBase::stringFromHttpContent(multipart->getContent(U("displayNameOrNull"))));
        
    }
    if(multipart->hasContent(U("fullDisplayName")))
    {
        setFullDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("fullDisplayName"))));
        
    }
    if(multipart->hasContent(U("fullName")))
    {
        setFullName(ModelBase::stringFromHttpContent(multipart->getContent(U("fullName"))));
        
    }
    if(multipart->hasContent(U("buildable")))
    {
        setBuildable(ModelBase::boolFromHttpContent(multipart->getContent(U("buildable"))));
    }
    {
        m_Builds.clear();
        if(multipart->hasContent(U("builds")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("builds"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Builds.push_back( std::shared_ptr<HudsonmodelFreeStyleBuild>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
                newItem->fromJson(item);
                m_Builds.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("firstBuild")))
    {
        if(multipart->hasContent(U("firstBuild")))
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromMultiPart(multipart, U("firstBuild."));
            setFirstBuild( newItem );
        }
        
    }
    {
        m_HealthReport.clear();
        if(multipart->hasContent(U("healthReport")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("healthReport"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_HealthReport.push_back( std::shared_ptr<HudsonmodelFreeStyleProjecthealthReport>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelFreeStyleProjecthealthReport> newItem(new HudsonmodelFreeStyleProjecthealthReport());
                newItem->fromJson(item);
                m_HealthReport.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("inQueue")))
    {
        setInQueue(ModelBase::boolFromHttpContent(multipart->getContent(U("inQueue"))));
    }
    if(multipart->hasContent(U("keepDependencies")))
    {
        setKeepDependencies(ModelBase::boolFromHttpContent(multipart->getContent(U("keepDependencies"))));
    }
    if(multipart->hasContent(U("lastBuild")))
    {
        if(multipart->hasContent(U("lastBuild")))
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromMultiPart(multipart, U("lastBuild."));
            setLastBuild( newItem );
        }
        
    }
    if(multipart->hasContent(U("lastCompletedBuild")))
    {
        if(multipart->hasContent(U("lastCompletedBuild")))
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromMultiPart(multipart, U("lastCompletedBuild."));
            setLastCompletedBuild( newItem );
        }
        
    }
    if(multipart->hasContent(U("lastFailedBuild")))
    {
        setLastFailedBuild(ModelBase::stringFromHttpContent(multipart->getContent(U("lastFailedBuild"))));
        
    }
    if(multipart->hasContent(U("lastStableBuild")))
    {
        if(multipart->hasContent(U("lastStableBuild")))
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromMultiPart(multipart, U("lastStableBuild."));
            setLastStableBuild( newItem );
        }
        
    }
    if(multipart->hasContent(U("lastSuccessfulBuild")))
    {
        if(multipart->hasContent(U("lastSuccessfulBuild")))
        {
            std::shared_ptr<HudsonmodelFreeStyleBuild> newItem(new HudsonmodelFreeStyleBuild());
            newItem->fromMultiPart(multipart, U("lastSuccessfulBuild."));
            setLastSuccessfulBuild( newItem );
        }
        
    }
    if(multipart->hasContent(U("lastUnstableBuild")))
    {
        setLastUnstableBuild(ModelBase::stringFromHttpContent(multipart->getContent(U("lastUnstableBuild"))));
        
    }
    if(multipart->hasContent(U("lastUnsuccessfulBuild")))
    {
        setLastUnsuccessfulBuild(ModelBase::stringFromHttpContent(multipart->getContent(U("lastUnsuccessfulBuild"))));
        
    }
    if(multipart->hasContent(U("nextBuildNumber")))
    {
        setNextBuildNumber(ModelBase::int32_tFromHttpContent(multipart->getContent(U("nextBuildNumber"))));
    }
    if(multipart->hasContent(U("queueItem")))
    {
        setQueueItem(ModelBase::stringFromHttpContent(multipart->getContent(U("queueItem"))));
        
    }
    if(multipart->hasContent(U("concurrentBuild")))
    {
        setConcurrentBuild(ModelBase::boolFromHttpContent(multipart->getContent(U("concurrentBuild"))));
    }
    if(multipart->hasContent(U("scm")))
    {
        if(multipart->hasContent(U("scm")))
        {
            std::shared_ptr<HudsonscmNullSCM> newItem(new HudsonscmNullSCM());
            newItem->fromMultiPart(multipart, U("scm."));
            setScm( newItem );
        }
        
    }
    
}


utility::string_t HudsonmodelFreeStyleProject::getClass() const
{
    return m__class;
}
void HudsonmodelFreeStyleProject::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonmodelFreeStyleProject::_classIsSet() const
{
    return m__classIsSet;
}
void HudsonmodelFreeStyleProject::unset_class()
{
    m__classIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getName() const
{
    return m_Name;
}
void HudsonmodelFreeStyleProject::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool HudsonmodelFreeStyleProject::nameIsSet() const
{
    return m_NameIsSet;
}
void HudsonmodelFreeStyleProject::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getUrl() const
{
    return m_Url;
}
void HudsonmodelFreeStyleProject::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool HudsonmodelFreeStyleProject::urlIsSet() const
{
    return m_UrlIsSet;
}
void HudsonmodelFreeStyleProject::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getColor() const
{
    return m_Color;
}
void HudsonmodelFreeStyleProject::setColor(utility::string_t value)
{
    m_Color = value;
    m_ColorIsSet = true;
}
bool HudsonmodelFreeStyleProject::colorIsSet() const
{
    return m_ColorIsSet;
}
void HudsonmodelFreeStyleProject::unsetColor()
{
    m_ColorIsSet = false;
}
std::vector<std::shared_ptr<HudsonmodelFreeStyleProjectactions>>& HudsonmodelFreeStyleProject::getActions()
{
    return m_Actions;
}
bool HudsonmodelFreeStyleProject::actionsIsSet() const
{
    return m_ActionsIsSet;
}
void HudsonmodelFreeStyleProject::unsetActions()
{
    m_ActionsIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getDescription() const
{
    return m_Description;
}
void HudsonmodelFreeStyleProject::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool HudsonmodelFreeStyleProject::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void HudsonmodelFreeStyleProject::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getDisplayName() const
{
    return m_DisplayName;
}
void HudsonmodelFreeStyleProject::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool HudsonmodelFreeStyleProject::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void HudsonmodelFreeStyleProject::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getDisplayNameOrNull() const
{
    return m_DisplayNameOrNull;
}
void HudsonmodelFreeStyleProject::setDisplayNameOrNull(utility::string_t value)
{
    m_DisplayNameOrNull = value;
    m_DisplayNameOrNullIsSet = true;
}
bool HudsonmodelFreeStyleProject::displayNameOrNullIsSet() const
{
    return m_DisplayNameOrNullIsSet;
}
void HudsonmodelFreeStyleProject::unsetDisplayNameOrNull()
{
    m_DisplayNameOrNullIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getFullDisplayName() const
{
    return m_FullDisplayName;
}
void HudsonmodelFreeStyleProject::setFullDisplayName(utility::string_t value)
{
    m_FullDisplayName = value;
    m_FullDisplayNameIsSet = true;
}
bool HudsonmodelFreeStyleProject::fullDisplayNameIsSet() const
{
    return m_FullDisplayNameIsSet;
}
void HudsonmodelFreeStyleProject::unsetFullDisplayName()
{
    m_FullDisplayNameIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getFullName() const
{
    return m_FullName;
}
void HudsonmodelFreeStyleProject::setFullName(utility::string_t value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool HudsonmodelFreeStyleProject::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void HudsonmodelFreeStyleProject::unsetFullName()
{
    m_FullNameIsSet = false;
}
bool HudsonmodelFreeStyleProject::getBuildable() const
{
    return m_Buildable;
}
void HudsonmodelFreeStyleProject::setBuildable(bool value)
{
    m_Buildable = value;
    m_BuildableIsSet = true;
}
bool HudsonmodelFreeStyleProject::buildableIsSet() const
{
    return m_BuildableIsSet;
}
void HudsonmodelFreeStyleProject::unsetBuildable()
{
    m_BuildableIsSet = false;
}
std::vector<std::shared_ptr<HudsonmodelFreeStyleBuild>>& HudsonmodelFreeStyleProject::getBuilds()
{
    return m_Builds;
}
bool HudsonmodelFreeStyleProject::buildsIsSet() const
{
    return m_BuildsIsSet;
}
void HudsonmodelFreeStyleProject::unsetBuilds()
{
    m_BuildsIsSet = false;
}
std::shared_ptr<HudsonmodelFreeStyleBuild> HudsonmodelFreeStyleProject::getFirstBuild() const
{
    return m_FirstBuild;
}
void HudsonmodelFreeStyleProject::setFirstBuild(std::shared_ptr<HudsonmodelFreeStyleBuild> value)
{
    m_FirstBuild = value;
    m_FirstBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::firstBuildIsSet() const
{
    return m_FirstBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetFirstBuild()
{
    m_FirstBuildIsSet = false;
}
std::vector<std::shared_ptr<HudsonmodelFreeStyleProjecthealthReport>>& HudsonmodelFreeStyleProject::getHealthReport()
{
    return m_HealthReport;
}
bool HudsonmodelFreeStyleProject::healthReportIsSet() const
{
    return m_HealthReportIsSet;
}
void HudsonmodelFreeStyleProject::unsetHealthReport()
{
    m_HealthReportIsSet = false;
}
bool HudsonmodelFreeStyleProject::getInQueue() const
{
    return m_InQueue;
}
void HudsonmodelFreeStyleProject::setInQueue(bool value)
{
    m_InQueue = value;
    m_InQueueIsSet = true;
}
bool HudsonmodelFreeStyleProject::inQueueIsSet() const
{
    return m_InQueueIsSet;
}
void HudsonmodelFreeStyleProject::unsetInQueue()
{
    m_InQueueIsSet = false;
}
bool HudsonmodelFreeStyleProject::getKeepDependencies() const
{
    return m_KeepDependencies;
}
void HudsonmodelFreeStyleProject::setKeepDependencies(bool value)
{
    m_KeepDependencies = value;
    m_KeepDependenciesIsSet = true;
}
bool HudsonmodelFreeStyleProject::keepDependenciesIsSet() const
{
    return m_KeepDependenciesIsSet;
}
void HudsonmodelFreeStyleProject::unsetKeepDependencies()
{
    m_KeepDependenciesIsSet = false;
}
std::shared_ptr<HudsonmodelFreeStyleBuild> HudsonmodelFreeStyleProject::getLastBuild() const
{
    return m_LastBuild;
}
void HudsonmodelFreeStyleProject::setLastBuild(std::shared_ptr<HudsonmodelFreeStyleBuild> value)
{
    m_LastBuild = value;
    m_LastBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastBuildIsSet() const
{
    return m_LastBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastBuild()
{
    m_LastBuildIsSet = false;
}
std::shared_ptr<HudsonmodelFreeStyleBuild> HudsonmodelFreeStyleProject::getLastCompletedBuild() const
{
    return m_LastCompletedBuild;
}
void HudsonmodelFreeStyleProject::setLastCompletedBuild(std::shared_ptr<HudsonmodelFreeStyleBuild> value)
{
    m_LastCompletedBuild = value;
    m_LastCompletedBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastCompletedBuildIsSet() const
{
    return m_LastCompletedBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastCompletedBuild()
{
    m_LastCompletedBuildIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getLastFailedBuild() const
{
    return m_LastFailedBuild;
}
void HudsonmodelFreeStyleProject::setLastFailedBuild(utility::string_t value)
{
    m_LastFailedBuild = value;
    m_LastFailedBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastFailedBuildIsSet() const
{
    return m_LastFailedBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastFailedBuild()
{
    m_LastFailedBuildIsSet = false;
}
std::shared_ptr<HudsonmodelFreeStyleBuild> HudsonmodelFreeStyleProject::getLastStableBuild() const
{
    return m_LastStableBuild;
}
void HudsonmodelFreeStyleProject::setLastStableBuild(std::shared_ptr<HudsonmodelFreeStyleBuild> value)
{
    m_LastStableBuild = value;
    m_LastStableBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastStableBuildIsSet() const
{
    return m_LastStableBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastStableBuild()
{
    m_LastStableBuildIsSet = false;
}
std::shared_ptr<HudsonmodelFreeStyleBuild> HudsonmodelFreeStyleProject::getLastSuccessfulBuild() const
{
    return m_LastSuccessfulBuild;
}
void HudsonmodelFreeStyleProject::setLastSuccessfulBuild(std::shared_ptr<HudsonmodelFreeStyleBuild> value)
{
    m_LastSuccessfulBuild = value;
    m_LastSuccessfulBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastSuccessfulBuildIsSet() const
{
    return m_LastSuccessfulBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastSuccessfulBuild()
{
    m_LastSuccessfulBuildIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getLastUnstableBuild() const
{
    return m_LastUnstableBuild;
}
void HudsonmodelFreeStyleProject::setLastUnstableBuild(utility::string_t value)
{
    m_LastUnstableBuild = value;
    m_LastUnstableBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastUnstableBuildIsSet() const
{
    return m_LastUnstableBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastUnstableBuild()
{
    m_LastUnstableBuildIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getLastUnsuccessfulBuild() const
{
    return m_LastUnsuccessfulBuild;
}
void HudsonmodelFreeStyleProject::setLastUnsuccessfulBuild(utility::string_t value)
{
    m_LastUnsuccessfulBuild = value;
    m_LastUnsuccessfulBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::lastUnsuccessfulBuildIsSet() const
{
    return m_LastUnsuccessfulBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetLastUnsuccessfulBuild()
{
    m_LastUnsuccessfulBuildIsSet = false;
}
int32_t HudsonmodelFreeStyleProject::getNextBuildNumber() const
{
    return m_NextBuildNumber;
}
void HudsonmodelFreeStyleProject::setNextBuildNumber(int32_t value)
{
    m_NextBuildNumber = value;
    m_NextBuildNumberIsSet = true;
}
bool HudsonmodelFreeStyleProject::nextBuildNumberIsSet() const
{
    return m_NextBuildNumberIsSet;
}
void HudsonmodelFreeStyleProject::unsetNextBuildNumber()
{
    m_NextBuildNumberIsSet = false;
}
utility::string_t HudsonmodelFreeStyleProject::getQueueItem() const
{
    return m_QueueItem;
}
void HudsonmodelFreeStyleProject::setQueueItem(utility::string_t value)
{
    m_QueueItem = value;
    m_QueueItemIsSet = true;
}
bool HudsonmodelFreeStyleProject::queueItemIsSet() const
{
    return m_QueueItemIsSet;
}
void HudsonmodelFreeStyleProject::unsetQueueItem()
{
    m_QueueItemIsSet = false;
}
bool HudsonmodelFreeStyleProject::getConcurrentBuild() const
{
    return m_ConcurrentBuild;
}
void HudsonmodelFreeStyleProject::setConcurrentBuild(bool value)
{
    m_ConcurrentBuild = value;
    m_ConcurrentBuildIsSet = true;
}
bool HudsonmodelFreeStyleProject::concurrentBuildIsSet() const
{
    return m_ConcurrentBuildIsSet;
}
void HudsonmodelFreeStyleProject::unsetConcurrentBuild()
{
    m_ConcurrentBuildIsSet = false;
}
std::shared_ptr<HudsonscmNullSCM> HudsonmodelFreeStyleProject::getScm() const
{
    return m_Scm;
}
void HudsonmodelFreeStyleProject::setScm(std::shared_ptr<HudsonscmNullSCM> value)
{
    m_Scm = value;
    m_ScmIsSet = true;
}
bool HudsonmodelFreeStyleProject::scmIsSet() const
{
    return m_ScmIsSet;
}
void HudsonmodelFreeStyleProject::unsetScm()
{
    m_ScmIsSet = false;
}

}
}
}
}
