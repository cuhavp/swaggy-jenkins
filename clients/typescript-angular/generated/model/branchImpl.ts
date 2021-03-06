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

import { BranchImpllinks } from './branchImpllinks';
import { BranchImplpermissions } from './branchImplpermissions';
import { PipelineRunImpl } from './pipelineRunImpl';
import { StringParameterDefinition } from './stringParameterDefinition';


export interface BranchImpl {
    class?: string;

    displayName?: string;

    estimatedDurationInMillis?: number;

    fullDisplayName?: string;

    fullName?: string;

    name?: string;

    organization?: string;

    parameters?: Array<StringParameterDefinition>;

    permissions?: BranchImplpermissions;

    weatherScore?: number;

    pullRequest?: string;

    links?: BranchImpllinks;

    latestRun?: PipelineRunImpl;

}
