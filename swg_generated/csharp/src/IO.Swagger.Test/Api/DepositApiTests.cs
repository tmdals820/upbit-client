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
    ///  Class for testing DepositApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class DepositApiTests
    {
        private DepositApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new DepositApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of DepositApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' DepositApi
            //Assert.IsInstanceOfType(typeof(DepositApi), instance, "instance is a DepositApi");
        }

        
        /// <summary>
        /// Test DepositCoinAddress
        /// </summary>
        [Test]
        public void DepositCoinAddressTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string currency = null;
            //var response = instance.DepositCoinAddress(currency);
            //Assert.IsInstanceOf<DepositCompleteResponse> (response, "response is DepositCompleteResponse");
        }
        
        /// <summary>
        /// Test DepositCoinAddresses
        /// </summary>
        [Test]
        public void DepositCoinAddressesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.DepositCoinAddresses();
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test DepositGenerateCoinAddress
        /// </summary>
        [Test]
        public void DepositGenerateCoinAddressTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string currency = null;
            //var response = instance.DepositGenerateCoinAddress(currency);
            //Assert.IsInstanceOf<DepositCompleteResponse> (response, "response is DepositCompleteResponse");
        }
        
        /// <summary>
        /// Test DepositInfo
        /// </summary>
        [Test]
        public void DepositInfoTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string uuid = null;
            //string txid = null;
            //string currency = null;
            //var response = instance.DepositInfo(uuid, txid, currency);
            //Assert.IsInstanceOf<Deposit> (response, "response is Deposit");
        }
        
        /// <summary>
        /// Test DepositInfoAll
        /// </summary>
        [Test]
        public void DepositInfoAllTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string currency = null;
            //string state = null;
            //List<string> uuids = null;
            //List<string> txids = null;
            //decimal? limit = null;
            //decimal? page = null;
            //string orderBy = null;
            //var response = instance.DepositInfoAll(currency, state, uuids, txids, limit, page, orderBy);
            //Assert.IsInstanceOf<List<Deposit>> (response, "response is List<Deposit>");
        }
        
    }

}
