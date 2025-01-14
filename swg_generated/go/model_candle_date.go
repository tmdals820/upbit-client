/*
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * API version: 1.1.6
 * Contact: ujhin942@gmail.com
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type CandleDate struct {
	// 마켓명
	Market string `json:"market,omitempty"`
	// 캔들 기준 시각 (UTC 기준)
	CandleDateTimeUtc string `json:"candle_date_time_utc,omitempty"`
	// 캔들 기준 시각 (KST 기준)
	CandleDateTimeKst string `json:"candle_date_time_kst,omitempty"`
	// 시가
	OpeningPrice float64 `json:"opening_price,omitempty"`
	// 고가
	HighPrice float64 `json:"high_price,omitempty"`
	// 저가
	LowPrice float64 `json:"low_price,omitempty"`
	// 종가
	TradePrice float64 `json:"trade_price,omitempty"`
	// 해당 캔들에서 마지막 틱이 저장된 시각
	Timestamp float32 `json:"timestamp,omitempty"`
	// 누적 거래 금액
	CandleAccTradePrice float64 `json:"candle_acc_trade_price,omitempty"`
	// 누적 거래량
	CandleAccTradeVolume float64 `json:"candle_acc_trade_volume,omitempty"`
	// 캔들 기간의 가장 첫 날
	FirstDayOfPeriod string `json:"first_day_of_period,omitempty"`
}
