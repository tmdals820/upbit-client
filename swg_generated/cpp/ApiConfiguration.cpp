/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.17.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "ApiConfiguration.h"

namespace io {
namespace swagger {
namespace client {
namespace api {

ApiConfiguration::ApiConfiguration()
{
}

ApiConfiguration::~ApiConfiguration()
{
}

web::http::client::http_client_config& ApiConfiguration::getHttpConfig()
{
    return m_HttpConfig;
}

void ApiConfiguration::setHttpConfig( web::http::client::http_client_config& value )
{
    m_HttpConfig = value;
}

utility::string_t ApiConfiguration::getBaseUrl() const
{
    return m_BaseUrl;
}

void ApiConfiguration::setBaseUrl( const utility::string_t value )
{
    m_BaseUrl = value;
}

utility::string_t ApiConfiguration::getUserAgent() const
{
    return m_UserAgent;
}

void ApiConfiguration::setUserAgent( const utility::string_t value )
{
    m_UserAgent = value;
}

std::map<utility::string_t, utility::string_t>& ApiConfiguration::getDefaultHeaders()
{
    return m_DefaultHeaders;
}

utility::string_t ApiConfiguration::getApiKey( const utility::string_t& prefix) const
{
    auto result = m_ApiKeys.find(prefix);
    if( result != m_ApiKeys.end() )
    {
        return result->second;
    }
    return utility::conversions::to_string_t("");
}

void ApiConfiguration::setApiKey( const utility::string_t& prefix, const utility::string_t& apiKey )
{
    m_ApiKeys[prefix] = apiKey;
}

}
}
}
}
