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



#include "CandleMinutes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CandleMinutes::CandleMinutes()
{
    m_Market = utility::conversions::to_string_t("");
    m_MarketIsSet = false;
    m_Candle_date_time_utc = utility::conversions::to_string_t("");
    m_Candle_date_time_utcIsSet = false;
    m_Candle_date_time_kst = utility::conversions::to_string_t("");
    m_Candle_date_time_kstIsSet = false;
    m_Opening_price = 0.0;
    m_Opening_priceIsSet = false;
    m_High_price = 0.0;
    m_High_priceIsSet = false;
    m_Low_price = 0.0;
    m_Low_priceIsSet = false;
    m_Trade_price = 0.0;
    m_Trade_priceIsSet = false;
    m_Timestamp = 0.0;
    m_TimestampIsSet = false;
    m_Candle_acc_trade_price = 0.0;
    m_Candle_acc_trade_priceIsSet = false;
    m_Candle_acc_trade_volume = 0.0;
    m_Candle_acc_trade_volumeIsSet = false;
    m_Unit = 0.0;
    m_UnitIsSet = false;
}

CandleMinutes::~CandleMinutes()
{
}

void CandleMinutes::validate()
{
    // TODO: implement validation
}

web::json::value CandleMinutes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MarketIsSet)
    {
        val[utility::conversions::to_string_t("market")] = ModelBase::toJson(m_Market);
    }
    if(m_Candle_date_time_utcIsSet)
    {
        val[utility::conversions::to_string_t("candle_date_time_utc")] = ModelBase::toJson(m_Candle_date_time_utc);
    }
    if(m_Candle_date_time_kstIsSet)
    {
        val[utility::conversions::to_string_t("candle_date_time_kst")] = ModelBase::toJson(m_Candle_date_time_kst);
    }
    if(m_Opening_priceIsSet)
    {
        val[utility::conversions::to_string_t("opening_price")] = ModelBase::toJson(m_Opening_price);
    }
    if(m_High_priceIsSet)
    {
        val[utility::conversions::to_string_t("high_price")] = ModelBase::toJson(m_High_price);
    }
    if(m_Low_priceIsSet)
    {
        val[utility::conversions::to_string_t("low_price")] = ModelBase::toJson(m_Low_price);
    }
    if(m_Trade_priceIsSet)
    {
        val[utility::conversions::to_string_t("trade_price")] = ModelBase::toJson(m_Trade_price);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_Candle_acc_trade_priceIsSet)
    {
        val[utility::conversions::to_string_t("candle_acc_trade_price")] = ModelBase::toJson(m_Candle_acc_trade_price);
    }
    if(m_Candle_acc_trade_volumeIsSet)
    {
        val[utility::conversions::to_string_t("candle_acc_trade_volume")] = ModelBase::toJson(m_Candle_acc_trade_volume);
    }
    if(m_UnitIsSet)
    {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(m_Unit);
    }

    return val;
}

void CandleMinutes::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("market")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("market")];
        if(!fieldValue.is_null())
        {
            setMarket(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_date_time_utc")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_date_time_utc")];
        if(!fieldValue.is_null())
        {
            setCandleDateTimeUtc(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_date_time_kst")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_date_time_kst")];
        if(!fieldValue.is_null())
        {
            setCandleDateTimeKst(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opening_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("opening_price")];
        if(!fieldValue.is_null())
        {
            setOpeningPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("high_price")];
        if(!fieldValue.is_null())
        {
            setHighPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("low_price")];
        if(!fieldValue.is_null())
        {
            setLowPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trade_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("trade_price")];
        if(!fieldValue.is_null())
        {
            setTradePrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timestamp")];
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_acc_trade_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_acc_trade_price")];
        if(!fieldValue.is_null())
        {
            setCandleAccTradePrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_acc_trade_volume")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_acc_trade_volume")];
        if(!fieldValue.is_null())
        {
            setCandleAccTradeVolume(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("unit")];
        if(!fieldValue.is_null())
        {
            setUnit(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void CandleMinutes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_MarketIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("market"), m_Market));
        
    }
    if(m_Candle_date_time_utcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_date_time_utc"), m_Candle_date_time_utc));
        
    }
    if(m_Candle_date_time_kstIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_date_time_kst"), m_Candle_date_time_kst));
        
    }
    if(m_Opening_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("opening_price"), m_Opening_price));
    }
    if(m_High_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("high_price"), m_High_price));
    }
    if(m_Low_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("low_price"), m_Low_price));
    }
    if(m_Trade_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trade_price"), m_Trade_price));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    }
    if(m_Candle_acc_trade_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_acc_trade_price"), m_Candle_acc_trade_price));
    }
    if(m_Candle_acc_trade_volumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_acc_trade_volume"), m_Candle_acc_trade_volume));
    }
    if(m_UnitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unit"), m_Unit));
    }
}

