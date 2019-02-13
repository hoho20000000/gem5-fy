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
        mname = '.'.join((pkg, '_param_LiveProcess')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_LiveProcess')
    _param_LiveProcess = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_LiveProcess', [dirname(__file__)])
        except ImportError:
            import _param_LiveProcess
            return _param_LiveProcess
        try:
            _mod = imp.load_module('_param_LiveProcess', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_LiveProcess = swig_import_helper()
    del swig_import_helper
else:
    import _param_LiveProcess
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


import m5.internal.String_vector
import m5.internal.EmulatedDriver_vector
import m5.internal.param_EmulatedDriver
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.param_Process
import m5.internal.param_System
import m5.internal.enum_MemoryMode
import m5.internal.AddrRange_vector
import m5.internal.AbstractMemory_vector
import m5.internal.param_AbstractMemory
import m5.internal.param_MemObject
import m5.internal.param_ClockedObject
import m5.internal.param_ClockDomain
class LiveProcess(m5.internal.param_Process.Process):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
LiveProcess_swigregister = _param_LiveProcess.LiveProcess_swigregister
LiveProcess_swigregister(LiveProcess)

class LiveProcessParams(m5.internal.param_Process.ProcessParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_LiveProcess.LiveProcessParams_create(self)
    cmd = _swig_property(_param_LiveProcess.LiveProcessParams_cmd_get, _param_LiveProcess.LiveProcessParams_cmd_set)
    cwd = _swig_property(_param_LiveProcess.LiveProcessParams_cwd_get, _param_LiveProcess.LiveProcessParams_cwd_set)
    drivers = _swig_property(_param_LiveProcess.LiveProcessParams_drivers_get, _param_LiveProcess.LiveProcessParams_drivers_set)
    egid = _swig_property(_param_LiveProcess.LiveProcessParams_egid_get, _param_LiveProcess.LiveProcessParams_egid_set)
    env = _swig_property(_param_LiveProcess.LiveProcessParams_env_get, _param_LiveProcess.LiveProcessParams_env_set)
    euid = _swig_property(_param_LiveProcess.LiveProcessParams_euid_get, _param_LiveProcess.LiveProcessParams_euid_set)
    executable = _swig_property(_param_LiveProcess.LiveProcessParams_executable_get, _param_LiveProcess.LiveProcessParams_executable_set)
    gid = _swig_property(_param_LiveProcess.LiveProcessParams_gid_get, _param_LiveProcess.LiveProcessParams_gid_set)
    pid = _swig_property(_param_LiveProcess.LiveProcessParams_pid_get, _param_LiveProcess.LiveProcessParams_pid_set)
    ppid = _swig_property(_param_LiveProcess.LiveProcessParams_ppid_get, _param_LiveProcess.LiveProcessParams_ppid_set)
    simpoint = _swig_property(_param_LiveProcess.LiveProcessParams_simpoint_get, _param_LiveProcess.LiveProcessParams_simpoint_set)
    uid = _swig_property(_param_LiveProcess.LiveProcessParams_uid_get, _param_LiveProcess.LiveProcessParams_uid_set)

    def __init__(self):
        this = _param_LiveProcess.new_LiveProcessParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_LiveProcess.delete_LiveProcessParams
    __del__ = lambda self: None
LiveProcessParams_swigregister = _param_LiveProcess.LiveProcessParams_swigregister
LiveProcessParams_swigregister(LiveProcessParams)



