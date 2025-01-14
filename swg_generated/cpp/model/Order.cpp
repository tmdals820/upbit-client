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



#include "Order.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Order::Order()
{
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Side = utility::conversions::to_string_t("");
    m_SideIsSet = false;
    m_Ord_type = utility::conversions::to_string_t("");
    m_Ord_typeIsSet = false;
    m_Price = utility::conversions::to_string_t("");
    m_PriceIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Market = utility::conversions::to_string_t("");
    m_MarketIsSet = false;
    m_Created_at = utility::conversions::to_string_t("");
    m_Created_atIsSet = false;
    m_Volume = utility::conversions::to_string_t("");
    m_VolumeIsSet = false;
    m_Remaining_volume = utility::conversions::to_string_t("");
    m_Remaining_volumeIsSet = false;
    m_Reserved_fee = utility::conversions::to_string_t("");
    m_Reserved_feeIsSet = false;
    m_Remaining_fee = utility::conversions::to_string_t("");
    m_Remaining_feeIsSet = false;
    m_Paid_fee = utility::conversions::to_string_t("");
    m_Paid_feeIsSet = false;
    m_Locked = utility::conversions::to_string_t("");
    m_LockedIsSet = false;
    m_Executed_volume = utility::conversions::to_string_t("");
    m_Executed_volumeIsSet = false;
    m_Trades_count = 0.0;
    m_Trades_countIsSet = false;
}

Order::~Order()
{
}

void Order::validate()
{
    // TODO: implement validation
}

web::json::value Order::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_UuidIsSet)
    {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(m_Uuid);
    }
    if(m_SideIsSet)
    {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(m_Side);
    }
    if(m_Ord_typeIsSet)
    {
        val[utility::conversions::to_string_t("ord_type")] = ModelBase::toJson(m_Ord_type);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_MarketIsSet)
    {
        val[utility::conversions::to_string_t("market")] = ModelBase::toJson(m_Market);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_VolumeIsSet)
    {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(m_Volume);
    }
    if(m_Remaining_volumeIsSet)
    {
        val[utility::conversions::to_string_t("remaining_volume")] = ModelBase::toJson(m_Remaining_volume);
    }
    if(m_Reserved_feeIsSet)
    {
        val[utility::conversions::to_string_t("reserved_fee")] = ModelBase::toJson(m_Reserved_fee);
    }
    if(m_Remaining_feeIsSet)
    {
        val[utility::conversions::to_string_t("remaining_fee")] = ModelBase::toJson(m_Remaining_fee);
    }
    if(m_Paid_feeIsSet)
    {
        val[utility::conversions::to_string_t("paid_fee")] = ModelBase::toJson(m_Paid_fee);
    }
    if(m_LockedIsSet)
    {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(m_Locked);
    }
    if(m_Executed_volumeIsSet)
    {
        val[utility::conversions::to_string_t("executed_volume")] = ModelBase::toJson(m_Executed_volume);
    }
    if(m_Trades_countIsSet)
    {
        val[utility::conversions::to_string_t("trades_count")] = ModelBase::toJson(m_Trades_count);
    }

    return val;
}

