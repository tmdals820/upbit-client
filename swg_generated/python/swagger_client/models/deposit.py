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


class Deposit(object):
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
        'type': 'str',
        'uuid': 'str',
        'currency': 'str',
        'txid': 'str',
        'state': 'str',
        'created_at': 'str',
        'done_at': 'str',
        'amount': 'str',
        'fee': 'str',
        'transaction_type': 'str'
    }

    attribute_map = {
        'type': 'type',
        'uuid': 'uuid',
        'currency': 'currency',
        'txid': 'txid',
        'state': 'state',
        'created_at': 'created_at',
        'done_at': 'done_at',
        'amount': 'amount',
        'fee': 'fee',
        'transaction_type': 'transaction_type'
    }

    def __init__(self, type=None, uuid=None, currency=None, txid=None, state=None, created_at=None, done_at=None, amount=None, fee=None, transaction_type=None):  # noqa: E501
        """Deposit - a model defined in Swagger"""  # noqa: E501

        self._type = None
        self._uuid = None
        self._currency = None
        self._txid = None
        self._state = None
        self._created_at = None
        self._done_at = None
        self._amount = None
        self._fee = None
        self._transaction_type = None
        self.discriminator = None

        if type is not None:
            self.type = type
        if uuid is not None:
            self.uuid = uuid
        if currency is not None:
            self.currency = currency
        if txid is not None:
            self.txid = txid
        if state is not None:
            self.state = state
        if created_at is not None:
            self.created_at = created_at
        if done_at is not None:
            self.done_at = done_at
        if amount is not None:
            self.amount = amount
        if fee is not None:
            self.fee = fee
        if transaction_type is not None:
            self.transaction_type = transaction_type

    @property
    def type(self):
        """Gets the type of this Deposit.  # noqa: E501

        입출금 종류  # noqa: E501

        :return: The type of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this Deposit.

        입출금 종류  # noqa: E501

        :param type: The type of this Deposit.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def uuid(self):
        """Gets the uuid of this Deposit.  # noqa: E501

        입금에 대한 고유 아이디  # noqa: E501

        :return: The uuid of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._uuid

    @uuid.setter
    def uuid(self, uuid):
        """Sets the uuid of this Deposit.

        입금에 대한 고유 아이디  # noqa: E501

        :param uuid: The uuid of this Deposit.  # noqa: E501
        :type: str
        """

        self._uuid = uuid

    @property
    def currency(self):
        """Gets the currency of this Deposit.  # noqa: E501

        화폐를 의미하는 영문 대문자 코드  # noqa: E501

        :return: The currency of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this Deposit.

        화폐를 의미하는 영문 대문자 코드  # noqa: E501

        :param currency: The currency of this Deposit.  # noqa: E501
        :type: str
        """

        self._currency = currency

    @property
    def txid(self):
        """Gets the txid of this Deposit.  # noqa: E501

        입금의 트랜잭션 아이디  # noqa: E501

        :return: The txid of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._txid

    @txid.setter
    def txid(self, txid):
        """Sets the txid of this Deposit.

        입금의 트랜잭션 아이디  # noqa: E501

        :param txid: The txid of this Deposit.  # noqa: E501
        :type: str
        """

        self._txid = txid

    @property
    def state(self):
        """Gets the state of this Deposit.  # noqa: E501

        입금 상태  # noqa: E501

        :return: The state of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this Deposit.

        입금 상태  # noqa: E501

        :param state: The state of this Deposit.  # noqa: E501
        :type: str
        """

        self._state = state

    @property
    def created_at(self):
        """Gets the created_at of this Deposit.  # noqa: E501

        입금 생성 시간  # noqa: E501

        :return: The created_at of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this Deposit.

        입금 생성 시간  # noqa: E501

        :param created_at: The created_at of this Deposit.  # noqa: E501
        :type: str
        """

        self._created_at = created_at

    @property
    def done_at(self):
        """Gets the done_at of this Deposit.  # noqa: E501

        입금 완료 시간  # noqa: E501

        :return: The done_at of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._done_at

    @done_at.setter
    def done_at(self, done_at):
        """Sets the done_at of this Deposit.

        입금 완료 시간  # noqa: E501

        :param done_at: The done_at of this Deposit.  # noqa: E501
        :type: str
        """

        self._done_at = done_at

    @property
    def amount(self):
        """Gets the amount of this Deposit.  # noqa: E501

        입금 수량  # noqa: E501

        :return: The amount of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._amount

    @amount.setter
    def amount(self, amount):
        """Sets the amount of this Deposit.

        입금 수량  # noqa: E501

        :param amount: The amount of this Deposit.  # noqa: E501
        :type: str
        """

        self._amount = amount

    @property
    def fee(self):
        """Gets the fee of this Deposit.  # noqa: E501

        입금 수수료  # noqa: E501

        :return: The fee of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._fee

    @fee.setter
    def fee(self, fee):
        """Sets the fee of this Deposit.

        입금 수수료  # noqa: E501

        :param fee: The fee of this Deposit.  # noqa: E501
        :type: str
        """

        self._fee = fee

    @property
    def transaction_type(self):
        """Gets the transaction_type of this Deposit.  # noqa: E501

        입금 유형 - default : 일반출금 - internal : 바로입금   # noqa: E501

        :return: The transaction_type of this Deposit.  # noqa: E501
        :rtype: str
        """
        return self._transaction_type

    @transaction_type.setter
    def transaction_type(self, transaction_type):
        """Sets the transaction_type of this Deposit.

        입금 유형 - default : 일반출금 - internal : 바로입금   # noqa: E501

        :param transaction_type: The transaction_type of this Deposit.  # noqa: E501
        :type: str
        """

        self._transaction_type = transaction_type

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
        if issubclass(Deposit, dict):
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
        if not isinstance(other, Deposit):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
