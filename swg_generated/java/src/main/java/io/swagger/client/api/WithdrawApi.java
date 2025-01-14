/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.api;

import io.swagger.client.ApiCallback;
import io.swagger.client.ApiClient;
import io.swagger.client.ApiException;
import io.swagger.client.ApiResponse;
import io.swagger.client.Configuration;
import io.swagger.client.Pair;
import io.swagger.client.ProgressRequestBody;
import io.swagger.client.ProgressResponseBody;

import com.google.gson.reflect.TypeToken;

import java.io.IOException;


import java.math.BigDecimal;
import io.swagger.client.model.Error;
import io.swagger.client.model.Withdraw;
import io.swagger.client.model.WithdrawChance;
import io.swagger.client.model.WithdrawCoin;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class WithdrawApi {
    private ApiClient apiClient;

    public WithdrawApi() {
        this(Configuration.getDefaultApiClient());
    }

    public WithdrawApi(ApiClient apiClient) {
        this.apiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return apiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.apiClient = apiClient;
    }

    /**
     * Build call for withdrawChance
     * @param currency Currency Symbol  (required)
     * @param progressListener Progress listener
     * @param progressRequestListener Progress request listener
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     */
    public com.squareup.okhttp.Call withdrawChanceCall(String currency, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/withdraws/chance";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        if (currency != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("currency", currency));

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();

        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) localVarHeaderParams.put("Accept", localVarAccept);

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        if(progressListener != null) {
            apiClient.getHttpClient().networkInterceptors().add(new com.squareup.okhttp.Interceptor() {
                @Override
                public com.squareup.okhttp.Response intercept(com.squareup.okhttp.Interceptor.Chain chain) throws IOException {
                    com.squareup.okhttp.Response originalResponse = chain.proceed(chain.request());
                    return originalResponse.newBuilder()
                    .body(new ProgressResponseBody(originalResponse.body(), progressListener))
                    .build();
                }
            });
        }

        String[] localVarAuthNames = new String[] { "Bearer" };
        return apiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAuthNames, progressRequestListener);
    }

    @SuppressWarnings("rawtypes")
    private com.squareup.okhttp.Call withdrawChanceValidateBeforeCall(String currency, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        
        // verify the required parameter 'currency' is set
        if (currency == null) {
            throw new ApiException("Missing the required parameter 'currency' when calling withdrawChance(Async)");
        }
        

        com.squareup.okhttp.Call call = withdrawChanceCall(currency, progressListener, progressRequestListener);
        return call;

    }

    /**
     * 출금 가능 정보
     * ## 해당 통화의 가능한 출금 정보를 확인한다. 
     * @param currency Currency Symbol  (required)
     * @return WithdrawChance
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public WithdrawChance withdrawChance(String currency) throws ApiException {
        ApiResponse<WithdrawChance> resp = withdrawChanceWithHttpInfo(currency);
        return resp.getData();
    }

    /**
     * 출금 가능 정보
     * ## 해당 통화의 가능한 출금 정보를 확인한다. 
     * @param currency Currency Symbol  (required)
     * @return ApiResponse&lt;WithdrawChance&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public ApiResponse<WithdrawChance> withdrawChanceWithHttpInfo(String currency) throws ApiException {
        com.squareup.okhttp.Call call = withdrawChanceValidateBeforeCall(currency, null, null);
        Type localVarReturnType = new TypeToken<WithdrawChance>(){}.getType();
        return apiClient.execute(call, localVarReturnType);
    }

    /**
     * 출금 가능 정보 (asynchronously)
     * ## 해당 통화의 가능한 출금 정보를 확인한다. 
     * @param currency Currency Symbol  (required)
     * @param callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     */
    public com.squareup.okhttp.Call withdrawChanceAsync(String currency, final ApiCallback<WithdrawChance> callback) throws ApiException {

        ProgressResponseBody.ProgressListener progressListener = null;
        ProgressRequestBody.ProgressRequestListener progressRequestListener = null;

        if (callback != null) {
            progressListener = new ProgressResponseBody.ProgressListener() {
                @Override
                public void update(long bytesRead, long contentLength, boolean done) {
                    callback.onDownloadProgress(bytesRead, contentLength, done);
                }
            };

            progressRequestListener = new ProgressRequestBody.ProgressRequestListener() {
                @Override
                public void onRequestProgress(long bytesWritten, long contentLength, boolean done) {
                    callback.onUploadProgress(bytesWritten, contentLength, done);
                }
            };
        }

        com.squareup.okhttp.Call call = withdrawChanceValidateBeforeCall(currency, progressListener, progressRequestListener);
        Type localVarReturnType = new TypeToken<WithdrawChance>(){}.getType();
        apiClient.executeAsync(call, localVarReturnType, callback);
        return call;
    }
    /**
     * Build call for withdrawCoin
     * @param currency Currency 코드  (required)
     * @param amount 출금 수량  (required)
     * @param address 출금 가능 주소에 등록된 출금 주소  (required)
     * @param secondaryAddress 2차 출금 주소 (필요한 코인에 한해서)  (optional)
     * @param transactionType 출금 유형 - default : 일반출금 - internal : 바로출금  (optional)
     * @param progressListener Progress listener
     * @param progressRequestListener Progress request listener
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     */
    public com.squareup.okhttp.Call withdrawCoinCall(String currency, String amount, String address, String secondaryAddress, String transactionType, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/withdraws/coin";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();

        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        if (currency != null)
        localVarFormParams.put("currency", currency);
        if (amount != null)
        localVarFormParams.put("amount", amount);
        if (address != null)
        localVarFormParams.put("address", address);
        if (secondaryAddress != null)
        localVarFormParams.put("secondary_address", secondaryAddress);
        if (transactionType != null)
        localVarFormParams.put("transaction_type", transactionType);

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) localVarHeaderParams.put("Accept", localVarAccept);

        final String[] localVarContentTypes = {
            "multipart/form-data"
        };
        final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        if(progressListener != null) {
            apiClient.getHttpClient().networkInterceptors().add(new com.squareup.okhttp.Interceptor() {
                @Override
                public com.squareup.okhttp.Response intercept(com.squareup.okhttp.Interceptor.Chain chain) throws IOException {
                    com.squareup.okhttp.Response originalResponse = chain.proceed(chain.request());
                    return originalResponse.newBuilder()
                    .body(new ProgressResponseBody(originalResponse.body(), progressListener))
                    .build();
                }
            });
        }

        String[] localVarAuthNames = new String[] { "Bearer" };
        return apiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAuthNames, progressRequestListener);
    }

    @SuppressWarnings("rawtypes")
    private com.squareup.okhttp.Call withdrawCoinValidateBeforeCall(String currency, String amount, String address, String secondaryAddress, String transactionType, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        
        // verify the required parameter 'currency' is set
        if (currency == null) {
            throw new ApiException("Missing the required parameter 'currency' when calling withdrawCoin(Async)");
        }
        
        // verify the required parameter 'amount' is set
        if (amount == null) {
            throw new ApiException("Missing the required parameter 'amount' when calling withdrawCoin(Async)");
        }
        
        // verify the required parameter 'address' is set
        if (address == null) {
            throw new ApiException("Missing the required parameter 'address' when calling withdrawCoin(Async)");
        }
        

        com.squareup.okhttp.Call call = withdrawCoinCall(currency, amount, address, secondaryAddress, transactionType, progressListener, progressRequestListener);
        return call;

    }

    /**
     * 코인 출금하기
     * ## 코인 출금을 요청한다.  **NOTE**: 바로출금 이용 시 유의사항  업비트 회원의 주소가 아닌 주소로 바로출금을 요청하는 경우, 출금이 정상적으로 수행되지 않습니다. 반드시 주소를 확인 후 출금을 진행하시기 바랍니다. 
     * @param currency Currency 코드  (required)
     * @param amount 출금 수량  (required)
     * @param address 출금 가능 주소에 등록된 출금 주소  (required)
     * @param secondaryAddress 2차 출금 주소 (필요한 코인에 한해서)  (optional)
     * @param transactionType 출금 유형 - default : 일반출금 - internal : 바로출금  (optional)
     * @return WithdrawCoin
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public WithdrawCoin withdrawCoin(String currency, String amount, String address, String secondaryAddress, String transactionType) throws ApiException {
        ApiResponse<WithdrawCoin> resp = withdrawCoinWithHttpInfo(currency, amount, address, secondaryAddress, transactionType);
        return resp.getData();
    }

    /**
     * 코인 출금하기
     * ## 코인 출금을 요청한다.  **NOTE**: 바로출금 이용 시 유의사항  업비트 회원의 주소가 아닌 주소로 바로출금을 요청하는 경우, 출금이 정상적으로 수행되지 않습니다. 반드시 주소를 확인 후 출금을 진행하시기 바랍니다. 
     * @param currency Currency 코드  (required)
     * @param amount 출금 수량  (required)
     * @param address 출금 가능 주소에 등록된 출금 주소  (required)
     * @param secondaryAddress 2차 출금 주소 (필요한 코인에 한해서)  (optional)
     * @param transactionType 출금 유형 - default : 일반출금 - internal : 바로출금  (optional)
     * @return ApiResponse&lt;WithdrawCoin&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public ApiResponse<WithdrawCoin> withdrawCoinWithHttpInfo(String currency, String amount, String address, String secondaryAddress, String transactionType) throws ApiException {
        com.squareup.okhttp.Call call = withdrawCoinValidateBeforeCall(currency, amount, address, secondaryAddress, transactionType, null, null);
        Type localVarReturnType = new TypeToken<WithdrawCoin>(){}.getType();
        return apiClient.execute(call, localVarReturnType);
    }

    /**
     * 코인 출금하기 (asynchronously)
     * ## 코인 출금을 요청한다.  **NOTE**: 바로출금 이용 시 유의사항  업비트 회원의 주소가 아닌 주소로 바로출금을 요청하는 경우, 출금이 정상적으로 수행되지 않습니다. 반드시 주소를 확인 후 출금을 진행하시기 바랍니다. 
     * @param currency Currency 코드  (required)
     * @param amount 출금 수량  (required)
     * @param address 출금 가능 주소에 등록된 출금 주소  (required)
     * @param secondaryAddress 2차 출금 주소 (필요한 코인에 한해서)  (optional)
     * @param transactionType 출금 유형 - default : 일반출금 - internal : 바로출금  (optional)
     * @param callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     */
    public com.squareup.okhttp.Call withdrawCoinAsync(String currency, String amount, String address, String secondaryAddress, String transactionType, final ApiCallback<WithdrawCoin> callback) throws ApiException {

        ProgressResponseBody.ProgressListener progressListener = null;
        ProgressRequestBody.ProgressRequestListener progressRequestListener = null;

        if (callback != null) {
            progressListener = new ProgressResponseBody.ProgressListener() {
                @Override
                public void update(long bytesRead, long contentLength, boolean done) {
                    callback.onDownloadProgress(bytesRead, contentLength, done);
                }
            };

            progressRequestListener = new ProgressRequestBody.ProgressRequestListener() {
                @Override
                public void onRequestProgress(long bytesWritten, long contentLength, boolean done) {
                    callback.onUploadProgress(bytesWritten, contentLength, done);
                }
            };
        }

        com.squareup.okhttp.Call call = withdrawCoinValidateBeforeCall(currency, amount, address, secondaryAddress, transactionType, progressListener, progressRequestListener);
        Type localVarReturnType = new TypeToken<WithdrawCoin>(){}.getType();
        apiClient.executeAsync(call, localVarReturnType, callback);
        return call;
    }
    /**
     * Build call for withdrawInfo
     * @param uuid 출금 UUID  (optional)
     * @param txid 출금 TXID  (optional)
     * @param currency Currency 코드  (optional)
     * @param progressListener Progress listener
     * @param progressRequestListener Progress request listener
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     */
    public com.squareup.okhttp.Call withdrawInfoCall(String uuid, String txid, String currency, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/withdraw";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        if (uuid != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("uuid", uuid));
        if (txid != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("txid", txid));
        if (currency != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("currency", currency));

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();

        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) localVarHeaderParams.put("Accept", localVarAccept);

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        if(progressListener != null) {
            apiClient.getHttpClient().networkInterceptors().add(new com.squareup.okhttp.Interceptor() {
                @Override
                public com.squareup.okhttp.Response intercept(com.squareup.okhttp.Interceptor.Chain chain) throws IOException {
                    com.squareup.okhttp.Response originalResponse = chain.proceed(chain.request());
                    return originalResponse.newBuilder()
                    .body(new ProgressResponseBody(originalResponse.body(), progressListener))
                    .build();
                }
            });
        }

        String[] localVarAuthNames = new String[] { "Bearer" };
        return apiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAuthNames, progressRequestListener);
    }

    @SuppressWarnings("rawtypes")
    private com.squareup.okhttp.Call withdrawInfoValidateBeforeCall(String uuid, String txid, String currency, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        

        com.squareup.okhttp.Call call = withdrawInfoCall(uuid, txid, currency, progressListener, progressRequestListener);
        return call;

    }

    /**
     * 개별 출금 조회
     * ## 출금 UUID를 통해 개별 출금 정보를 조회한다. 
     * @param uuid 출금 UUID  (optional)
     * @param txid 출금 TXID  (optional)
     * @param currency Currency 코드  (optional)
     * @return Withdraw
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public Withdraw withdrawInfo(String uuid, String txid, String currency) throws ApiException {
        ApiResponse<Withdraw> resp = withdrawInfoWithHttpInfo(uuid, txid, currency);
        return resp.getData();
    }

    /**
     * 개별 출금 조회
     * ## 출금 UUID를 통해 개별 출금 정보를 조회한다. 
     * @param uuid 출금 UUID  (optional)
     * @param txid 출금 TXID  (optional)
     * @param currency Currency 코드  (optional)
     * @return ApiResponse&lt;Withdraw&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public ApiResponse<Withdraw> withdrawInfoWithHttpInfo(String uuid, String txid, String currency) throws ApiException {
        com.squareup.okhttp.Call call = withdrawInfoValidateBeforeCall(uuid, txid, currency, null, null);
        Type localVarReturnType = new TypeToken<Withdraw>(){}.getType();
        return apiClient.execute(call, localVarReturnType);
    }

    /**
     * 개별 출금 조회 (asynchronously)
     * ## 출금 UUID를 통해 개별 출금 정보를 조회한다. 
     * @param uuid 출금 UUID  (optional)
     * @param txid 출금 TXID  (optional)
     * @param currency Currency 코드  (optional)
     * @param callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     */
    public com.squareup.okhttp.Call withdrawInfoAsync(String uuid, String txid, String currency, final ApiCallback<Withdraw> callback) throws ApiException {

        ProgressResponseBody.ProgressListener progressListener = null;
        ProgressRequestBody.ProgressRequestListener progressRequestListener = null;

        if (callback != null) {
            progressListener = new ProgressResponseBody.ProgressListener() {
                @Override
                public void update(long bytesRead, long contentLength, boolean done) {
                    callback.onDownloadProgress(bytesRead, contentLength, done);
                }
            };

            progressRequestListener = new ProgressRequestBody.ProgressRequestListener() {
                @Override
                public void onRequestProgress(long bytesWritten, long contentLength, boolean done) {
                    callback.onUploadProgress(bytesWritten, contentLength, done);
                }
            };
        }

        com.squareup.okhttp.Call call = withdrawInfoValidateBeforeCall(uuid, txid, currency, progressListener, progressRequestListener);
        Type localVarReturnType = new TypeToken<Withdraw>(){}.getType();
        apiClient.executeAsync(call, localVarReturnType, callback);
        return call;
    }
    /**
     * Build call for withdrawInfoAll
     * @param currency Currency 코드  (optional)
     * @param state 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨  (optional)
     * @param uuids 출금 UUID의 목록  (optional)
     * @param txids 출금 TXID의 목록  (optional)
     * @param limit 개수 제한 (default: 100, max: 100)  (optional)
     * @param page 페이지 수, default: 1  (optional)
     * @param orderBy 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default)  (optional)
     * @param progressListener Progress listener
     * @param progressRequestListener Progress request listener
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     */
    public com.squareup.okhttp.Call withdrawInfoAllCall(String currency, String state, List<String> uuids, List<String> txids, BigDecimal limit, BigDecimal page, String orderBy, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/withdraws";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();
        if (currency != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("currency", currency));
        if (state != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("state", state));
        if (uuids != null)
        localVarCollectionQueryParams.addAll(apiClient.parameterToPairs("multi", "uuids", uuids));
        if (txids != null)
        localVarCollectionQueryParams.addAll(apiClient.parameterToPairs("multi", "txids", txids));
        if (limit != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("limit", limit));
        if (page != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("page", page));
        if (orderBy != null)
        localVarQueryParams.addAll(apiClient.parameterToPair("order_by", orderBy));

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();

        Map<String, Object> localVarFormParams = new HashMap<String, Object>();

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) localVarHeaderParams.put("Accept", localVarAccept);

        final String[] localVarContentTypes = {
            
        };
        final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        if(progressListener != null) {
            apiClient.getHttpClient().networkInterceptors().add(new com.squareup.okhttp.Interceptor() {
                @Override
                public com.squareup.okhttp.Response intercept(com.squareup.okhttp.Interceptor.Chain chain) throws IOException {
                    com.squareup.okhttp.Response originalResponse = chain.proceed(chain.request());
                    return originalResponse.newBuilder()
                    .body(new ProgressResponseBody(originalResponse.body(), progressListener))
                    .build();
                }
            });
        }

        String[] localVarAuthNames = new String[] { "Bearer" };
        return apiClient.buildCall(localVarPath, "GET", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAuthNames, progressRequestListener);
    }

    @SuppressWarnings("rawtypes")
    private com.squareup.okhttp.Call withdrawInfoAllValidateBeforeCall(String currency, String state, List<String> uuids, List<String> txids, BigDecimal limit, BigDecimal page, String orderBy, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        

        com.squareup.okhttp.Call call = withdrawInfoAllCall(currency, state, uuids, txids, limit, page, orderBy, progressListener, progressRequestListener);
        return call;

    }

    /**
     * 출금 리스트 조회
     * ## 출금 리스트를 조회한다. 
     * @param currency Currency 코드  (optional)
     * @param state 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨  (optional)
     * @param uuids 출금 UUID의 목록  (optional)
     * @param txids 출금 TXID의 목록  (optional)
     * @param limit 개수 제한 (default: 100, max: 100)  (optional)
     * @param page 페이지 수, default: 1  (optional)
     * @param orderBy 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default)  (optional)
     * @return List&lt;Withdraw&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public List<Withdraw> withdrawInfoAll(String currency, String state, List<String> uuids, List<String> txids, BigDecimal limit, BigDecimal page, String orderBy) throws ApiException {
        ApiResponse<List<Withdraw>> resp = withdrawInfoAllWithHttpInfo(currency, state, uuids, txids, limit, page, orderBy);
        return resp.getData();
    }

    /**
     * 출금 리스트 조회
     * ## 출금 리스트를 조회한다. 
     * @param currency Currency 코드  (optional)
     * @param state 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨  (optional)
     * @param uuids 출금 UUID의 목록  (optional)
     * @param txids 출금 TXID의 목록  (optional)
     * @param limit 개수 제한 (default: 100, max: 100)  (optional)
     * @param page 페이지 수, default: 1  (optional)
     * @param orderBy 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default)  (optional)
     * @return ApiResponse&lt;List&lt;Withdraw&gt;&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public ApiResponse<List<Withdraw>> withdrawInfoAllWithHttpInfo(String currency, String state, List<String> uuids, List<String> txids, BigDecimal limit, BigDecimal page, String orderBy) throws ApiException {
        com.squareup.okhttp.Call call = withdrawInfoAllValidateBeforeCall(currency, state, uuids, txids, limit, page, orderBy, null, null);
        Type localVarReturnType = new TypeToken<List<Withdraw>>(){}.getType();
        return apiClient.execute(call, localVarReturnType);
    }

    /**
     * 출금 리스트 조회 (asynchronously)
     * ## 출금 리스트를 조회한다. 
     * @param currency Currency 코드  (optional)
     * @param state 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨  (optional)
     * @param uuids 출금 UUID의 목록  (optional)
     * @param txids 출금 TXID의 목록  (optional)
     * @param limit 개수 제한 (default: 100, max: 100)  (optional)
     * @param page 페이지 수, default: 1  (optional)
     * @param orderBy 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default)  (optional)
     * @param callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     */
    public com.squareup.okhttp.Call withdrawInfoAllAsync(String currency, String state, List<String> uuids, List<String> txids, BigDecimal limit, BigDecimal page, String orderBy, final ApiCallback<List<Withdraw>> callback) throws ApiException {

        ProgressResponseBody.ProgressListener progressListener = null;
        ProgressRequestBody.ProgressRequestListener progressRequestListener = null;

        if (callback != null) {
            progressListener = new ProgressResponseBody.ProgressListener() {
                @Override
                public void update(long bytesRead, long contentLength, boolean done) {
                    callback.onDownloadProgress(bytesRead, contentLength, done);
                }
            };

            progressRequestListener = new ProgressRequestBody.ProgressRequestListener() {
                @Override
                public void onRequestProgress(long bytesWritten, long contentLength, boolean done) {
                    callback.onUploadProgress(bytesWritten, contentLength, done);
                }
            };
        }

        com.squareup.okhttp.Call call = withdrawInfoAllValidateBeforeCall(currency, state, uuids, txids, limit, page, orderBy, progressListener, progressRequestListener);
        Type localVarReturnType = new TypeToken<List<Withdraw>>(){}.getType();
        apiClient.executeAsync(call, localVarReturnType, callback);
        return call;
    }
    /**
     * Build call for withdrawKrw
     * @param amount 출금 원화 수량  (required)
     * @param progressListener Progress listener
     * @param progressRequestListener Progress request listener
     * @return Call to execute
     * @throws ApiException If fail to serialize the request body object
     */
    public com.squareup.okhttp.Call withdrawKrwCall(String amount, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/withdraws/krw";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();

        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        if (amount != null)
        localVarFormParams.put("amount", amount);

        final String[] localVarAccepts = {
            "application/json"
        };
        final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) localVarHeaderParams.put("Accept", localVarAccept);

        final String[] localVarContentTypes = {
            "multipart/form-data"
        };
        final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        if(progressListener != null) {
            apiClient.getHttpClient().networkInterceptors().add(new com.squareup.okhttp.Interceptor() {
                @Override
                public com.squareup.okhttp.Response intercept(com.squareup.okhttp.Interceptor.Chain chain) throws IOException {
                    com.squareup.okhttp.Response originalResponse = chain.proceed(chain.request());
                    return originalResponse.newBuilder()
                    .body(new ProgressResponseBody(originalResponse.body(), progressListener))
                    .build();
                }
            });
        }

        String[] localVarAuthNames = new String[] { "Bearer" };
        return apiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAuthNames, progressRequestListener);
    }

    @SuppressWarnings("rawtypes")
    private com.squareup.okhttp.Call withdrawKrwValidateBeforeCall(String amount, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        
        // verify the required parameter 'amount' is set
        if (amount == null) {
            throw new ApiException("Missing the required parameter 'amount' when calling withdrawKrw(Async)");
        }
        

        com.squareup.okhttp.Call call = withdrawKrwCall(amount, progressListener, progressRequestListener);
        return call;

    }

    /**
     * 원화 출금하기
     * ## 원화 출금을 요청한다. 등록된 출금 계좌로 출금된다. 
     * @param amount 출금 원화 수량  (required)
     * @return Withdraw
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public Withdraw withdrawKrw(String amount) throws ApiException {
        ApiResponse<Withdraw> resp = withdrawKrwWithHttpInfo(amount);
        return resp.getData();
    }

    /**
     * 원화 출금하기
     * ## 원화 출금을 요청한다. 등록된 출금 계좌로 출금된다. 
     * @param amount 출금 원화 수량  (required)
     * @return ApiResponse&lt;Withdraw&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public ApiResponse<Withdraw> withdrawKrwWithHttpInfo(String amount) throws ApiException {
        com.squareup.okhttp.Call call = withdrawKrwValidateBeforeCall(amount, null, null);
        Type localVarReturnType = new TypeToken<Withdraw>(){}.getType();
        return apiClient.execute(call, localVarReturnType);
    }

    /**
     * 원화 출금하기 (asynchronously)
     * ## 원화 출금을 요청한다. 등록된 출금 계좌로 출금된다. 
     * @param amount 출금 원화 수량  (required)
     * @param callback The callback to be executed when the API call finishes
     * @return The request call
     * @throws ApiException If fail to process the API call, e.g. serializing the request body object
     */
    public com.squareup.okhttp.Call withdrawKrwAsync(String amount, final ApiCallback<Withdraw> callback) throws ApiException {

        ProgressResponseBody.ProgressListener progressListener = null;
        ProgressRequestBody.ProgressRequestListener progressRequestListener = null;

        if (callback != null) {
            progressListener = new ProgressResponseBody.ProgressListener() {
                @Override
                public void update(long bytesRead, long contentLength, boolean done) {
                    callback.onDownloadProgress(bytesRead, contentLength, done);
                }
            };

            progressRequestListener = new ProgressRequestBody.ProgressRequestListener() {
                @Override
                public void onRequestProgress(long bytesWritten, long contentLength, boolean done) {
                    callback.onUploadProgress(bytesWritten, contentLength, done);
                }
            };
        }

        com.squareup.okhttp.Call call = withdrawKrwValidateBeforeCall(amount, progressListener, progressRequestListener);
        Type localVarReturnType = new TypeToken<Withdraw>(){}.getType();
        apiClient.executeAsync(call, localVarReturnType, callback);
        return call;
    }
}
