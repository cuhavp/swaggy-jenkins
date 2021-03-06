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
package io.swagger.client.models

import io.swagger.client.models.HudsonMasterComputerexecutors
import io.swagger.client.models.HudsonMasterComputermonitorData
import io.swagger.client.models.Label1

/**
 * 
 * @param _class 
 * @param displayName 
 * @param executors 
 * @param icon 
 * @param iconClassName 
 * @param idle 
 * @param jnlpAgent 
 * @param launchSupported 
 * @param loadStatistics 
 * @param manualLaunchAllowed 
 * @param monitorData 
 * @param numExecutors 
 * @param offline 
 * @param offlineCause 
 * @param offlineCauseReason 
 * @param temporarilyOffline 
 */
data class HudsonMasterComputer (
    val _class: kotlin.String? = null,
    val displayName: kotlin.String? = null,
    val executors: kotlin.Array<HudsonMasterComputerexecutors>? = null,
    val icon: kotlin.String? = null,
    val iconClassName: kotlin.String? = null,
    val idle: kotlin.Boolean? = null,
    val jnlpAgent: kotlin.Boolean? = null,
    val launchSupported: kotlin.Boolean? = null,
    val loadStatistics: Label1? = null,
    val manualLaunchAllowed: kotlin.Boolean? = null,
    val monitorData: HudsonMasterComputermonitorData? = null,
    val numExecutors: kotlin.Int? = null,
    val offline: kotlin.Boolean? = null,
    val offlineCause: kotlin.String? = null,
    val offlineCauseReason: kotlin.String? = null,
    val temporarilyOffline: kotlin.Boolean? = null
) {

}
