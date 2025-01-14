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
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IAccountApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// 전체 계좌 조회
        /// </summary>
        /// <remarks>
        /// ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>List&lt;Account&gt;</returns>
        List<Account> AccountInfo ();

        /// <summary>
        /// 전체 계좌 조회
        /// </summary>
        /// <remarks>
        /// ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>ApiResponse of List&lt;Account&gt;</returns>
        ApiResponse<List<Account>> AccountInfoWithHttpInfo ();
        /// <summary>
        /// 입출금 현황
        /// </summary>
        /// <remarks>
        /// ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>List&lt;Wallet&gt;</returns>
        List<Wallet> AccountWallet ();

        /// <summary>
        /// 입출금 현황
        /// </summary>
        /// <remarks>
        /// ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>ApiResponse of List&lt;Wallet&gt;</returns>
        ApiResponse<List<Wallet>> AccountWalletWithHttpInfo ();
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// 전체 계좌 조회
        /// </summary>
        /// <remarks>
        /// ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of List&lt;Account&gt;</returns>
        System.Threading.Tasks.Task<List<Account>> AccountInfoAsync ();

        /// <summary>
        /// 전체 계좌 조회
        /// </summary>
        /// <remarks>
        /// ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of ApiResponse (List&lt;Account&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<Account>>> AccountInfoAsyncWithHttpInfo ();
        /// <summary>
        /// 입출금 현황
        /// </summary>
        /// <remarks>
        /// ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of List&lt;Wallet&gt;</returns>
        System.Threading.Tasks.Task<List<Wallet>> AccountWalletAsync ();

        /// <summary>
        /// 입출금 현황
        /// </summary>
        /// <remarks>
        /// ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of ApiResponse (List&lt;Wallet&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<Wallet>>> AccountWalletAsyncWithHttpInfo ();
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class AccountApi : IAccountApi
    {
        private IO.Swagger.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="AccountApi"/> class.
        /// </summary>
        /// <returns></returns>
        public AccountApi(String basePath)
        {
            this.Configuration = new IO.Swagger.Client.Configuration { BasePath = basePath };

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="AccountApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public AccountApi(IO.Swagger.Client.Configuration configuration = null)
        {
            if (configuration == null) // use the default one in Configuration
                this.Configuration = IO.Swagger.Client.Configuration.Default;
            else
                this.Configuration = configuration;

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.Configuration.ApiClient.RestClient.BaseUrl.ToString();
        }

        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        [Obsolete("SetBasePath is deprecated, please do 'Configuration.ApiClient = new ApiClient(\"http://new-path\")' instead.")]
        public void SetBasePath(String basePath)
        {
            // do nothing
        }

        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public IO.Swagger.Client.Configuration Configuration {get; set;}

        /// <summary>
        /// Provides a factory method hook for the creation of exceptions.
        /// </summary>
        public IO.Swagger.Client.ExceptionFactory ExceptionFactory
        {
            get
            {
                if (_exceptionFactory != null && _exceptionFactory.GetInvocationList().Length > 1)
                {
                    throw new InvalidOperationException("Multicast delegate for ExceptionFactory is unsupported.");
                }
                return _exceptionFactory;
            }
            set { _exceptionFactory = value; }
        }

        /// <summary>
        /// Gets the default header.
        /// </summary>
        /// <returns>Dictionary of HTTP header</returns>
        [Obsolete("DefaultHeader is deprecated, please use Configuration.DefaultHeader instead.")]
        public IDictionary<String, String> DefaultHeader()
        {
            return new ReadOnlyDictionary<string, string>(this.Configuration.DefaultHeader);
        }

        /// <summary>
        /// Add default header.
        /// </summary>
        /// <param name="key">Header field name.</param>
        /// <param name="value">Header field value.</param>
        /// <returns></returns>
        [Obsolete("AddDefaultHeader is deprecated, please use Configuration.AddDefaultHeader instead.")]
        public void AddDefaultHeader(string key, string value)
        {
            this.Configuration.AddDefaultHeader(key, value);
        }

        /// <summary>
        /// 전체 계좌 조회 ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>List&lt;Account&gt;</returns>
        public List<Account> AccountInfo ()
        {
             ApiResponse<List<Account>> localVarResponse = AccountInfoWithHttpInfo();
             return localVarResponse.Data;
        }

        /// <summary>
        /// 전체 계좌 조회 ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>ApiResponse of List&lt;Account&gt;</returns>
        public ApiResponse< List<Account> > AccountInfoWithHttpInfo ()
        {

            var localVarPath = "/accounts";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);


            // authentication (Bearer) required
            if (!String.IsNullOrEmpty(this.Configuration.GetApiKeyWithPrefix("Authorization")))
            {
                localVarHeaderParams["Authorization"] = this.Configuration.GetApiKeyWithPrefix("Authorization");
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("AccountInfo", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<Account>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Account>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Account>)));
        }

        /// <summary>
        /// 전체 계좌 조회 ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of List&lt;Account&gt;</returns>
        public async System.Threading.Tasks.Task<List<Account>> AccountInfoAsync ()
        {
             ApiResponse<List<Account>> localVarResponse = await AccountInfoAsyncWithHttpInfo();
             return localVarResponse.Data;

        }

        /// <summary>
        /// 전체 계좌 조회 ## 내가 보유한 자산 리스트를 보여줍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of ApiResponse (List&lt;Account&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<Account>>> AccountInfoAsyncWithHttpInfo ()
        {

            var localVarPath = "/accounts";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);


            // authentication (Bearer) required
            if (!String.IsNullOrEmpty(this.Configuration.GetApiKeyWithPrefix("Authorization")))
            {
                localVarHeaderParams["Authorization"] = this.Configuration.GetApiKeyWithPrefix("Authorization");
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("AccountInfo", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<Account>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Account>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Account>)));
        }

        /// <summary>
        /// 입출금 현황 ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>List&lt;Wallet&gt;</returns>
        public List<Wallet> AccountWallet ()
        {
             ApiResponse<List<Wallet>> localVarResponse = AccountWalletWithHttpInfo();
             return localVarResponse.Data;
        }

        /// <summary>
        /// 입출금 현황 ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>ApiResponse of List&lt;Wallet&gt;</returns>
        public ApiResponse< List<Wallet> > AccountWalletWithHttpInfo ()
        {

            var localVarPath = "/status/wallet";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);


            // authentication (Bearer) required
            if (!String.IsNullOrEmpty(this.Configuration.GetApiKeyWithPrefix("Authorization")))
            {
                localVarHeaderParams["Authorization"] = this.Configuration.GetApiKeyWithPrefix("Authorization");
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("AccountWallet", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<Wallet>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Wallet>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Wallet>)));
        }

        /// <summary>
        /// 입출금 현황 ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of List&lt;Wallet&gt;</returns>
        public async System.Threading.Tasks.Task<List<Wallet>> AccountWalletAsync ()
        {
             ApiResponse<List<Wallet>> localVarResponse = await AccountWalletAsyncWithHttpInfo();
             return localVarResponse.Data;

        }

        /// <summary>
        /// 입출금 현황 ## 입출금 현황 및 블록 상태를 조회합니다.  **NOTE**: 입출금 현황 데이터는 실제 서비스 상태와 다를 수 있습니다.  입출금 현황 API에서 제공하는 입출금 상태, 블록 상태 정보는 수 분 정도 지연되어 반영될 수 있습니다. 본 API는 참고용으로만 사용하시길 바라며 실제 입출금을 수행하기 전에는 반드시 업비트 공지사항 및 입출금 현황 페이지를 참고해주시기 바랍니다. 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <returns>Task of ApiResponse (List&lt;Wallet&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<Wallet>>> AccountWalletAsyncWithHttpInfo ()
        {

            var localVarPath = "/status/wallet";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);


            // authentication (Bearer) required
            if (!String.IsNullOrEmpty(this.Configuration.GetApiKeyWithPrefix("Authorization")))
            {
                localVarHeaderParams["Authorization"] = this.Configuration.GetApiKeyWithPrefix("Authorization");
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("AccountWallet", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<Wallet>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (List<Wallet>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<Wallet>)));
        }

    }
}
