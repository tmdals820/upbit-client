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

  beforeEach(function() {
    instance = new UpbitOpenApi.TradeApi();
  });

  describe('(package)', function() {
    describe('TradeApi', function() {
      describe('tradeTicker', function() {
        it('should call tradeTicker successfully', function(done) {
          // TODO: uncomment, update parameter values for tradeTicker call and complete the assertions
          /*
          var markets = "markets_example";

          instance.tradeTicker(markets, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(Object);
            // expect(data).to.be(null);

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('tradeTicks', function() {
        it('should call tradeTicks successfully', function(done) {
          // TODO: uncomment, update parameter values for tradeTicks call and complete the assertions
          /*
          var market = "market_example";
          var opts = {};
          opts.to = "to_example";
          opts.count = 8.14;
          opts.cursor = "cursor_example";
          opts.daysAgo = 8.14;

          instance.tradeTicks(market, opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(Object);
            // expect(data).to.be(null);

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
    });
  });

}));
