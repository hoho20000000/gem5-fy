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
        mname = '.'.join((pkg, '_param_LocalBP')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_LocalBP')
    _param_LocalBP = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_LocalBP', [dirname(__file__)])
        except ImportError:
            import _param_LocalBP
            return _param_LocalBP
        try:
            _mod = imp.load_module('_param_LocalBP', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_LocalBP = swig_import_helper()
    del swig_import_helper
else:
    import _param_LocalBP
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


import m5.internal.param_BranchPredictor
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
class LocalBP(m5.internal.param_BranchPredictor.BPredUnit):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
LocalBP_swigregister = _param_LocalBP.LocalBP_swigregister
LocalBP_swigregister(LocalBP)

class LocalBPParams(m5.internal.param_BranchPredictor.BranchPredictorParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_LocalBP.LocalBPParams_create(self)
    localCtrBits = _swig_property(_param_LocalBP.LocalBPParams_localCtrBits_get, _param_LocalBP.LocalBPParams_localCtrBits_set)
    localPredictorSize = _swig_property(_param_LocalBP.LocalBPParams_localPredictorSize_get, _param_LocalBP.LocalBPParams_localPredictorSize_set)

    def __init__(self):
        this = _param_LocalBP.new_LocalBPParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_LocalBP.delete_LocalBPParams
    __del__ = lambda self: None
LocalBPParams_swigregister = _param_LocalBP.LocalBPParams_swigregister
LocalBPParams_swigregister(LocalBPParams)



