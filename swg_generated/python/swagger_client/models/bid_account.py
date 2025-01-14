# coding: utf-8

"""
    Upbit Open API

    ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com]   # noqa: E501

    OpenAPI spec version: 1.1.6
    Contact: ujhin942@gmail.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class BidAccount(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'currency': 'str',
        'balance': 'str',
        'locked': 'str',
        'avg_buy_price': 'str',
        'avg_buy_price_modified': 'bool',
        'unit_currency': 'str'
    }

    attribute_map = {
        'currency': 'currency',
        'balance': 'balance',
        'locked': 'locked',
        'avg_buy_price': 'avg_buy_price',
        'avg_buy_price_modified': 'avg_buy_price_modified',
        'unit_currency': 'unit_currency'
    }

    def __init__(self, currency=None, balance=None, locked=None, avg_buy_price=None, avg_buy_price_modified=None, unit_currency=None):  # noqa: E501
        """BidAccount - a model defined in Swagger"""  # noqa: E501

        self._currency = None
        self._balance = None
        self._locked = None
        self._avg_buy_price = None
        self._avg_buy_price_modified = None
        self._unit_currency = None
        self.discriminator = None

        if currency is not None:
            self.currency = currency
        if balance is not None:
            self.balance = balance
        if locked is not None:
            self.locked = locked
        if avg_buy_price is not None:
            self.avg_buy_price = avg_buy_price
        if avg_buy_price_modified is not None:
            self.avg_buy_price_modified = avg_buy_price_modified
        if unit_currency is not None:
            self.unit_currency = unit_currency

    @property
    def currency(self):
        """Gets the currency of this BidAccount.  # noqa: E501

        화폐를 의미하는 영문 대문자 코드  # noqa: E501

        :return: The currency of this BidAccount.  # noqa: E501
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this BidAccount.

        화폐를 의미하는 영문 대문자 코드  # noqa: E501

        :param currency: The currency of this BidAccount.  # noqa: E501
        :type: str
        """

        self._currency = currency

    @property
    def balance(self):
        """Gets the balance of this BidAccount.  # noqa: E501

        주문가능 금액/수량  # noqa: E501

        :return: The balance of this BidAccount.  # noqa: E501
        :rtype: str
        """
        return self._balance

    @balance.setter
    def balance(self, balance):
        """Sets the balance of this BidAccount.

        주문가능 금액/수량  # noqa: E501

        :param balance: The balance of this BidAccount.  # noqa: E501
        :type: str
        """

        self._balance = balance

    @property
    def locked(self):
        """Gets the locked of this BidAccount.  # noqa: E501

        주문 중 묶여있는 금액/수량  # noqa: E501

        :return: The locked of this BidAccount.  # noqa: E501
        :rtype: str
        """
        return self._locked

    @locked.setter
    def locked(self, locked):
        """Sets the locked of this BidAccount.

        주문 중 묶여있는 금액/수량  # noqa: E501

        :param locked: The locked of this BidAccount.  # noqa: E501
        :type: str
        """

        self._locked = locked

    @property
    def avg_buy_price(self):
        """Gets the avg_buy_price of this BidAccount.  # noqa: E501

        매수평균가  # noqa: E501

        :return: The avg_buy_price of this BidAccount.  # noqa: E501
        :rtype: str
        """
        return self._avg_buy_price

    @avg_buy_price.setter
    def avg_buy_price(self, avg_buy_price):
        """Sets the avg_buy_price of this BidAccount.

        매수평균가  # noqa: E501

        :param avg_buy_price: The avg_buy_price of this BidAccount.  # noqa: E501
        :type: str
        """

        self._avg_buy_price = avg_buy_price

    @property
    def avg_buy_price_modified(self):
        """Gets the avg_buy_price_modified of this BidAccount.  # noqa: E501

        매수평균가 수정 여부  # noqa: E501

        :return: The avg_buy_price_modified of this BidAccount.  # noqa: E501
        :rtype: bool
        """
        return self._avg_buy_price_modified

    @avg_buy_price_modified.setter
    def avg_buy_price_modified(self, avg_buy_price_modified):
        """Sets the avg_buy_price_modified of this BidAccount.

        매수평균가 수정 여부  # noqa: E501

        :param avg_buy_price_modified: The avg_buy_price_modified of this BidAccount.  # noqa: E501
        :type: bool
        """

        self._avg_buy_price_modified = avg_buy_price_modified

    @property
    def unit_currency(self):
        """Gets the unit_currency of this BidAccount.  # noqa: E501

        평단가 기준 화폐  # noqa: E501

        :return: The unit_currency of this BidAccount.  # noqa: E501
        :rtype: str
        """
        return self._unit_currency

    @unit_currency.setter
    def unit_currency(self, unit_currency):
        """Sets the unit_currency of this BidAccount.

        평단가 기준 화폐  # noqa: E501

        :param unit_currency: The unit_currency of this BidAccount.  # noqa: E501
        :type: str
        """

        self._unit_currency = unit_currency

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(BidAccount, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BidAccount):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
