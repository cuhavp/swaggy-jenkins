# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class InputStepImpl(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
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
        '_class': 'str',
        'links': 'InputStepImpllinks',
        'id': 'str',
        'message': 'str',
        'ok': 'str',
        'parameters': 'list[StringParameterDefinition]',
        'submitter': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'links': '_links',
        'id': 'id',
        'message': 'message',
        'ok': 'ok',
        'parameters': 'parameters',
        'submitter': 'submitter'
    }

    def __init__(self, _class=None, links=None, id=None, message=None, ok=None, parameters=None, submitter=None):
        """
        InputStepImpl - a model defined in Swagger
        """

        self.__class = None
        self._links = None
        self._id = None
        self._message = None
        self._ok = None
        self._parameters = None
        self._submitter = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if links is not None:
          self.links = links
        if id is not None:
          self.id = id
        if message is not None:
          self.message = message
        if ok is not None:
          self.ok = ok
        if parameters is not None:
          self.parameters = parameters
        if submitter is not None:
          self.submitter = submitter

    @property
    def _class(self):
        """
        Gets the _class of this InputStepImpl.

        :return: The _class of this InputStepImpl.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this InputStepImpl.

        :param _class: The _class of this InputStepImpl.
        :type: str
        """

        self.__class = _class

    @property
    def links(self):
        """
        Gets the links of this InputStepImpl.

        :return: The links of this InputStepImpl.
        :rtype: InputStepImpllinks
        """
        return self._links

    @links.setter
    def links(self, links):
        """
        Sets the links of this InputStepImpl.

        :param links: The links of this InputStepImpl.
        :type: InputStepImpllinks
        """

        self._links = links

    @property
    def id(self):
        """
        Gets the id of this InputStepImpl.

        :return: The id of this InputStepImpl.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this InputStepImpl.

        :param id: The id of this InputStepImpl.
        :type: str
        """

        self._id = id

    @property
    def message(self):
        """
        Gets the message of this InputStepImpl.

        :return: The message of this InputStepImpl.
        :rtype: str
        """
        return self._message

    @message.setter
    def message(self, message):
        """
        Sets the message of this InputStepImpl.

        :param message: The message of this InputStepImpl.
        :type: str
        """

        self._message = message

    @property
    def ok(self):
        """
        Gets the ok of this InputStepImpl.

        :return: The ok of this InputStepImpl.
        :rtype: str
        """
        return self._ok

    @ok.setter
    def ok(self, ok):
        """
        Sets the ok of this InputStepImpl.

        :param ok: The ok of this InputStepImpl.
        :type: str
        """

        self._ok = ok

    @property
    def parameters(self):
        """
        Gets the parameters of this InputStepImpl.

        :return: The parameters of this InputStepImpl.
        :rtype: list[StringParameterDefinition]
        """
        return self._parameters

    @parameters.setter
    def parameters(self, parameters):
        """
        Sets the parameters of this InputStepImpl.

        :param parameters: The parameters of this InputStepImpl.
        :type: list[StringParameterDefinition]
        """

        self._parameters = parameters

    @property
    def submitter(self):
        """
        Gets the submitter of this InputStepImpl.

        :return: The submitter of this InputStepImpl.
        :rtype: str
        """
        return self._submitter

    @submitter.setter
    def submitter(self, submitter):
        """
        Sets the submitter of this InputStepImpl.

        :param submitter: The submitter of this InputStepImpl.
        :type: str
        """

        self._submitter = submitter

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
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

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, InputStepImpl):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
