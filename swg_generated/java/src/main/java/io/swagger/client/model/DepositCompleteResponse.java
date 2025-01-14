/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * DepositCompleteResponse
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2021-01-07T06:19:05.031Z")



public class DepositCompleteResponse {
  @SerializedName("currency")
  private String currency = null;

  @SerializedName("deposit_address")
  private String depositAddress = null;

  @SerializedName("secondary_address")
  private String secondaryAddress = null;

  public DepositCompleteResponse currency(String currency) {
    this.currency = currency;
    return this;
  }

   /**
   * 화폐를 의미하는 영문 대문자 코드
   * @return currency
  **/
  @ApiModelProperty(example = "BTC", value = "화폐를 의미하는 영문 대문자 코드")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public DepositCompleteResponse depositAddress(String depositAddress) {
    this.depositAddress = depositAddress;
    return this;
  }

   /**
   * 입금 주소
   * @return depositAddress
  **/
  @ApiModelProperty(example = "3EusRwybuZUhVDeHL7gh3HSLmbhLcy7NqD", value = "입금 주소")
  public String getDepositAddress() {
    return depositAddress;
  }

  public void setDepositAddress(String depositAddress) {
    this.depositAddress = depositAddress;
  }

  public DepositCompleteResponse secondaryAddress(String secondaryAddress) {
    this.secondaryAddress = secondaryAddress;
    return this;
  }

   /**
   * 2차 입금 주소
   * @return secondaryAddress
  **/
  @ApiModelProperty(value = "2차 입금 주소")
  public String getSecondaryAddress() {
    return secondaryAddress;
  }

  public void setSecondaryAddress(String secondaryAddress) {
    this.secondaryAddress = secondaryAddress;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DepositCompleteResponse depositCompleteResponse = (DepositCompleteResponse) o;
    return Objects.equals(this.currency, depositCompleteResponse.currency) &&
        Objects.equals(this.depositAddress, depositCompleteResponse.depositAddress) &&
        Objects.equals(this.secondaryAddress, depositCompleteResponse.secondaryAddress);
  }

  @Override
  public int hashCode() {
    return Objects.hash(currency, depositAddress, secondaryAddress);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DepositCompleteResponse {\n");
    
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    depositAddress: ").append(toIndentedString(depositAddress)).append("\n");
    sb.append("    secondaryAddress: ").append(toIndentedString(secondaryAddress)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