void Order::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("uuid")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("uuid")];
        if(!fieldValue.is_null())
        {
            setUuid(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("side")];
        if(!fieldValue.is_null())
        {
            setSide(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ord_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ord_type")];
        if(!fieldValue.is_null())
        {
            setOrdType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("price")];
        if(!fieldValue.is_null())
        {
            setPrice(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("state")];
        if(!fieldValue.is_null())
        {
            setState(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("market")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("market")];
        if(!fieldValue.is_null())
        {
            setMarket(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created_at")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("volume")];
        if(!fieldValue.is_null())
        {
            setVolume(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_volume")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("remaining_volume")];
        if(!fieldValue.is_null())
        {
            setRemainingVolume(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("reserved_fee")];
        if(!fieldValue.is_null())
        {
            setReservedFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("remaining_fee")];
        if(!fieldValue.is_null())
        {
            setRemainingFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paid_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("paid_fee")];
        if(!fieldValue.is_null())
        {
            setPaidFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("locked")];
        if(!fieldValue.is_null())
        {
            setLocked(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executed_volume")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("executed_volume")];
        if(!fieldValue.is_null())
        {
            setExecutedVolume(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trades_count")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("trades_count")];
        if(!fieldValue.is_null())
        {
            setTradesCount(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void Order::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_UuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uuid"), m_Uuid));
        
    }
    if(m_SideIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("side"), m_Side));
        
    }
    if(m_Ord_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ord_type"), m_Ord_type));
        
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
        
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
        
    }
    if(m_MarketIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("market"), m_Market));
        
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_VolumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("volume"), m_Volume));
        
    }
    if(m_Remaining_volumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remaining_volume"), m_Remaining_volume));
        
    }
    if(m_Reserved_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reserved_fee"), m_Reserved_fee));
        
    }
    if(m_Remaining_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remaining_fee"), m_Remaining_fee));
        
    }
    if(m_Paid_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("paid_fee"), m_Paid_fee));
        
    }
    if(m_LockedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locked"), m_Locked));
        
    }
    if(m_Executed_volumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("executed_volume"), m_Executed_volume));
        
    }
    if(m_Trades_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trades_count"), m_Trades_count));
    }
}

void Order::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("uuid")))
    {
        setUuid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("uuid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("side")))
    {
        setSide(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("side"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ord_type")))
    {
        setOrdType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ord_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("price")))
    {
        setPrice(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("market")))
    {
        setMarket(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("market"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("volume")))
    {
        setVolume(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("volume"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("remaining_volume")))
    {
        setRemainingVolume(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("remaining_volume"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reserved_fee")))
    {
        setReservedFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("reserved_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("remaining_fee")))
    {
        setRemainingFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("remaining_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("paid_fee")))
    {
        setPaidFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("paid_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("locked")))
    {
        setLocked(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("locked"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("executed_volume")))
    {
        setExecutedVolume(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("executed_volume"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trades_count")))
    {
        setTradesCount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("trades_count"))));
    }
}

utility::string_t Order::getUuid() const
{
    return m_Uuid;
}


void Order::setUuid(utility::string_t value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}
bool Order::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Order::unsetUuid()
{
    m_UuidIsSet = false;
}

utility::string_t Order::getSide() const
{
    return m_Side;
}


void Order::setSide(utility::string_t value)
{
    m_Side = value;
    m_SideIsSet = true;
}
bool Order::sideIsSet() const
{
    return m_SideIsSet;
}

void Order::unsetSide()
{
    m_SideIsSet = false;
}

utility::string_t Order::getOrdType() const
{
    return m_Ord_type;
}


void Order::setOrdType(utility::string_t value)
{
    m_Ord_type = value;
    m_Ord_typeIsSet = true;
}
bool Order::ordTypeIsSet() const
{
    return m_Ord_typeIsSet;
}

void Order::unsetOrd_type()
{
    m_Ord_typeIsSet = false;
}

utility::string_t Order::getPrice() const
{
    return m_Price;
}


void Order::setPrice(utility::string_t value)
{
    m_Price = value;
    m_PriceIsSet = true;
}
bool Order::priceIsSet() const
{
    return m_PriceIsSet;
}

void Order::unsetPrice()
{
    m_PriceIsSet = false;
}

utility::string_t Order::getState() const
{
    return m_State;
}


void Order::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool Order::stateIsSet() const
{
    return m_StateIsSet;
}

void Order::unsetState()
{
    m_StateIsSet = false;
}

utility::string_t Order::getMarket() const
{
    return m_Market;
}


void Order::setMarket(utility::string_t value)
{
    m_Market = value;
    m_MarketIsSet = true;
}
bool Order::marketIsSet() const
{
    return m_MarketIsSet;
}

void Order::unsetMarket()
{
    m_MarketIsSet = false;
}

utility::string_t Order::getCreatedAt() const
{
    return m_Created_at;
}


void Order::setCreatedAt(utility::string_t value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Order::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Order::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::string_t Order::getVolume() const
{
    return m_Volume;
}


void Order::setVolume(utility::string_t value)
{
    m_Volume = value;
    m_VolumeIsSet = true;
}
bool Order::volumeIsSet() const
{
    return m_VolumeIsSet;
}

void Order::unsetVolume()
{
    m_VolumeIsSet = false;
}

utility::string_t Order::getRemainingVolume() const
{
    return m_Remaining_volume;
}


void Order::setRemainingVolume(utility::string_t value)
{
    m_Remaining_volume = value;
    m_Remaining_volumeIsSet = true;
}
bool Order::remainingVolumeIsSet() const
{
    return m_Remaining_volumeIsSet;
}

void Order::unsetRemaining_volume()
{
    m_Remaining_volumeIsSet = false;
}

utility::string_t Order::getReservedFee() const
{
    return m_Reserved_fee;
}


void Order::setReservedFee(utility::string_t value)
{
    m_Reserved_fee = value;
    m_Reserved_feeIsSet = true;
}
bool Order::reservedFeeIsSet() const
{
    return m_Reserved_feeIsSet;
}

void Order::unsetReserved_fee()
{
    m_Reserved_feeIsSet = false;
}

utility::string_t Order::getRemainingFee() const
{
    return m_Remaining_fee;
}


void Order::setRemainingFee(utility::string_t value)
{
    m_Remaining_fee = value;
    m_Remaining_feeIsSet = true;
}
bool Order::remainingFeeIsSet() const
{
    return m_Remaining_feeIsSet;
}

void Order::unsetRemaining_fee()
{
    m_Remaining_feeIsSet = false;
}

utility::string_t Order::getPaidFee() const
{
    return m_Paid_fee;
}


void Order::setPaidFee(utility::string_t value)
{
    m_Paid_fee = value;
    m_Paid_feeIsSet = true;
}
bool Order::paidFeeIsSet() const
{
    return m_Paid_feeIsSet;
}

void Order::unsetPaid_fee()
{
    m_Paid_feeIsSet = false;
}

utility::string_t Order::getLocked() const
{
    return m_Locked;
}


void Order::setLocked(utility::string_t value)
{
    m_Locked = value;
    m_LockedIsSet = true;
}
bool Order::lockedIsSet() const
{
    return m_LockedIsSet;
}

void Order::unsetLocked()
{
    m_LockedIsSet = false;
}

utility::string_t Order::getExecutedVolume() const
{
    return m_Executed_volume;
}


void Order::setExecutedVolume(utility::string_t value)
{
    m_Executed_volume = value;
    m_Executed_volumeIsSet = true;
}
bool Order::executedVolumeIsSet() const
{
    return m_Executed_volumeIsSet;
}

void Order::unsetExecuted_volume()
{
    m_Executed_volumeIsSet = false;
}

double Order::getTradesCount() const
{
    return m_Trades_count;
}


void Order::setTradesCount(double value)
{
    m_Trades_count = value;
    m_Trades_countIsSet = true;
}
bool Order::tradesCountIsSet() const
{
    return m_Trades_countIsSet;
}

void Order::unsetTrades_count()
{
    m_Trades_countIsSet = false;
}

}
}
}
}

