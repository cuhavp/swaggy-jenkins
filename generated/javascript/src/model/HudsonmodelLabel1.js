/**
 * Swaggy Jenkins
 * Jenkins API client generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.0.1
 * Contact: cliffano@gmail.com
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
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.HudsonmodelLabel1 = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The HudsonmodelLabel1 model module.
   * @module model/HudsonmodelLabel1
   * @version 0.0.1
   */

  /**
   * Constructs a new <code>HudsonmodelLabel1</code>.
   * @alias module:model/HudsonmodelLabel1
   * @class
   */
  var exports = function() {
    var _this = this;


  };

  /**
   * Constructs a <code>HudsonmodelLabel1</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/HudsonmodelLabel1} obj Optional instance to populate.
   * @return {module:model/HudsonmodelLabel1} The populated <code>HudsonmodelLabel1</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


