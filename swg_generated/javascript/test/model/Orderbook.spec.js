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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.UpbitOpenApi);
  }
}(this, function(expect, UpbitOpenApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('Orderbook', function() {
      beforeEach(function() {
        instance = new UpbitOpenApi.Orderbook();
      });

      it('should create an instance of Orderbook', function() {
        // TODO: update the code to test Orderbook
        expect(instance).to.be.a(UpbitOpenApi.Orderbook);
      });

      it('should have the property market (base name: "market")', function() {
        // TODO: update the code to test the property market
        expect(instance).to.have.property('market');
        // expect(instance.market).to.be(expectedValueLiteral);
      });

      it('should have the property timestamp (base name: "timestamp")', function() {
        // TODO: update the code to test the property timestamp
        expect(instance).to.have.property('timestamp');
        // expect(instance.timestamp).to.be(expectedValueLiteral);
      });

      it('should have the property totalAskSize (base name: "total_ask_size")', function() {
        // TODO: update the code to test the property totalAskSize
        expect(instance).to.have.property('totalAskSize');
        // expect(instance.totalAskSize).to.be(expectedValueLiteral);
      });

      it('should have the property totalBidSize (base name: "total_bid_size")', function() {
        // TODO: update the code to test the property totalBidSize
        expect(instance).to.have.property('totalBidSize');
        // expect(instance.totalBidSize).to.be(expectedValueLiteral);
      });

      it('should have the property orderbookUnits (base name: "orderbook_units")', function() {
        // TODO: update the code to test the property orderbookUnits
        expect(instance).to.have.property('orderbookUnits');
        // expect(instance.orderbookUnits).to.be(expectedValueLiteral);
      });

    });
  });

}));
