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
 * WithdrawChance.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_WithdrawChance_H_
#define IO_SWAGGER_CLIENT_MODEL_WithdrawChance_H_


#include "../ModelBase.h"

#include "WithdrawLimit.h"
#include "MemberLevel.h"
#include "Account.h"
#include "Currency.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  WithdrawChance
    : public ModelBase
{
public:
    WithdrawChance();
    virtual ~WithdrawChance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WithdrawChance members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MemberLevel> getMemberLevel() const;
    bool memberLevelIsSet() const;
    void unsetMember_level();
    void setMemberLevel(std::shared_ptr<MemberLevel> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Currency> getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();
    void setCurrency(std::shared_ptr<Currency> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Account> getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();
    void setAccount(std::shared_ptr<Account> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<WithdrawLimit> getWithdrawLimit() const;
    bool withdrawLimitIsSet() const;
    void unsetWithdraw_limit();
    void setWithdrawLimit(std::shared_ptr<WithdrawLimit> value);

protected:
    std::shared_ptr<MemberLevel> m_Member_level;
    bool m_Member_levelIsSet;
    std::shared_ptr<Currency> m_Currency;
    bool m_CurrencyIsSet;
    std::shared_ptr<Account> m_Account;
    bool m_AccountIsSet;
    std::shared_ptr<WithdrawLimit> m_Withdraw_limit;
    bool m_Withdraw_limitIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_WithdrawChance_H_ */
