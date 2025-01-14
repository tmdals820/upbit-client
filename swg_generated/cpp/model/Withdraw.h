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
 * Withdraw.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Withdraw_H_
#define IO_SWAGGER_CLIENT_MODEL_Withdraw_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Withdraw
    : public ModelBase
{
public:
    Withdraw();
    virtual ~Withdraw();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Withdraw members

    /// <summary>
    /// 입출금 종류
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 출금의 고유 아이디
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();
    void setUuid(utility::string_t value);
    /// <summary>
    /// 화폐를 의미하는 영문 대문자 코드
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();
    void setCurrency(utility::string_t value);
    /// <summary>
    /// 출금의 트랜잭션 아이디
    /// </summary>
    utility::string_t getTxid() const;
    bool txidIsSet() const;
    void unsetTxid();
    void setTxid(utility::string_t value);
    /// <summary>
    /// 출금 상태
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();
    void setState(utility::string_t value);
    /// <summary>
    /// 출금 생성 시간
    /// </summary>
    utility::string_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();
    void setCreatedAt(utility::string_t value);
    /// <summary>
    /// 출금 완료 시간
    /// </summary>
    utility::string_t getDoneAt() const;
    bool doneAtIsSet() const;
    void unsetDone_at();
    void setDoneAt(utility::string_t value);
    /// <summary>
    /// 출금 금액/수량
    /// </summary>
    utility::string_t getAmount() const;
    bool amountIsSet() const;
    void unsetAmount();
    void setAmount(utility::string_t value);
    /// <summary>
    /// 출금 수수료
    /// </summary>
    utility::string_t getFee() const;
    bool feeIsSet() const;
    void unsetFee();
    void setFee(utility::string_t value);
    /// <summary>
    /// 출금 유형 - default : 일반출금 - internal : 바로출금  String 
    /// </summary>
    utility::string_t getTransactionType() const;
    bool transactionTypeIsSet() const;
    void unsetTransaction_type();
    void setTransactionType(utility::string_t value);

protected:
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
    utility::string_t m_Txid;
    bool m_TxidIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    utility::string_t m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Done_at;
    bool m_Done_atIsSet;
    utility::string_t m_Amount;
    bool m_AmountIsSet;
    utility::string_t m_Fee;
    bool m_FeeIsSet;
    utility::string_t m_Transaction_type;
    bool m_Transaction_typeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Withdraw_H_ */
