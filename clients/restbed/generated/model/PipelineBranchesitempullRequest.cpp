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



#include "PipelineBranchesitempullRequest.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

PipelineBranchesitempullRequest::PipelineBranchesitempullRequest()
{
    m_Author = "";
    m_Id = "";
    m_Title = "";
    m_Url = "";
    m__class = "";
    
}

PipelineBranchesitempullRequest::~PipelineBranchesitempullRequest()
{
}

std::string PipelineBranchesitempullRequest::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Author", m_Author);
	pt.put("Id", m_Id);
	pt.put("Title", m_Title);
	pt.put("Url", m_Url);
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void PipelineBranchesitempullRequest::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Author = pt.get("Author", "");
	m_Id = pt.get("Id", "");
	m_Title = pt.get("Title", "");
	m_Url = pt.get("Url", "");
	m__class = pt.get("_class", "");
}

std::shared_ptr<PipelineBranchesitempullRequestlinks> PipelineBranchesitempullRequest::getLinks() const
{
    return m__links;
}
void PipelineBranchesitempullRequest::setLinks(std::shared_ptr<PipelineBranchesitempullRequestlinks> value)
{
    m__links = value;
}
std::string PipelineBranchesitempullRequest::getAuthor() const
{
    return m_Author;
}
void PipelineBranchesitempullRequest::setAuthor(std::string value)
{
    m_Author = value;
}
std::string PipelineBranchesitempullRequest::getId() const
{
    return m_Id;
}
void PipelineBranchesitempullRequest::setId(std::string value)
{
    m_Id = value;
}
std::string PipelineBranchesitempullRequest::getTitle() const
{
    return m_Title;
}
void PipelineBranchesitempullRequest::setTitle(std::string value)
{
    m_Title = value;
}
std::string PipelineBranchesitempullRequest::getUrl() const
{
    return m_Url;
}
void PipelineBranchesitempullRequest::setUrl(std::string value)
{
    m_Url = value;
}
std::string PipelineBranchesitempullRequest::getClass() const
{
    return m__class;
}
void PipelineBranchesitempullRequest::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

