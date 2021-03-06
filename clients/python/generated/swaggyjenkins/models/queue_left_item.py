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


class QueueLeftItem(object):
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
        'actions': 'list[CauseAction]',
        'blocked': 'bool',
        'buildable': 'bool',
        'id': 'int',
        'in_queue_since': 'int',
        'params': 'str',
        'stuck': 'bool',
        'task': 'FreeStyleProject',
        'url': 'str',
        'why': 'str',
        'cancelled': 'bool',
        'executable': 'FreeStyleBuild'
    }

    attribute_map = {
        '_class': '_class',
        'actions': 'actions',
        'blocked': 'blocked',
        'buildable': 'buildable',
        'id': 'id',
        'in_queue_since': 'inQueueSince',
        'params': 'params',
        'stuck': 'stuck',
        'task': 'task',
        'url': 'url',
        'why': 'why',
        'cancelled': 'cancelled',
        'executable': 'executable'
    }

    def __init__(self, _class=None, actions=None, blocked=None, buildable=None, id=None, in_queue_since=None, params=None, stuck=None, task=None, url=None, why=None, cancelled=None, executable=None):
        """
        QueueLeftItem - a model defined in Swagger
        """

        self.__class = None
        self._actions = None
        self._blocked = None
        self._buildable = None
        self._id = None
        self._in_queue_since = None
        self._params = None
        self._stuck = None
        self._task = None
        self._url = None
        self._why = None
        self._cancelled = None
        self._executable = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if actions is not None:
          self.actions = actions
        if blocked is not None:
          self.blocked = blocked
        if buildable is not None:
          self.buildable = buildable
        if id is not None:
          self.id = id
        if in_queue_since is not None:
          self.in_queue_since = in_queue_since
        if params is not None:
          self.params = params
        if stuck is not None:
          self.stuck = stuck
        if task is not None:
          self.task = task
        if url is not None:
          self.url = url
        if why is not None:
          self.why = why
        if cancelled is not None:
          self.cancelled = cancelled
        if executable is not None:
          self.executable = executable

    @property
    def _class(self):
        """
        Gets the _class of this QueueLeftItem.

        :return: The _class of this QueueLeftItem.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this QueueLeftItem.

        :param _class: The _class of this QueueLeftItem.
        :type: str
        """

        self.__class = _class

    @property
    def actions(self):
        """
        Gets the actions of this QueueLeftItem.

        :return: The actions of this QueueLeftItem.
        :rtype: list[CauseAction]
        """
        return self._actions

    @actions.setter
    def actions(self, actions):
        """
        Sets the actions of this QueueLeftItem.

        :param actions: The actions of this QueueLeftItem.
        :type: list[CauseAction]
        """

        self._actions = actions

    @property
    def blocked(self):
        """
        Gets the blocked of this QueueLeftItem.

        :return: The blocked of this QueueLeftItem.
        :rtype: bool
        """
        return self._blocked

    @blocked.setter
    def blocked(self, blocked):
        """
        Sets the blocked of this QueueLeftItem.

        :param blocked: The blocked of this QueueLeftItem.
        :type: bool
        """

        self._blocked = blocked

    @property
    def buildable(self):
        """
        Gets the buildable of this QueueLeftItem.

        :return: The buildable of this QueueLeftItem.
        :rtype: bool
        """
        return self._buildable

    @buildable.setter
    def buildable(self, buildable):
        """
        Sets the buildable of this QueueLeftItem.

        :param buildable: The buildable of this QueueLeftItem.
        :type: bool
        """

        self._buildable = buildable

    @property
    def id(self):
        """
        Gets the id of this QueueLeftItem.

        :return: The id of this QueueLeftItem.
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this QueueLeftItem.

        :param id: The id of this QueueLeftItem.
        :type: int
        """

        self._id = id

    @property
    def in_queue_since(self):
        """
        Gets the in_queue_since of this QueueLeftItem.

        :return: The in_queue_since of this QueueLeftItem.
        :rtype: int
        """
        return self._in_queue_since

    @in_queue_since.setter
    def in_queue_since(self, in_queue_since):
        """
        Sets the in_queue_since of this QueueLeftItem.

        :param in_queue_since: The in_queue_since of this QueueLeftItem.
        :type: int
        """

        self._in_queue_since = in_queue_since

    @property
    def params(self):
        """
        Gets the params of this QueueLeftItem.

        :return: The params of this QueueLeftItem.
        :rtype: str
        """
        return self._params

    @params.setter
    def params(self, params):
        """
        Sets the params of this QueueLeftItem.

        :param params: The params of this QueueLeftItem.
        :type: str
        """

        self._params = params

    @property
    def stuck(self):
        """
        Gets the stuck of this QueueLeftItem.

        :return: The stuck of this QueueLeftItem.
        :rtype: bool
        """
        return self._stuck

    @stuck.setter
    def stuck(self, stuck):
        """
        Sets the stuck of this QueueLeftItem.

        :param stuck: The stuck of this QueueLeftItem.
        :type: bool
        """

        self._stuck = stuck

    @property
    def task(self):
        """
        Gets the task of this QueueLeftItem.

        :return: The task of this QueueLeftItem.
        :rtype: FreeStyleProject
        """
        return self._task

    @task.setter
    def task(self, task):
        """
        Sets the task of this QueueLeftItem.

        :param task: The task of this QueueLeftItem.
        :type: FreeStyleProject
        """

        self._task = task

    @property
    def url(self):
        """
        Gets the url of this QueueLeftItem.

        :return: The url of this QueueLeftItem.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """
        Sets the url of this QueueLeftItem.

        :param url: The url of this QueueLeftItem.
        :type: str
        """

        self._url = url

    @property
    def why(self):
        """
        Gets the why of this QueueLeftItem.

        :return: The why of this QueueLeftItem.
        :rtype: str
        """
        return self._why

    @why.setter
    def why(self, why):
        """
        Sets the why of this QueueLeftItem.

        :param why: The why of this QueueLeftItem.
        :type: str
        """

        self._why = why

    @property
    def cancelled(self):
        """
        Gets the cancelled of this QueueLeftItem.

        :return: The cancelled of this QueueLeftItem.
        :rtype: bool
        """
        return self._cancelled

    @cancelled.setter
    def cancelled(self, cancelled):
        """
        Sets the cancelled of this QueueLeftItem.

        :param cancelled: The cancelled of this QueueLeftItem.
        :type: bool
        """

        self._cancelled = cancelled

    @property
    def executable(self):
        """
        Gets the executable of this QueueLeftItem.

        :return: The executable of this QueueLeftItem.
        :rtype: FreeStyleBuild
        """
        return self._executable

    @executable.setter
    def executable(self, executable):
        """
        Sets the executable of this QueueLeftItem.

        :param executable: The executable of this QueueLeftItem.
        :type: FreeStyleBuild
        """

        self._executable = executable

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
        if not isinstance(other, QueueLeftItem):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
