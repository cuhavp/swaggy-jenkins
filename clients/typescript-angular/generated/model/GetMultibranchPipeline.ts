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

import * as models from './models';

export interface GetMultibranchPipeline {
    "displayName"?: string;
    "estimatedDurationInMillis"?: number;
    "latestRun"?: string;
    "name"?: string;
    "organization"?: string;
    "weatherScore"?: number;
    "branchNames"?: Array<string>;
    "numberOfFailingBranches"?: number;
    "numberOfFailingPullRequests"?: number;
    "numberOfSuccessfulBranches"?: number;
    "numberOfSuccessfulPullRequests"?: number;
    "totalNumberOfBranches"?: number;
    "totalNumberOfPullRequests"?: number;
    "class"?: string;
}
