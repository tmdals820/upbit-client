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
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// MarketInfo
    /// </summary>
    [DataContract]
    public partial class MarketInfo :  IEquatable<MarketInfo>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MarketInfo" /> class.
        /// </summary>
        /// <param name="market">업비트에서 제공중인 시장 정보.</param>
        /// <param name="koreanName">거래 대상 암호화폐 한글명.</param>
        /// <param name="englishName">거래 대상 암호화폐 영문명.</param>
        /// <param name="marketWarning">유의 종목 여부 - NONE (해당 사항 없음) - CAUTION (투자유의) .</param>
        public MarketInfo(string market = default(string), string koreanName = default(string), string englishName = default(string), string marketWarning = default(string))
        {
            this.Market = market;
            this.KoreanName = koreanName;
            this.EnglishName = englishName;
            this.MarketWarning = marketWarning;
        }
        
        /// <summary>
        /// 업비트에서 제공중인 시장 정보
        /// </summary>
        /// <value>업비트에서 제공중인 시장 정보</value>
        [DataMember(Name="market", EmitDefaultValue=false)]
        public string Market { get; set; }

        /// <summary>
        /// 거래 대상 암호화폐 한글명
        /// </summary>
        /// <value>거래 대상 암호화폐 한글명</value>
        [DataMember(Name="korean_name", EmitDefaultValue=false)]
        public string KoreanName { get; set; }

        /// <summary>
        /// 거래 대상 암호화폐 영문명
        /// </summary>
        /// <value>거래 대상 암호화폐 영문명</value>
        [DataMember(Name="english_name", EmitDefaultValue=false)]
        public string EnglishName { get; set; }

        /// <summary>
        /// 유의 종목 여부 - NONE (해당 사항 없음) - CAUTION (투자유의) 
        /// </summary>
        /// <value>유의 종목 여부 - NONE (해당 사항 없음) - CAUTION (투자유의) </value>
        [DataMember(Name="market_warning", EmitDefaultValue=false)]
        public string MarketWarning { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MarketInfo {\n");
            sb.Append("  Market: ").Append(Market).Append("\n");
            sb.Append("  KoreanName: ").Append(KoreanName).Append("\n");
            sb.Append("  EnglishName: ").Append(EnglishName).Append("\n");
            sb.Append("  MarketWarning: ").Append(MarketWarning).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as MarketInfo);
        }

        /// <summary>
        /// Returns true if MarketInfo instances are equal
        /// </summary>
        /// <param name="input">Instance of MarketInfo to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MarketInfo input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Market == input.Market ||
                    (this.Market != null &&
                    this.Market.Equals(input.Market))
                ) && 
                (
                    this.KoreanName == input.KoreanName ||
                    (this.KoreanName != null &&
                    this.KoreanName.Equals(input.KoreanName))
                ) && 
                (
                    this.EnglishName == input.EnglishName ||
                    (this.EnglishName != null &&
                    this.EnglishName.Equals(input.EnglishName))
                ) && 
                (
                    this.MarketWarning == input.MarketWarning ||
                    (this.MarketWarning != null &&
                    this.MarketWarning.Equals(input.MarketWarning))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Market != null)
                    hashCode = hashCode * 59 + this.Market.GetHashCode();
                if (this.KoreanName != null)
                    hashCode = hashCode * 59 + this.KoreanName.GetHashCode();
                if (this.EnglishName != null)
                    hashCode = hashCode * 59 + this.EnglishName.GetHashCode();
                if (this.MarketWarning != null)
                    hashCode = hashCode * 59 + this.MarketWarning.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
