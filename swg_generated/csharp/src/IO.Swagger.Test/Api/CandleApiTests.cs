/* 
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing CandleApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class CandleApiTests
    {
        private CandleApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new CandleApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of CandleApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' CandleApi
            //Assert.IsInstanceOfType(typeof(CandleApi), instance, "instance is a CandleApi");
        }

        
        /// <summary>
        /// Test CandleDays
        /// </summary>
        [Test]
        public void CandleDaysTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string market = null;
            //string to = null;
            //decimal? count = null;
            //string convertingPriceUnit = null;
            //var response = instance.CandleDays(market, to, count, convertingPriceUnit);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test CandleMinutes
        /// </summary>
        [Test]
        public void CandleMinutesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //int? unit = null;
            //string market = null;
            //string to = null;
            //decimal? count = null;
            //var response = instance.CandleMinutes(unit, market, to, count);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test CandleMonth
        /// </summary>
        [Test]
        public void CandleMonthTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string market = null;
            //string to = null;
            //decimal? count = null;
            //var response = instance.CandleMonth(market, to, count);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test CandleWeeks
        /// </summary>
        [Test]
        public void CandleWeeksTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string market = null;
            //string to = null;
            //decimal? count = null;
            //var response = instance.CandleWeeks(market, to, count);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
    }

}
