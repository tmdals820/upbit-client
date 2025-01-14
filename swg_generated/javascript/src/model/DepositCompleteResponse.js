/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.17
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
    if (!root.UpbitOpenApi) {
      root.UpbitOpenApi = {};
    }
    root.UpbitOpenApi.DepositCompleteResponse = factory(root.UpbitOpenApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';

  /**
   * The DepositCompleteResponse model module.
   * @module model/DepositCompleteResponse
   * @version 1.1.6
   */

  /**
   * Constructs a new <code>DepositCompleteResponse</code>.
   * @alias module:model/DepositCompleteResponse
   * @class
   */
  var exports = function() {
  };

  /**
   * Constructs a <code>DepositCompleteResponse</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/DepositCompleteResponse} obj Optional instance to populate.
   * @return {module:model/DepositCompleteResponse} The populated <code>DepositCompleteResponse</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('currency'))
        obj.currency = ApiClient.convertToType(data['currency'], 'String');
      if (data.hasOwnProperty('deposit_address'))
        obj.depositAddress = ApiClient.convertToType(data['deposit_address'], 'String');
      if (data.hasOwnProperty('secondary_address'))
        obj.secondaryAddress = ApiClient.convertToType(data['secondary_address'], 'String');
    }
    return obj;
  }

  /**
   * 화폐를 의미하는 영문 대문자 코드
   * @member {String} currency
   */
  exports.prototype.currency = undefined;

  /**
   * 입금 주소
   * @member {String} depositAddress
   */
  exports.prototype.depositAddress = undefined;

  /**
   * 2차 입금 주소
   * @member {String} secondaryAddress
   */
  exports.prototype.secondaryAddress = undefined;

  return exports;

}));
