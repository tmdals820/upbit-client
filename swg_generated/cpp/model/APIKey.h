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

/*
 * APIKey.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_APIKey_H_
#define IO_SWAGGER_CLIENT_MODEL_APIKey_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  APIKey
    : public ModelBase
{
public:
    APIKey();
    virtual ~APIKey();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// APIKey members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetAccess_key();
    void setAccessKey(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExpireAt() const;
    bool expireAtIsSet() const;
    void unsetExpire_at();
    void setExpireAt(utility::string_t value);

protected:
    utility::string_t m_Access_key;
    bool m_Access_keyIsSet;
    utility::string_t m_Expire_at;
    bool m_Expire_atIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_APIKey_H_ */
