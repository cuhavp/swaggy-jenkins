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

import { GithubRepositorieslinks } from './githubRepositorieslinks';
import { GithubRepository } from './githubRepository';


export interface GithubRepositories {
    class?: string;

    links?: GithubRepositorieslinks;

    items?: Array<GithubRepository>;

    lastPage?: number;

    nextPage?: number;

    pageSize?: number;

}
