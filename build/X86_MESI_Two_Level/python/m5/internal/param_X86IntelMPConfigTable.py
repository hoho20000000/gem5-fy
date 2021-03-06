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
        mname = '.'.join((pkg, '_param_X86IntelMPConfigTable')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_X86IntelMPConfigTable')
    _param_X86IntelMPConfigTable = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_X86IntelMPConfigTable', [dirname(__file__)])
        except ImportError:
            import _param_X86IntelMPConfigTable
            return _param_X86IntelMPConfigTable
        try:
            _mod = imp.load_module('_param_X86IntelMPConfigTable', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_X86IntelMPConfigTable = swig_import_helper()
    del swig_import_helper
else:
    import _param_X86IntelMPConfigTable
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


import m5.internal.X86IntelMPBaseConfigEntry_vector
import m5.internal.param_X86IntelMPBaseConfigEntry
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.X86IntelMPExtConfigEntry_vector
import m5.internal.param_X86IntelMPExtConfigEntry
class X86ISA_COLONS_IntelMP_COLONS_ConfigTable(m5.internal.param_SimObject.SimObject):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
X86ISA_COLONS_IntelMP_COLONS_ConfigTable_swigregister = _param_X86IntelMPConfigTable.X86ISA_COLONS_IntelMP_COLONS_ConfigTable_swigregister
X86ISA_COLONS_IntelMP_COLONS_ConfigTable_swigregister(X86ISA_COLONS_IntelMP_COLONS_ConfigTable)

class X86IntelMPConfigTableParams(m5.internal.param_SimObject.SimObjectParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr

    def create(self):
        return _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_create(self)
    base_entries = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_base_entries_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_base_entries_set)
    ext_entries = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_ext_entries_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_ext_entries_set)
    local_apic = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_local_apic_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_local_apic_set)
    oem_id = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_oem_id_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_oem_id_set)
    oem_table_addr = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_oem_table_addr_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_oem_table_addr_set)
    oem_table_size = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_oem_table_size_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_oem_table_size_set)
    product_id = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_product_id_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_product_id_set)
    spec_rev = _swig_property(_param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_spec_rev_get, _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_spec_rev_set)

    def __init__(self):
        this = _param_X86IntelMPConfigTable.new_X86IntelMPConfigTableParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_X86IntelMPConfigTable.delete_X86IntelMPConfigTableParams
    __del__ = lambda self: None
X86IntelMPConfigTableParams_swigregister = _param_X86IntelMPConfigTable.X86IntelMPConfigTableParams_swigregister
X86IntelMPConfigTableParams_swigregister(X86IntelMPConfigTableParams)



