/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Hudson.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Hudson::Hudson()
{
    m__class = U("");
    m__classIsSet = false;
    m_AssignedLabelsIsSet = false;
    m_Mode = U("");
    m_ModeIsSet = false;
    m_NodeDescription = U("");
    m_NodeDescriptionIsSet = false;
    m_NodeName = U("");
    m_NodeNameIsSet = false;
    m_NumExecutors = 0;
    m_NumExecutorsIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_JobsIsSet = false;
    m_PrimaryViewIsSet = false;
    m_QuietingDown = false;
    m_QuietingDownIsSet = false;
    m_SlaveAgentPort = 0;
    m_SlaveAgentPortIsSet = false;
    m_UnlabeledLoadIsSet = false;
    m_UseCrumbs = false;
    m_UseCrumbsIsSet = false;
    m_UseSecurity = false;
    m_UseSecurityIsSet = false;
    m_ViewsIsSet = false;
}

Hudson::~Hudson()
{
}

void Hudson::validate()
{
    // TODO: implement validation
}

web::json::value Hudson::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_AssignedLabels )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("assignedLabels")] = web::json::value::array(jsonArray);
        }
    }
    if(m_ModeIsSet)
    {
        val[U("mode")] = ModelBase::toJson(m_Mode);
    }
    if(m_NodeDescriptionIsSet)
    {
        val[U("nodeDescription")] = ModelBase::toJson(m_NodeDescription);
    }
    if(m_NodeNameIsSet)
    {
        val[U("nodeName")] = ModelBase::toJson(m_NodeName);
    }
    if(m_NumExecutorsIsSet)
    {
        val[U("numExecutors")] = ModelBase::toJson(m_NumExecutors);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Jobs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("jobs")] = web::json::value::array(jsonArray);
        }
    }
    if(m_PrimaryViewIsSet)
    {
        val[U("primaryView")] = ModelBase::toJson(m_PrimaryView);
    }
    if(m_QuietingDownIsSet)
    {
        val[U("quietingDown")] = ModelBase::toJson(m_QuietingDown);
    }
    if(m_SlaveAgentPortIsSet)
    {
        val[U("slaveAgentPort")] = ModelBase::toJson(m_SlaveAgentPort);
    }
    if(m_UnlabeledLoadIsSet)
    {
        val[U("unlabeledLoad")] = ModelBase::toJson(m_UnlabeledLoad);
    }
    if(m_UseCrumbsIsSet)
    {
        val[U("useCrumbs")] = ModelBase::toJson(m_UseCrumbs);
    }
    if(m_UseSecurityIsSet)
    {
        val[U("useSecurity")] = ModelBase::toJson(m_UseSecurity);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Views )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[U("views")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void Hudson::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    {
        m_AssignedLabels.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("assignedLabels")))
        {
        for( auto& item : val[U("assignedLabels")].as_array() )
        {
            if(item.is_null())
            {
                m_AssignedLabels.push_back( std::shared_ptr<HudsonassignedLabels>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonassignedLabels> newItem(new HudsonassignedLabels());
                newItem->fromJson(item);
                m_AssignedLabels.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("mode")))
    {
        setMode(ModelBase::stringFromJson(val[U("mode")]));
    }
    if(val.has_field(U("nodeDescription")))
    {
        setNodeDescription(ModelBase::stringFromJson(val[U("nodeDescription")]));
    }
    if(val.has_field(U("nodeName")))
    {
        setNodeName(ModelBase::stringFromJson(val[U("nodeName")]));
    }
    if(val.has_field(U("numExecutors")))
    {
        setNumExecutors(ModelBase::int32_tFromJson(val[U("numExecutors")]));
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
    }
    {
        m_Jobs.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("jobs")))
        {
        for( auto& item : val[U("jobs")].as_array() )
        {
            if(item.is_null())
            {
                m_Jobs.push_back( std::shared_ptr<FreeStyleProject>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleProject> newItem(new FreeStyleProject());
                newItem->fromJson(item);
                m_Jobs.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(U("primaryView")))
    {
        if(!val[U("primaryView")].is_null())
        {
            std::shared_ptr<AllView> newItem(new AllView());
            newItem->fromJson(val[U("primaryView")]);
            setPrimaryView( newItem );
        }
    }
    if(val.has_field(U("quietingDown")))
    {
        setQuietingDown(ModelBase::boolFromJson(val[U("quietingDown")]));
    }
    if(val.has_field(U("slaveAgentPort")))
    {
        setSlaveAgentPort(ModelBase::int32_tFromJson(val[U("slaveAgentPort")]));
    }
    if(val.has_field(U("unlabeledLoad")))
    {
        if(!val[U("unlabeledLoad")].is_null())
        {
            std::shared_ptr<UnlabeledLoadStatistics> newItem(new UnlabeledLoadStatistics());
            newItem->fromJson(val[U("unlabeledLoad")]);
            setUnlabeledLoad( newItem );
        }
    }
    if(val.has_field(U("useCrumbs")))
    {
        setUseCrumbs(ModelBase::boolFromJson(val[U("useCrumbs")]));
    }
    if(val.has_field(U("useSecurity")))
    {
        setUseSecurity(ModelBase::boolFromJson(val[U("useSecurity")]));
    }
    {
        m_Views.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("views")))
        {
        for( auto& item : val[U("views")].as_array() )
        {
            if(item.is_null())
            {
                m_Views.push_back( std::shared_ptr<AllView>(nullptr) );
            }
            else
            {
                std::shared_ptr<AllView> newItem(new AllView());
                newItem->fromJson(item);
                m_Views.push_back( newItem );
            }
        }
        }
    }
}

void Hudson::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_AssignedLabels )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("assignedLabels"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_ModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mode"), m_Mode));
        
    }
    if(m_NodeDescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("nodeDescription"), m_NodeDescription));
        
    }
    if(m_NodeNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("nodeName"), m_NodeName));
        
    }
    if(m_NumExecutorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("numExecutors"), m_NumExecutors));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Jobs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("jobs"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_PrimaryViewIsSet)
    {
        if (m_PrimaryView.get())
        {
            m_PrimaryView->toMultipart(multipart, U("primaryView."));
        }
        
    }
    if(m_QuietingDownIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("quietingDown"), m_QuietingDown));
    }
    if(m_SlaveAgentPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("slaveAgentPort"), m_SlaveAgentPort));
    }
    if(m_UnlabeledLoadIsSet)
    {
        if (m_UnlabeledLoad.get())
        {
            m_UnlabeledLoad->toMultipart(multipart, U("unlabeledLoad."));
        }
        
    }
    if(m_UseCrumbsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("useCrumbs"), m_UseCrumbs));
    }
    if(m_UseSecurityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("useSecurity"), m_UseSecurity));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Views )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("views"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
}

