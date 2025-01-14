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
    instance = new UpbitOpenApi.OrderApi();
  });

  describe('(package)', function() {
    describe('OrderApi', function() {
      describe('orderCancel', function() {
        it('should call orderCancel successfully', function(done) {
          // TODO: uncomment, update parameter values for orderCancel call and complete the assertions
          /*
          var opts = {};
          opts.uuid = "uuid_example";
          opts.identifier = "identifier_example";

          instance.orderCancel(opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(UpbitOpenApi.Order);
            expect(data.uuid).to.be.a('string');
            expect(data.uuid).to.be("9ca023a5-851b-4fec-9f0a-48cd83c2eaae");
            expect(data.side).to.be.a('string');
            expect(data.side).to.be("ask");
            expect(data.ordType).to.be.a('string');
            expect(data.ordType).to.be("limit");
            expect(data.price).to.be.a('string');
            expect(data.price).to.be("4280000");
            expect(data.state).to.be.a('string');
            expect(data.state).to.be("done");
            expect(data.market).to.be.a('string');
            expect(data.market).to.be("KRW-BTC");
            expect(data.createdAt).to.be.a('string');
            expect(data.createdAt).to.be("2019-01-04T04:48:09.000Z");
            expect(data.volume).to.be.a('string');
            expect(data.volume).to.be("1");
            expect(data.remainingVolume).to.be.a('string');
            expect(data.remainingVolume).to.be("0");
            expect(data.reservedFee).to.be.a('string');
            expect(data.reservedFee).to.be("0");
            expect(data.remainingFee).to.be.a('string');
            expect(data.remainingFee).to.be("0");
            expect(data.paidFee).to.be.a('string');
            expect(data.paidFee).to.be("2140");
            expect(data.locked).to.be.a('string');
            expect(data.locked).to.be("0");
            expect(data.executedVolume).to.be.a('string');
            expect(data.executedVolume).to.be("1");
            expect(data.tradesCount).to.be.a('number');
            expect(data.tradesCount).to.be(1.0);

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('orderChance', function() {
        it('should call orderChance successfully', function(done) {
          // TODO: uncomment, update parameter values for orderChance call and complete the assertions
          /*
          var market = "market_example";

          instance.orderChance(market, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(UpbitOpenApi.OrderChance);
            expect(data.bidFee).to.be.a('string');
            expect(data.bidFee).to.be("0.0015");
            expect(data.askFee).to.be.a('string');
            expect(data.askFee).to.be("0.0015");
            expect(data.market).to.be.a(UpbitOpenApi.Market);
                  expect(data.market.id).to.be.a('string');
              expect(data.market.id).to.be("KRW-BTC");
              expect(data.market.name).to.be.a('string');
              expect(data.market.name).to.be("BTC/KRW");
              {
                let dataCtr = data.market.orderTypes;
                expect(dataCtr).to.be.an(Array);
                expect(dataCtr).to.not.be.empty();
                for (let p in dataCtr) {
                  let data = dataCtr[p];
                  expect(data).to.be.a('string');
                  expect(data).to.be("");
                }
              }
              {
                let dataCtr = data.market.orderSides;
                expect(dataCtr).to.be.an(Array);
                expect(dataCtr).to.not.be.empty();
                for (let p in dataCtr) {
                  let data = dataCtr[p];
                  expect(data).to.be.a('string');
                  expect(data).to.be("");
                }
              }
              expect(data.market.bid).to.be.a(UpbitOpenApi.Bid);
                    expect(data.market.bid.currency).to.be.a('string');
                expect(data.market.bid.currency).to.be("KRW");
                expect(data.market.bid.priceUnit).to.be.a('string');
                expect(data.market.bid.priceUnit).to.be("");
                expect(data.market.bid.minTotal).to.be.a('number');
                expect(data.market.bid.minTotal).to.be(1000.0);
              expect(data.market.ask).to.be.a(UpbitOpenApi.Ask);
                    expect(data.market.ask.currency).to.be.a('string');
                expect(data.market.ask.currency).to.be("KRW");
                expect(data.market.ask.priceUnit).to.be.a('string');
                expect(data.market.ask.priceUnit).to.be("");
                expect(data.market.ask.minTotal).to.be.a('number');
                expect(data.market.ask.minTotal).to.be(1000.0);
              expect(data.market.maxTotal).to.be.a('string');
              expect(data.market.maxTotal).to.be("100000000");
              expect(data.market.state).to.be.a('string');
              expect(data.market.state).to.be("activate");
              expect(data.market.bidAccount).to.be.a(UpbitOpenApi.BidAccount);
                    expect(data.market.bidAccount.currency).to.be.a('string');
                expect(data.market.bidAccount.currency).to.be("KRW");
                expect(data.market.bidAccount.balance).to.be.a('string');
                expect(data.market.bidAccount.balance).to.be("1000000");
                expect(data.market.bidAccount.locked).to.be.a('string');
                expect(data.market.bidAccount.locked).to.be("0");
                expect(data.market.bidAccount.avgBuyPrice).to.be.a('string');
                expect(data.market.bidAccount.avgBuyPrice).to.be("101000");
                expect(data.market.bidAccount.avgBuyPriceModified).to.be.a('boolean');
                expect(data.market.bidAccount.avgBuyPriceModified).to.be(false);
                expect(data.market.bidAccount.unitCurrency).to.be.a('string');
                expect(data.market.bidAccount.unitCurrency).to.be("KRW");
              expect(data.market.askAccount).to.be.a(UpbitOpenApi.AskAccount);
                    expect(data.market.askAccount.currency).to.be.a('string');
                expect(data.market.askAccount.currency).to.be("KRW");
                expect(data.market.askAccount.balance).to.be.a('string');
                expect(data.market.askAccount.balance).to.be("1000000");
                expect(data.market.askAccount.locked).to.be.a('string');
                expect(data.market.askAccount.locked).to.be("0");
                expect(data.market.askAccount.avgBuyPrice).to.be.a('string');
                expect(data.market.askAccount.avgBuyPrice).to.be("101000");
                expect(data.market.askAccount.avgBuyPriceModified).to.be.a('boolean');
                expect(data.market.askAccount.avgBuyPriceModified).to.be(false);
                expect(data.market.askAccount.unitCurrency).to.be.a('string');
                expect(data.market.askAccount.unitCurrency).to.be("KRW");

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('orderInfo', function() {
        it('should call orderInfo successfully', function(done) {
          // TODO: uncomment, update parameter values for orderInfo call and complete the assertions
          /*
          var opts = {};
          opts.uuid = "uuid_example";
          opts.identifier = "identifier_example";

          instance.orderInfo(opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(UpbitOpenApi.OrderInfo);
            expect(data.uuid).to.be.a('string');
            expect(data.uuid).to.be("9ca023a5-851b-4fec-9f0a-48cd83c2eaae");
            expect(data.side).to.be.a('string');
            expect(data.side).to.be("ask");
            expect(data.ordType).to.be.a('string');
            expect(data.ordType).to.be("limit");
            expect(data.price).to.be.a('string');
            expect(data.price).to.be("4280000");
            expect(data.state).to.be.a('string');
            expect(data.state).to.be("done");
            expect(data.market).to.be.a('string');
            expect(data.market).to.be("KRW-BTC");
            expect(data.createdAt).to.be.a('string');
            expect(data.createdAt).to.be("2019-01-04T13:48:09+09:00");
            expect(data.volume).to.be.a('string');
            expect(data.volume).to.be("1");
            expect(data.remainingVolume).to.be.a('string');
            expect(data.remainingVolume).to.be("0");
            expect(data.reservedFee).to.be.a('string');
            expect(data.reservedFee).to.be("0");
            expect(data.remainingFee).to.be.a('string');
            expect(data.remainingFee).to.be("0");
            expect(data.paidFee).to.be.a('string');
            expect(data.paidFee).to.be("2140");
            expect(data.locked).to.be.a('string');
            expect(data.locked).to.be("0");
            expect(data.executedVolume).to.be.a('string');
            expect(data.executedVolume).to.be("1");
            expect(data.tradesCount).to.be.a('number');
            expect(data.tradesCount).to.be(1.0);
            {
              let dataCtr = data.trades;
              expect(dataCtr).to.be.an(Array);
              expect(dataCtr).to.not.be.empty();
              for (let p in dataCtr) {
                let data = dataCtr[p];
                expect(data).to.be.a(UpbitOpenApi.Trade);
                expect(data.market).to.be.a('string');
                expect(data.market).to.be("KRW-BTC");
                expect(data.uuid).to.be.a('string');
                expect(data.uuid).to.be("9e8f8eba-7050-4837-8969-cfc272cbe083");
                expect(data.price).to.be.a('string');
                expect(data.price).to.be("4280000");
                expect(data.volume).to.be.a('string');
                expect(data.volume).to.be("1");
                expect(data.funds).to.be.a('string');
                expect(data.funds).to.be("4280000");
                expect(data.side).to.be.a('string');
                expect(data.side).to.be("ask");
                expect(data.createdAt).to.be.a('string');
                expect(data.createdAt).to.be("2019-01-04T04:48:09.000Z");

                      }
            }

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('orderInfoAll', function() {
        it('should call orderInfoAll successfully', function(done) {
          // TODO: uncomment, update parameter values for orderInfoAll call and complete the assertions
          /*
          var opts = {};
          opts.market = "market_example";
          opts.state = "state_example";
          opts.states = ["states_example"];
          opts.uuids = ["uuids_example"];
          opts.identifiers = ["identifiers_example"];
          opts.kind = "kind_example";
          opts.page = 8.14;
          opts.limit = 8.14;
          opts.orderBy = "orderBy_example";

          instance.orderInfoAll(opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            let dataCtr = data;
            expect(dataCtr).to.be.an(Array);
            expect(dataCtr).to.not.be.empty();
            for (let p in dataCtr) {
              let data = dataCtr[p];
              expect(data).to.be.a(UpbitOpenApi.Order);
              expect(data.uuid).to.be.a('string');
              expect(data.uuid).to.be("9ca023a5-851b-4fec-9f0a-48cd83c2eaae");
              expect(data.side).to.be.a('string');
              expect(data.side).to.be("ask");
              expect(data.ordType).to.be.a('string');
              expect(data.ordType).to.be("limit");
              expect(data.price).to.be.a('string');
              expect(data.price).to.be("4280000");
              expect(data.state).to.be.a('string');
              expect(data.state).to.be("done");
              expect(data.market).to.be.a('string');
              expect(data.market).to.be("KRW-BTC");
              expect(data.createdAt).to.be.a('string');
              expect(data.createdAt).to.be("2019-01-04T04:48:09.000Z");
              expect(data.volume).to.be.a('string');
              expect(data.volume).to.be("1");
              expect(data.remainingVolume).to.be.a('string');
              expect(data.remainingVolume).to.be("0");
              expect(data.reservedFee).to.be.a('string');
              expect(data.reservedFee).to.be("0");
              expect(data.remainingFee).to.be.a('string');
              expect(data.remainingFee).to.be("0");
              expect(data.paidFee).to.be.a('string');
              expect(data.paidFee).to.be("2140");
              expect(data.locked).to.be.a('string');
              expect(data.locked).to.be("0");
              expect(data.executedVolume).to.be.a('string');
              expect(data.executedVolume).to.be("1");
              expect(data.tradesCount).to.be.a('number');
              expect(data.tradesCount).to.be(1.0);
            }

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('orderNew', function() {
        it('should call orderNew successfully', function(done) {
          // TODO: uncomment, update parameter values for orderNew call and complete the assertions
          /*
          var market = "market_example";
          var side = "side_example";
          var volume = "volume_example";
          var price = "price_example";
          var ordType = "ordType_example";
          var opts = {};
          opts.identifier = "identifier_example";

          instance.orderNew(market, side, volume, price, ordType, opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            expect(data).to.be.a(UpbitOpenApi.NewOrder);
            expect(data.uuid).to.be.a('string');
            expect(data.uuid).to.be("9ca023a5-851b-4fec-9f0a-48cd83c2eaae");
            expect(data.side).to.be.a('string');
            expect(data.side).to.be("ask");
            expect(data.ordType).to.be.a('string');
            expect(data.ordType).to.be("limit");
            expect(data.price).to.be.a('string');
            expect(data.price).to.be("4280000");
            expect(data.avgPrice).to.be.a('string');
            expect(data.avgPrice).to.be("0");
            expect(data.state).to.be.a('string');
            expect(data.state).to.be("done");
            expect(data.market).to.be.a('string');
            expect(data.market).to.be("KRW-BTC");
            expect(data.createdAt).to.be.a('string');
            expect(data.createdAt).to.be("2019-01-04T13:48:09+09:00");
            expect(data.volume).to.be.a('string');
            expect(data.volume).to.be("1");
            expect(data.remainingVolume).to.be.a('string');
            expect(data.remainingVolume).to.be("0");
            expect(data.reservedFee).to.be.a('string');
            expect(data.reservedFee).to.be("0");
            expect(data.remainingFee).to.be.a('string');
            expect(data.remainingFee).to.be("0");
            expect(data.paidFee).to.be.a('string');
            expect(data.paidFee).to.be("2140");
            expect(data.locked).to.be.a('string');
            expect(data.locked).to.be("0");
            expect(data.executedVolume).to.be.a('string');
            expect(data.executedVolume).to.be("1");
            expect(data.tradesCount).to.be.a('number');
            expect(data.tradesCount).to.be(1.0);

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('orderOrderbook', function() {
        it('should call orderOrderbook successfully', function(done) {
          // TODO: uncomment, update parameter values for orderOrderbook call and complete the assertions
          /*
          var markets = ["markets_example"];

          instance.orderOrderbook(markets, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            let dataCtr = data;
            expect(dataCtr).to.be.an(Array);
            expect(dataCtr).to.not.be.empty();
            for (let p in dataCtr) {
              let data = dataCtr[p];
              expect(data).to.be.a(UpbitOpenApi.Orderbook);
              expect(data.market).to.be.a('string');
              expect(data.market).to.be("KRW-BTC");
              expect(data.timestamp).to.be.a('number');
              expect(data.timestamp).to.be(1.529910247984E12);
              expect(data.totalAskSize).to.be.a('number');
              expect(data.totalAskSize).to.be(8.83621228);
              expect(data.totalBidSize).to.be.a('number');
              expect(data.totalBidSize).to.be(2.43976741);
              {
                let dataCtr = data.orderbookUnits;
                expect(dataCtr).to.be.an(Array);
                expect(dataCtr).to.not.be.empty();
                for (let p in dataCtr) {
                  let data = dataCtr[p];
                  expect(data).to.be.a(UpbitOpenApi.OrderbookUnit);
                  expect(data.askPrice).to.be.a('number');
                  expect(data.askPrice).to.be(6956000.0);
                  expect(data.bidPrice).to.be.a('number');
                  expect(data.bidPrice).to.be(6954000.0);
                  expect(data.askSize).to.be.a('number');
                  expect(data.askSize).to.be(0.24078656);
                  expect(data.bidSize).to.be.a('number');
                  expect(data.bidSize).to.be(0.00718341);
  
                        }
              }
            }

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
