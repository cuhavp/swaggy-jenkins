/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package swagger

type IojenkinsblueoceanrestimplpipelineBranchImplPermissions struct {

	Create bool `json:"create,omitempty"`

	Read bool `json:"read,omitempty"`

	Start bool `json:"start,omitempty"`

	Stop bool `json:"stop,omitempty"`

	Class string `json:"_class,omitempty"`
}