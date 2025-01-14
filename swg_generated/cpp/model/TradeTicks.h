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
 * TradeTicks.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TradeTicks_H_
#define IO_SWAGGER_CLIENT_MODEL_TradeTicks_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  TradeTicks
    : public ModelBase
{
public:
    TradeTicks();
    virtual ~TradeTicks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TradeTicks members

    /// <summary>
    /// 마켓 구분 코드
    /// </summary>
    utility::string_t getMarket() const;
    bool marketIsSet() const;
    void unsetMarket();
    void setMarket(utility::string_t value);
    /// <summary>
    /// 체결 일자 (UTC 기준)
    /// </summary>
    utility::string_t getTradeDateUtc() const;
    bool tradeDateUtcIsSet() const;
    void unsetTrade_date_utc();
    void setTradeDateUtc(utility::string_t value);
    /// <summary>
    /// 체결 시각 (UTC 기준)
    /// </summary>
    utility::string_t getTradeTimeUtc() const;
    bool tradeTimeUtcIsSet() const;
    void unsetTrade_time_utc();
    void setTradeTimeUtc(utility::string_t value);
    /// <summary>
    /// 체결 타임스탬프
    /// </summary>
    double getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(double value);
    /// <summary>
    /// 체결 가격
    /// </summary>
    double getTradePrice() const;
    bool tradePriceIsSet() const;
    void unsetTrade_price();
    void setTradePrice(double value);
    /// <summary>
    /// 체결량
    /// </summary>
    double getTradeVolume() const;
    bool tradeVolumeIsSet() const;
    void unsetTrade_volume();
    void setTradeVolume(double value);
    /// <summary>
    /// 전일 종가
    /// </summary>
    double getPrevClosingPrice() const;
    bool prevClosingPriceIsSet() const;
    void unsetPrev_closing_price();
    void setPrevClosingPrice(double value);
    /// <summary>
    /// 변화량
    /// </summary>
    double getChangePrice() const;
    bool changePriceIsSet() const;
    void unsetChange_price();
    void setChangePrice(double value);
    /// <summary>
    /// 매도/매수
    /// </summary>
    utility::string_t getAskBid() const;
    bool askBidIsSet() const;
    void unsetAsk_bid();
    void setAskBid(utility::string_t value);
    /// <summary>
    /// 체결 번호 (Unique)  &#x60;sequential_id&#x60; 필드는 체결의 유일성 판단을 위한 근거로 쓰일 수 있습니다. 하지만 체결의 순서를 보장하지는 못합니다. 
    /// </summary>
    double getSequentialId() const;
    bool sequentialIdIsSet() const;
    void unsetSequential_id();
    void setSequentialId(double value);

protected:
    utility::string_t m_Market;
    bool m_MarketIsSet;
    utility::string_t m_Trade_date_utc;
    bool m_Trade_date_utcIsSet;
    utility::string_t m_Trade_time_utc;
    bool m_Trade_time_utcIsSet;
    double m_Timestamp;
    bool m_TimestampIsSet;
    double m_Trade_price;
    bool m_Trade_priceIsSet;
    double m_Trade_volume;
    bool m_Trade_volumeIsSet;
    double m_Prev_closing_price;
    bool m_Prev_closing_priceIsSet;
    double m_Change_price;
    bool m_Change_priceIsSet;
    utility::string_t m_Ask_bid;
    bool m_Ask_bidIsSet;
    double m_Sequential_id;
    bool m_Sequential_idIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TradeTicks_H_ */
