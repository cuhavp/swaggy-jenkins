/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/FreeStyleBuild', 'model/FreeStyleProjectactions', 'model/FreeStyleProjecthealthReport', 'model/NullSCM'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./FreeStyleBuild'), require('./FreeStyleProjectactions'), require('./FreeStyleProjecthealthReport'), require('./NullSCM'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.FreeStyleProject = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.FreeStyleBuild, root.SwaggyJenkins.FreeStyleProjectactions, root.SwaggyJenkins.FreeStyleProjecthealthReport, root.SwaggyJenkins.NullSCM);
  }
}(this, function(ApiClient, FreeStyleBuild, FreeStyleProjectactions, FreeStyleProjecthealthReport, NullSCM) {
  'use strict';




  /**
   * The FreeStyleProject model module.
   * @module model/FreeStyleProject
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>FreeStyleProject</code>.
   * @alias module:model/FreeStyleProject
   * @class
   */
  var exports = function() {
    var _this = this;




























  };

  /**
   * Constructs a <code>FreeStyleProject</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/FreeStyleProject} obj Optional instance to populate.
   * @return {module:model/FreeStyleProject} The populated <code>FreeStyleProject</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('url')) {
        obj['url'] = ApiClient.convertToType(data['url'], 'String');
      }
      if (data.hasOwnProperty('color')) {
        obj['color'] = ApiClient.convertToType(data['color'], 'String');
      }
      if (data.hasOwnProperty('actions')) {
        obj['actions'] = ApiClient.convertToType(data['actions'], [FreeStyleProjectactions]);
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('displayName')) {
        obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
      }
      if (data.hasOwnProperty('displayNameOrNull')) {
        obj['displayNameOrNull'] = ApiClient.convertToType(data['displayNameOrNull'], 'String');
      }
      if (data.hasOwnProperty('fullDisplayName')) {
        obj['fullDisplayName'] = ApiClient.convertToType(data['fullDisplayName'], 'String');
      }
      if (data.hasOwnProperty('fullName')) {
        obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
      }
      if (data.hasOwnProperty('buildable')) {
        obj['buildable'] = ApiClient.convertToType(data['buildable'], 'Boolean');
      }
      if (data.hasOwnProperty('builds')) {
        obj['builds'] = ApiClient.convertToType(data['builds'], [FreeStyleBuild]);
      }
      if (data.hasOwnProperty('firstBuild')) {
        obj['firstBuild'] = FreeStyleBuild.constructFromObject(data['firstBuild']);
      }
      if (data.hasOwnProperty('healthReport')) {
        obj['healthReport'] = ApiClient.convertToType(data['healthReport'], [FreeStyleProjecthealthReport]);
      }
      if (data.hasOwnProperty('inQueue')) {
        obj['inQueue'] = ApiClient.convertToType(data['inQueue'], 'Boolean');
      }
      if (data.hasOwnProperty('keepDependencies')) {
        obj['keepDependencies'] = ApiClient.convertToType(data['keepDependencies'], 'Boolean');
      }
      if (data.hasOwnProperty('lastBuild')) {
        obj['lastBuild'] = FreeStyleBuild.constructFromObject(data['lastBuild']);
      }
      if (data.hasOwnProperty('lastCompletedBuild')) {
        obj['lastCompletedBuild'] = FreeStyleBuild.constructFromObject(data['lastCompletedBuild']);
      }
      if (data.hasOwnProperty('lastFailedBuild')) {
        obj['lastFailedBuild'] = ApiClient.convertToType(data['lastFailedBuild'], 'String');
      }
      if (data.hasOwnProperty('lastStableBuild')) {
        obj['lastStableBuild'] = FreeStyleBuild.constructFromObject(data['lastStableBuild']);
      }
      if (data.hasOwnProperty('lastSuccessfulBuild')) {
        obj['lastSuccessfulBuild'] = FreeStyleBuild.constructFromObject(data['lastSuccessfulBuild']);
      }
      if (data.hasOwnProperty('lastUnstableBuild')) {
        obj['lastUnstableBuild'] = ApiClient.convertToType(data['lastUnstableBuild'], 'String');
      }
      if (data.hasOwnProperty('lastUnsuccessfulBuild')) {
        obj['lastUnsuccessfulBuild'] = ApiClient.convertToType(data['lastUnsuccessfulBuild'], 'String');
      }
      if (data.hasOwnProperty('nextBuildNumber')) {
        obj['nextBuildNumber'] = ApiClient.convertToType(data['nextBuildNumber'], 'Number');
      }
      if (data.hasOwnProperty('queueItem')) {
        obj['queueItem'] = ApiClient.convertToType(data['queueItem'], 'String');
      }
      if (data.hasOwnProperty('concurrentBuild')) {
        obj['concurrentBuild'] = ApiClient.convertToType(data['concurrentBuild'], 'Boolean');
      }
      if (data.hasOwnProperty('scm')) {
        obj['scm'] = NullSCM.constructFromObject(data['scm']);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {String} url
   */
  exports.prototype['url'] = undefined;
  /**
   * @member {String} color
   */
  exports.prototype['color'] = undefined;
  /**
   * @member {Array.<module:model/FreeStyleProjectactions>} actions
   */
  exports.prototype['actions'] = undefined;
  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {String} displayName
   */
  exports.prototype['displayName'] = undefined;
  /**
   * @member {String} displayNameOrNull
   */
  exports.prototype['displayNameOrNull'] = undefined;
  /**
   * @member {String} fullDisplayName
   */
  exports.prototype['fullDisplayName'] = undefined;
  /**
   * @member {String} fullName
   */
  exports.prototype['fullName'] = undefined;
  /**
   * @member {Boolean} buildable
   */
  exports.prototype['buildable'] = undefined;
  /**
   * @member {Array.<module:model/FreeStyleBuild>} builds
   */
  exports.prototype['builds'] = undefined;
  /**
   * @member {module:model/FreeStyleBuild} firstBuild
   */
  exports.prototype['firstBuild'] = undefined;
  /**
   * @member {Array.<module:model/FreeStyleProjecthealthReport>} healthReport
   */
  exports.prototype['healthReport'] = undefined;
  /**
   * @member {Boolean} inQueue
   */
  exports.prototype['inQueue'] = undefined;
  /**
   * @member {Boolean} keepDependencies
   */
  exports.prototype['keepDependencies'] = undefined;
  /**
   * @member {module:model/FreeStyleBuild} lastBuild
   */
  exports.prototype['lastBuild'] = undefined;
  /**
   * @member {module:model/FreeStyleBuild} lastCompletedBuild
   */
  exports.prototype['lastCompletedBuild'] = undefined;
  /**
   * @member {String} lastFailedBuild
   */
  exports.prototype['lastFailedBuild'] = undefined;
  /**
   * @member {module:model/FreeStyleBuild} lastStableBuild
   */
  exports.prototype['lastStableBuild'] = undefined;
  /**
   * @member {module:model/FreeStyleBuild} lastSuccessfulBuild
   */
  exports.prototype['lastSuccessfulBuild'] = undefined;
  /**
   * @member {String} lastUnstableBuild
   */
  exports.prototype['lastUnstableBuild'] = undefined;
  /**
   * @member {String} lastUnsuccessfulBuild
   */
  exports.prototype['lastUnsuccessfulBuild'] = undefined;
  /**
   * @member {Number} nextBuildNumber
   */
  exports.prototype['nextBuildNumber'] = undefined;
  /**
   * @member {String} queueItem
   */
  exports.prototype['queueItem'] = undefined;
  /**
   * @member {Boolean} concurrentBuild
   */
  exports.prototype['concurrentBuild'] = undefined;
  /**
   * @member {module:model/NullSCM} scm
   */
  exports.prototype['scm'] = undefined;



  return exports;
}));