void CandleMinutes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("market")))
    {
        setMarket(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("market"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_date_time_utc")))
    {
        setCandleDateTimeUtc(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_date_time_utc"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_date_time_kst")))
    {
        setCandleDateTimeKst(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_date_time_kst"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("opening_price")))
    {
        setOpeningPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("opening_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("high_price")))
    {
        setHighPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("high_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("low_price")))
    {
        setLowPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("low_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trade_price")))
    {
        setTradePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("trade_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_acc_trade_price")))
    {
        setCandleAccTradePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_acc_trade_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_acc_trade_volume")))
    {
        setCandleAccTradeVolume(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_acc_trade_volume"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unit")))
    {
        setUnit(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("unit"))));
    }
}

utility::string_t CandleMinutes::getMarket() const
{
    return m_Market;
}


void CandleMinutes::setMarket(utility::string_t value)
{
    m_Market = value;
    m_MarketIsSet = true;
}
bool CandleMinutes::marketIsSet() const
{
    return m_MarketIsSet;
}

void CandleMinutes::unsetMarket()
{
    m_MarketIsSet = false;
}

utility::string_t CandleMinutes::getCandleDateTimeUtc() const
{
    return m_Candle_date_time_utc;
}


void CandleMinutes::setCandleDateTimeUtc(utility::string_t value)
{
    m_Candle_date_time_utc = value;
    m_Candle_date_time_utcIsSet = true;
}
bool CandleMinutes::candleDateTimeUtcIsSet() const
{
    return m_Candle_date_time_utcIsSet;
}

void CandleMinutes::unsetCandle_date_time_utc()
{
    m_Candle_date_time_utcIsSet = false;
}

utility::string_t CandleMinutes::getCandleDateTimeKst() const
{
    return m_Candle_date_time_kst;
}


void CandleMinutes::setCandleDateTimeKst(utility::string_t value)
{
    m_Candle_date_time_kst = value;
    m_Candle_date_time_kstIsSet = true;
}
bool CandleMinutes::candleDateTimeKstIsSet() const
{
    return m_Candle_date_time_kstIsSet;
}

void CandleMinutes::unsetCandle_date_time_kst()
{
    m_Candle_date_time_kstIsSet = false;
}

double CandleMinutes::getOpeningPrice() const
{
    return m_Opening_price;
}


void CandleMinutes::setOpeningPrice(double value)
{
    m_Opening_price = value;
    m_Opening_priceIsSet = true;
}
bool CandleMinutes::openingPriceIsSet() const
{
    return m_Opening_priceIsSet;
}

void CandleMinutes::unsetOpening_price()
{
    m_Opening_priceIsSet = false;
}

double CandleMinutes::getHighPrice() const
{
    return m_High_price;
}


void CandleMinutes::setHighPrice(double value)
{
    m_High_price = value;
    m_High_priceIsSet = true;
}
bool CandleMinutes::highPriceIsSet() const
{
    return m_High_priceIsSet;
}

void CandleMinutes::unsetHigh_price()
{
    m_High_priceIsSet = false;
}

double CandleMinutes::getLowPrice() const
{
    return m_Low_price;
}


void CandleMinutes::setLowPrice(double value)
{
    m_Low_price = value;
    m_Low_priceIsSet = true;
}
bool CandleMinutes::lowPriceIsSet() const
{
    return m_Low_priceIsSet;
}

void CandleMinutes::unsetLow_price()
{
    m_Low_priceIsSet = false;
}

double CandleMinutes::getTradePrice() const
{
    return m_Trade_price;
}


void CandleMinutes::setTradePrice(double value)
{
    m_Trade_price = value;
    m_Trade_priceIsSet = true;
}
bool CandleMinutes::tradePriceIsSet() const
{
    return m_Trade_priceIsSet;
}

void CandleMinutes::unsetTrade_price()
{
    m_Trade_priceIsSet = false;
}

double CandleMinutes::getTimestamp() const
{
    return m_Timestamp;
}


void CandleMinutes::setTimestamp(double value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool CandleMinutes::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void CandleMinutes::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

double CandleMinutes::getCandleAccTradePrice() const
{
    return m_Candle_acc_trade_price;
}


void CandleMinutes::setCandleAccTradePrice(double value)
{
    m_Candle_acc_trade_price = value;
    m_Candle_acc_trade_priceIsSet = true;
}
bool CandleMinutes::candleAccTradePriceIsSet() const
{
    return m_Candle_acc_trade_priceIsSet;
}

void CandleMinutes::unsetCandle_acc_trade_price()
{
    m_Candle_acc_trade_priceIsSet = false;
}

double CandleMinutes::getCandleAccTradeVolume() const
{
    return m_Candle_acc_trade_volume;
}


void CandleMinutes::setCandleAccTradeVolume(double value)
{
    m_Candle_acc_trade_volume = value;
    m_Candle_acc_trade_volumeIsSet = true;
}
bool CandleMinutes::candleAccTradeVolumeIsSet() const
{
    return m_Candle_acc_trade_volumeIsSet;
}

void CandleMinutes::unsetCandle_acc_trade_volume()
{
    m_Candle_acc_trade_volumeIsSet = false;
}

double CandleMinutes::getUnit() const
{
    return m_Unit;
}


void CandleMinutes::setUnit(double value)
{
    m_Unit = value;
    m_UnitIsSet = true;
}
bool CandleMinutes::unitIsSet() const
{
    return m_UnitIsSet;
}

void CandleMinutes::unsetUnit()
{
    m_UnitIsSet = false;
}

}
}
}
}

