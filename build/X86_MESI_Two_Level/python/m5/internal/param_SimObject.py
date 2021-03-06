# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.12
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_param_SimObject')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_SimObject')
    _param_SimObject = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_SimObject', [dirname(__file__)])
        except ImportError:
            import _param_SimObject
            return _param_SimObject
        try:
            _mod = imp.load_module('_param_SimObject', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_SimObject = swig_import_helper()
    del swig_import_helper
else:
    import _param_SimObject
del _swig_python_version_info

try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        object.__setattr__(self, name, value)
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)


def _swig_setattr_nondynamic_method(set):
    def set_attr(self, name, value):
        if (name == "thisown"):
            return self.this.own(value)
        if hasattr(self, name) or (name == "this"):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import m5.internal.drain
import m5.internal.serialize
class SimObject(m5.internal.drain.Drainable, m5.internal.serialize.Serializable):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr

    def init(self):
        return _param_SimObject.SimObject_init(self)

    def loadState(self, cp):
        return _param_SimObject.SimObject_loadState(self, cp)

    def initState(self):
        return _param_SimObject.SimObject_initState(self)

    def memInvalidate(self):
        return _param_SimObject.SimObject_memInvalidate(self)

    def memWriteback(self):
        return _param_SimObject.SimObject_memWriteback(self)

    def regStats(self):
        return _param_SimObject.SimObject_regStats(self)

    def resetStats(self):
        return _param_SimObject.SimObject_resetStats(self)

    def regProbePoints(self):
        return _param_SimObject.SimObject_regProbePoints(self)

    def regProbeListeners(self):
        return _param_SimObject.SimObject_regProbeListeners(self)

    def startup(self):
        return _param_SimObject.SimObject_startup(self)
SimObject_swigregister = _param_SimObject.SimObject_swigregister
SimObject_swigregister(SimObject)

class SimObjectParams(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def __init__(self):
        this = _param_SimObject.new_SimObjectParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_SimObject.delete_SimObjectParams
    __del__ = lambda self: None
    name = _swig_property(_param_SimObject.SimObjectParams_name_get, _param_SimObject.SimObjectParams_name_set)
    pyobj = _swig_property(_param_SimObject.SimObjectParams_pyobj_get, _param_SimObject.SimObjectParams_pyobj_set)
    eventq_index = _swig_property(_param_SimObject.SimObjectParams_eventq_index_get, _param_SimObject.SimObjectParams_eventq_index_set)
SimObjectParams_swigregister = _param_SimObject.SimObjectParams_swigregister
SimObjectParams_swigregister(SimObjectParams)



