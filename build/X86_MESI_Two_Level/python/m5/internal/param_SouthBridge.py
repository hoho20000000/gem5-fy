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
        mname = '.'.join((pkg, '_param_SouthBridge')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_SouthBridge')
    _param_SouthBridge = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_SouthBridge', [dirname(__file__)])
        except ImportError:
            import _param_SouthBridge
            return _param_SouthBridge
        try:
            _mod = imp.load_module('_param_SouthBridge', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_SouthBridge = swig_import_helper()
    del swig_import_helper
else:
    import _param_SouthBridge
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


import m5.internal.param_Cmos
import m5.internal.param_X86IntSourcePin
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.param_BasicPioDevice
import m5.internal.param_PioDevice
import m5.internal.param_System
import m5.internal.enum_MemoryMode
import m5.internal.AddrRange_vector
import m5.internal.AbstractMemory_vector
import m5.internal.param_AbstractMemory
import m5.internal.param_MemObject
import m5.internal.param_ClockedObject
import m5.internal.param_ClockDomain
import m5.internal.param_I8237
import m5.internal.param_I82094AA
import m5.internal.param_I8259
import m5.internal.enum_X86I8259CascadeMode
import m5.internal.param_I8042
import m5.internal.param_I8254
import m5.internal.param_Platform
import m5.internal.param_IntrControl
import m5.internal.param_PcSpeaker
class SouthBridge(m5.internal.param_SimObject.SimObject):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
SouthBridge_swigregister = _param_SouthBridge.SouthBridge_swigregister
SouthBridge_swigregister(SouthBridge)

class SouthBridgeParams(m5.internal.param_SimObject.SimObjectParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_SouthBridge.SouthBridgeParams_create(self)
    cmos = _swig_property(_param_SouthBridge.SouthBridgeParams_cmos_get, _param_SouthBridge.SouthBridgeParams_cmos_set)
    dma1 = _swig_property(_param_SouthBridge.SouthBridgeParams_dma1_get, _param_SouthBridge.SouthBridgeParams_dma1_set)
    io_apic = _swig_property(_param_SouthBridge.SouthBridgeParams_io_apic_get, _param_SouthBridge.SouthBridgeParams_io_apic_set)
    keyboard = _swig_property(_param_SouthBridge.SouthBridgeParams_keyboard_get, _param_SouthBridge.SouthBridgeParams_keyboard_set)
    pic1 = _swig_property(_param_SouthBridge.SouthBridgeParams_pic1_get, _param_SouthBridge.SouthBridgeParams_pic1_set)
    pic2 = _swig_property(_param_SouthBridge.SouthBridgeParams_pic2_get, _param_SouthBridge.SouthBridgeParams_pic2_set)
    pit = _swig_property(_param_SouthBridge.SouthBridgeParams_pit_get, _param_SouthBridge.SouthBridgeParams_pit_set)
    platform = _swig_property(_param_SouthBridge.SouthBridgeParams_platform_get, _param_SouthBridge.SouthBridgeParams_platform_set)
    speaker = _swig_property(_param_SouthBridge.SouthBridgeParams_speaker_get, _param_SouthBridge.SouthBridgeParams_speaker_set)

    def __init__(self):
        this = _param_SouthBridge.new_SouthBridgeParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_SouthBridge.delete_SouthBridgeParams
    __del__ = lambda self: None
SouthBridgeParams_swigregister = _param_SouthBridge.SouthBridgeParams_swigregister
SouthBridgeParams_swigregister(SouthBridgeParams)