void Hudson::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_AssignedLabels.clear();
        if(multipart->hasContent(U("assignedLabels")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("assignedLabels"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_AssignedLabels.push_back( std::shared_ptr<HudsonassignedLabels>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonassignedLabels> newItem(new HudsonassignedLabels());
                newItem->fromJson(item);
                m_AssignedLabels.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("mode")))
    {
        setMode(ModelBase::stringFromHttpContent(multipart->getContent(U("mode"))));
    }
    if(multipart->hasContent(U("nodeDescription")))
    {
        setNodeDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("nodeDescription"))));
    }
    if(multipart->hasContent(U("nodeName")))
    {
        setNodeName(ModelBase::stringFromHttpContent(multipart->getContent(U("nodeName"))));
    }
    if(multipart->hasContent(U("numExecutors")))
    {
        setNumExecutors(ModelBase::int32_tFromHttpContent(multipart->getContent(U("numExecutors"))));
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
    }
    {
        m_Jobs.clear();
        if(multipart->hasContent(U("jobs")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("jobs"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Jobs.push_back( std::shared_ptr<FreeStyleProject>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleProject> newItem(new FreeStyleProject());
                newItem->fromJson(item);
                m_Jobs.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(U("primaryView")))
    {
        if(multipart->hasContent(U("primaryView")))
        {
            std::shared_ptr<AllView> newItem(new AllView());
            newItem->fromMultiPart(multipart, U("primaryView."));
            setPrimaryView( newItem );
        }
    }
    if(multipart->hasContent(U("quietingDown")))
    {
        setQuietingDown(ModelBase::boolFromHttpContent(multipart->getContent(U("quietingDown"))));
    }
    if(multipart->hasContent(U("slaveAgentPort")))
    {
        setSlaveAgentPort(ModelBase::int32_tFromHttpContent(multipart->getContent(U("slaveAgentPort"))));
    }
    if(multipart->hasContent(U("unlabeledLoad")))
    {
        if(multipart->hasContent(U("unlabeledLoad")))
        {
            std::shared_ptr<UnlabeledLoadStatistics> newItem(new UnlabeledLoadStatistics());
            newItem->fromMultiPart(multipart, U("unlabeledLoad."));
            setUnlabeledLoad( newItem );
        }
    }
    if(multipart->hasContent(U("useCrumbs")))
    {
        setUseCrumbs(ModelBase::boolFromHttpContent(multipart->getContent(U("useCrumbs"))));
    }
    if(multipart->hasContent(U("useSecurity")))
    {
        setUseSecurity(ModelBase::boolFromHttpContent(multipart->getContent(U("useSecurity"))));
    }
    {
        m_Views.clear();
        if(multipart->hasContent(U("views")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("views"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Views.push_back( std::shared_ptr<AllView>(nullptr) );
            }
            else
            {
                std::shared_ptr<AllView> newItem(new AllView());
                newItem->fromJson(item);
                m_Views.push_back( newItem );
            }
        }
        }
    }
}

utility::string_t Hudson::getClass() const
{
    return m__class;
}


void Hudson::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool Hudson::classIsSet() const
{
    return m__classIsSet;
}

void Hudson::unset_class()
{
    m__classIsSet = false;
}

std::vector<std::shared_ptr<HudsonassignedLabels>>& Hudson::getAssignedLabels()
{
    return m_AssignedLabels;
}

void Hudson::setAssignedLabels(std::vector<std::shared_ptr<HudsonassignedLabels>> value)
{
    m_AssignedLabels = value;
    m_AssignedLabelsIsSet = true;
}
bool Hudson::assignedLabelsIsSet() const
{
    return m_AssignedLabelsIsSet;
}

void Hudson::unsetAssignedLabels()
{
    m_AssignedLabelsIsSet = false;
}

utility::string_t Hudson::getMode() const
{
    return m_Mode;
}


void Hudson::setMode(utility::string_t value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}
bool Hudson::modeIsSet() const
{
    return m_ModeIsSet;
}

void Hudson::unsetMode()
{
    m_ModeIsSet = false;
}

utility::string_t Hudson::getNodeDescription() const
{
    return m_NodeDescription;
}


void Hudson::setNodeDescription(utility::string_t value)
{
    m_NodeDescription = value;
    m_NodeDescriptionIsSet = true;
}
bool Hudson::nodeDescriptionIsSet() const
{
    return m_NodeDescriptionIsSet;
}

void Hudson::unsetNodeDescription()
{
    m_NodeDescriptionIsSet = false;
}

utility::string_t Hudson::getNodeName() const
{
    return m_NodeName;
}


void Hudson::setNodeName(utility::string_t value)
{
    m_NodeName = value;
    m_NodeNameIsSet = true;
}
bool Hudson::nodeNameIsSet() const
{
    return m_NodeNameIsSet;
}

void Hudson::unsetNodeName()
{
    m_NodeNameIsSet = false;
}

int32_t Hudson::getNumExecutors() const
{
    return m_NumExecutors;
}


void Hudson::setNumExecutors(int32_t value)
{
    m_NumExecutors = value;
    m_NumExecutorsIsSet = true;
}
bool Hudson::numExecutorsIsSet() const
{
    return m_NumExecutorsIsSet;
}

void Hudson::unsetNumExecutors()
{
    m_NumExecutorsIsSet = false;
}

utility::string_t Hudson::getDescription() const
{
    return m_Description;
}


void Hudson::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Hudson::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Hudson::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::vector<std::shared_ptr<FreeStyleProject>>& Hudson::getJobs()
{
    return m_Jobs;
}

void Hudson::setJobs(std::vector<std::shared_ptr<FreeStyleProject>> value)
{
    m_Jobs = value;
    m_JobsIsSet = true;
}
bool Hudson::jobsIsSet() const
{
    return m_JobsIsSet;
}

void Hudson::unsetJobs()
{
    m_JobsIsSet = false;
}

std::shared_ptr<AllView> Hudson::getPrimaryView() const
{
    return m_PrimaryView;
}


void Hudson::setPrimaryView(std::shared_ptr<AllView> value)
{
    m_PrimaryView = value;
    m_PrimaryViewIsSet = true;
}
bool Hudson::primaryViewIsSet() const
{
    return m_PrimaryViewIsSet;
}

void Hudson::unsetPrimaryView()
{
    m_PrimaryViewIsSet = false;
}

bool Hudson::getQuietingDown() const
{
    return m_QuietingDown;
}


void Hudson::setQuietingDown(bool value)
{
    m_QuietingDown = value;
    m_QuietingDownIsSet = true;
}
bool Hudson::quietingDownIsSet() const
{
    return m_QuietingDownIsSet;
}

void Hudson::unsetQuietingDown()
{
    m_QuietingDownIsSet = false;
}

int32_t Hudson::getSlaveAgentPort() const
{
    return m_SlaveAgentPort;
}


void Hudson::setSlaveAgentPort(int32_t value)
{
    m_SlaveAgentPort = value;
    m_SlaveAgentPortIsSet = true;
}
bool Hudson::slaveAgentPortIsSet() const
{
    return m_SlaveAgentPortIsSet;
}

void Hudson::unsetSlaveAgentPort()
{
    m_SlaveAgentPortIsSet = false;
}

std::shared_ptr<UnlabeledLoadStatistics> Hudson::getUnlabeledLoad() const
{
    return m_UnlabeledLoad;
}


void Hudson::setUnlabeledLoad(std::shared_ptr<UnlabeledLoadStatistics> value)
{
    m_UnlabeledLoad = value;
    m_UnlabeledLoadIsSet = true;
}
bool Hudson::unlabeledLoadIsSet() const
{
    return m_UnlabeledLoadIsSet;
}

void Hudson::unsetUnlabeledLoad()
{
    m_UnlabeledLoadIsSet = false;
}

bool Hudson::getUseCrumbs() const
{
    return m_UseCrumbs;
}


void Hudson::setUseCrumbs(bool value)
{
    m_UseCrumbs = value;
    m_UseCrumbsIsSet = true;
}
bool Hudson::useCrumbsIsSet() const
{
    return m_UseCrumbsIsSet;
}

void Hudson::unsetUseCrumbs()
{
    m_UseCrumbsIsSet = false;
}

bool Hudson::getUseSecurity() const
{
    return m_UseSecurity;
}


void Hudson::setUseSecurity(bool value)
{
    m_UseSecurity = value;
    m_UseSecurityIsSet = true;
}
bool Hudson::useSecurityIsSet() const
{
    return m_UseSecurityIsSet;
}

void Hudson::unsetUseSecurity()
{
    m_UseSecurityIsSet = false;
}

std::vector<std::shared_ptr<AllView>>& Hudson::getViews()
{
    return m_Views;
}

void Hudson::setViews(std::vector<std::shared_ptr<AllView>> value)
{
    m_Views = value;
    m_ViewsIsSet = true;
}
bool Hudson::viewsIsSet() const
{
    return m_ViewsIsSet;
}

void Hudson::unsetViews()
{
    m_ViewsIsSet = false;
}

}
}
}
}

