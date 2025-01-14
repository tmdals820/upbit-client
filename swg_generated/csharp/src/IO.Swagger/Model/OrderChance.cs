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
    /// OrderChance
    /// </summary>
    [DataContract]
    public partial class OrderChance :  IEquatable<OrderChance>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrderChance" /> class.
        /// </summary>
        /// <param name="bidFee">매수 수수료 비율.</param>
        /// <param name="askFee">매도 수수료 비율.</param>
        /// <param name="market">market.</param>
        public OrderChance(string bidFee = default(string), string askFee = default(string), Market market = default(Market))
        {
            this.BidFee = bidFee;
            this.AskFee = askFee;
            this.Market = market;
        }
        
        /// <summary>
        /// 매수 수수료 비율
        /// </summary>
        /// <value>매수 수수료 비율</value>
        [DataMember(Name="bid_fee", EmitDefaultValue=false)]
        public string BidFee { get; set; }

        /// <summary>
        /// 매도 수수료 비율
        /// </summary>
        /// <value>매도 수수료 비율</value>
        [DataMember(Name="ask_fee", EmitDefaultValue=false)]
        public string AskFee { get; set; }

        /// <summary>
        /// Gets or Sets Market
        /// </summary>
        [DataMember(Name="market", EmitDefaultValue=false)]
        public Market Market { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrderChance {\n");
            sb.Append("  BidFee: ").Append(BidFee).Append("\n");
            sb.Append("  AskFee: ").Append(AskFee).Append("\n");
            sb.Append("  Market: ").Append(Market).Append("\n");
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
            return this.Equals(input as OrderChance);
        }

        /// <summary>
        /// Returns true if OrderChance instances are equal
        /// </summary>
        /// <param name="input">Instance of OrderChance to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrderChance input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.BidFee == input.BidFee ||
                    (this.BidFee != null &&
                    this.BidFee.Equals(input.BidFee))
                ) && 
                (
                    this.AskFee == input.AskFee ||
                    (this.AskFee != null &&
                    this.AskFee.Equals(input.AskFee))
                ) && 
                (
                    this.Market == input.Market ||
                    (this.Market != null &&
                    this.Market.Equals(input.Market))
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
                if (this.BidFee != null)
                    hashCode = hashCode * 59 + this.BidFee.GetHashCode();
                if (this.AskFee != null)
                    hashCode = hashCode * 59 + this.AskFee.GetHashCode();
                if (this.Market != null)
                    hashCode = hashCode * 59 + this.Market.GetHashCode();
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
