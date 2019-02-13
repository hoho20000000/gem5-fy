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
        mname = '.'.join((pkg, '_param_PciDevice')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_param_PciDevice')
    _param_PciDevice = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_PciDevice', [dirname(__file__)])
        except ImportError:
            import _param_PciDevice
            return _param_PciDevice
        try:
            _mod = imp.load_module('_param_PciDevice', fp, pathname, description)
        finally:
            if fp is not None:
                fp.close()
        return _mod
    _param_PciDevice = swig_import_helper()
    del swig_import_helper
else:
    import _param_PciDevice
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


import m5.internal.param_PciHost
import m5.internal.param_PioDevice
import m5.internal.param_System
import m5.internal.enum_MemoryMode
import m5.internal.AddrRange_vector
import m5.internal.AbstractMemory_vector
import m5.internal.param_AbstractMemory
import m5.internal.param_MemObject
import m5.internal.param_ClockedObject
import m5.internal.param_ClockDomain
import m5.internal.param_SimObject
import m5.internal.drain
import m5.internal.serialize
import m5.internal.param_DmaDevice
class PciDevice(m5.internal.param_DmaDevice.DmaDevice):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
PciDevice_swigregister = _param_PciDevice.PciDevice_swigregister
PciDevice_swigregister(PciDevice)

class PciDeviceParams(m5.internal.param_DmaDevice.DmaDeviceParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    BAR0 = _swig_property(_param_PciDevice.PciDeviceParams_BAR0_get, _param_PciDevice.PciDeviceParams_BAR0_set)
    BAR0LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR0LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR0LegacyIO_set)
    BAR0Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR0Size_get, _param_PciDevice.PciDeviceParams_BAR0Size_set)
    BAR1 = _swig_property(_param_PciDevice.PciDeviceParams_BAR1_get, _param_PciDevice.PciDeviceParams_BAR1_set)
    BAR1LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR1LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR1LegacyIO_set)
    BAR1Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR1Size_get, _param_PciDevice.PciDeviceParams_BAR1Size_set)
    BAR2 = _swig_property(_param_PciDevice.PciDeviceParams_BAR2_get, _param_PciDevice.PciDeviceParams_BAR2_set)
    BAR2LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR2LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR2LegacyIO_set)
    BAR2Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR2Size_get, _param_PciDevice.PciDeviceParams_BAR2Size_set)
    BAR3 = _swig_property(_param_PciDevice.PciDeviceParams_BAR3_get, _param_PciDevice.PciDeviceParams_BAR3_set)
    BAR3LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR3LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR3LegacyIO_set)
    BAR3Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR3Size_get, _param_PciDevice.PciDeviceParams_BAR3Size_set)
    BAR4 = _swig_property(_param_PciDevice.PciDeviceParams_BAR4_get, _param_PciDevice.PciDeviceParams_BAR4_set)
    BAR4LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR4LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR4LegacyIO_set)
    BAR4Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR4Size_get, _param_PciDevice.PciDeviceParams_BAR4Size_set)
    BAR5 = _swig_property(_param_PciDevice.PciDeviceParams_BAR5_get, _param_PciDevice.PciDeviceParams_BAR5_set)
    BAR5LegacyIO = _swig_property(_param_PciDevice.PciDeviceParams_BAR5LegacyIO_get, _param_PciDevice.PciDeviceParams_BAR5LegacyIO_set)
    BAR5Size = _swig_property(_param_PciDevice.PciDeviceParams_BAR5Size_get, _param_PciDevice.PciDeviceParams_BAR5Size_set)
    BIST = _swig_property(_param_PciDevice.PciDeviceParams_BIST_get, _param_PciDevice.PciDeviceParams_BIST_set)
    CacheLineSize = _swig_property(_param_PciDevice.PciDeviceParams_CacheLineSize_get, _param_PciDevice.PciDeviceParams_CacheLineSize_set)
    CapabilityPtr = _swig_property(_param_PciDevice.PciDeviceParams_CapabilityPtr_get, _param_PciDevice.PciDeviceParams_CapabilityPtr_set)
    CardbusCIS = _swig_property(_param_PciDevice.PciDeviceParams_CardbusCIS_get, _param_PciDevice.PciDeviceParams_CardbusCIS_set)
    ClassCode = _swig_property(_param_PciDevice.PciDeviceParams_ClassCode_get, _param_PciDevice.PciDeviceParams_ClassCode_set)
    Command = _swig_property(_param_PciDevice.PciDeviceParams_Command_get, _param_PciDevice.PciDeviceParams_Command_set)
    DeviceID = _swig_property(_param_PciDevice.PciDeviceParams_DeviceID_get, _param_PciDevice.PciDeviceParams_DeviceID_set)
    ExpansionROM = _swig_property(_param_PciDevice.PciDeviceParams_ExpansionROM_get, _param_PciDevice.PciDeviceParams_ExpansionROM_set)
    HeaderType = _swig_property(_param_PciDevice.PciDeviceParams_HeaderType_get, _param_PciDevice.PciDeviceParams_HeaderType_set)
    InterruptLine = _swig_property(_param_PciDevice.PciDeviceParams_InterruptLine_get, _param_PciDevice.PciDeviceParams_InterruptLine_set)
    InterruptPin = _swig_property(_param_PciDevice.PciDeviceParams_InterruptPin_get, _param_PciDevice.PciDeviceParams_InterruptPin_set)
    LatencyTimer = _swig_property(_param_PciDevice.PciDeviceParams_LatencyTimer_get, _param_PciDevice.PciDeviceParams_LatencyTimer_set)
    LegacyIOBase = _swig_property(_param_PciDevice.PciDeviceParams_LegacyIOBase_get, _param_PciDevice.PciDeviceParams_LegacyIOBase_set)
    MSICAPBaseOffset = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPBaseOffset_get, _param_PciDevice.PciDeviceParams_MSICAPBaseOffset_set)
    MSICAPCapId = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPCapId_get, _param_PciDevice.PciDeviceParams_MSICAPCapId_set)
    MSICAPMaskBits = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPMaskBits_get, _param_PciDevice.PciDeviceParams_MSICAPMaskBits_set)
    MSICAPMsgAddr = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPMsgAddr_get, _param_PciDevice.PciDeviceParams_MSICAPMsgAddr_set)
    MSICAPMsgCtrl = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPMsgCtrl_get, _param_PciDevice.PciDeviceParams_MSICAPMsgCtrl_set)
    MSICAPMsgData = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPMsgData_get, _param_PciDevice.PciDeviceParams_MSICAPMsgData_set)
    MSICAPMsgUpperAddr = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPMsgUpperAddr_get, _param_PciDevice.PciDeviceParams_MSICAPMsgUpperAddr_set)
    MSICAPNextCapability = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPNextCapability_get, _param_PciDevice.PciDeviceParams_MSICAPNextCapability_set)
    MSICAPPendingBits = _swig_property(_param_PciDevice.PciDeviceParams_MSICAPPendingBits_get, _param_PciDevice.PciDeviceParams_MSICAPPendingBits_set)
    MSIXCAPBaseOffset = _swig_property(_param_PciDevice.PciDeviceParams_MSIXCAPBaseOffset_get, _param_PciDevice.PciDeviceParams_MSIXCAPBaseOffset_set)
    MSIXCAPCapId = _swig_property(_param_PciDevice.PciDeviceParams_MSIXCAPCapId_get, _param_PciDevice.PciDeviceParams_MSIXCAPCapId_set)
    MSIXCAPNextCapability = _swig_property(_param_PciDevice.PciDeviceParams_MSIXCAPNextCapability_get, _param_PciDevice.PciDeviceParams_MSIXCAPNextCapability_set)
    MSIXMsgCtrl = _swig_property(_param_PciDevice.PciDeviceParams_MSIXMsgCtrl_get, _param_PciDevice.PciDeviceParams_MSIXMsgCtrl_set)
    MSIXPbaOffset = _swig_property(_param_PciDevice.PciDeviceParams_MSIXPbaOffset_get, _param_PciDevice.PciDeviceParams_MSIXPbaOffset_set)
    MSIXTableOffset = _swig_property(_param_PciDevice.PciDeviceParams_MSIXTableOffset_get, _param_PciDevice.PciDeviceParams_MSIXTableOffset_set)
    MaximumLatency = _swig_property(_param_PciDevice.PciDeviceParams_MaximumLatency_get, _param_PciDevice.PciDeviceParams_MaximumLatency_set)
    MinimumGrant = _swig_property(_param_PciDevice.PciDeviceParams_MinimumGrant_get, _param_PciDevice.PciDeviceParams_MinimumGrant_set)
    PMCAPBaseOffset = _swig_property(_param_PciDevice.PciDeviceParams_PMCAPBaseOffset_get, _param_PciDevice.PciDeviceParams_PMCAPBaseOffset_set)
    PMCAPCapId = _swig_property(_param_PciDevice.PciDeviceParams_PMCAPCapId_get, _param_PciDevice.PciDeviceParams_PMCAPCapId_set)
    PMCAPCapabilities = _swig_property(_param_PciDevice.PciDeviceParams_PMCAPCapabilities_get, _param_PciDevice.PciDeviceParams_PMCAPCapabilities_set)
    PMCAPCtrlStatus = _swig_property(_param_PciDevice.PciDeviceParams_PMCAPCtrlStatus_get, _param_PciDevice.PciDeviceParams_PMCAPCtrlStatus_set)
    PMCAPNextCapability = _swig_property(_param_PciDevice.PciDeviceParams_PMCAPNextCapability_get, _param_PciDevice.PciDeviceParams_PMCAPNextCapability_set)
    PXCAPBaseOffset = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPBaseOffset_get, _param_PciDevice.PciDeviceParams_PXCAPBaseOffset_set)
    PXCAPCapId = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPCapId_get, _param_PciDevice.PciDeviceParams_PXCAPCapId_set)
    PXCAPCapabilities = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPCapabilities_get, _param_PciDevice.PciDeviceParams_PXCAPCapabilities_set)
    PXCAPDevCap2 = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPDevCap2_get, _param_PciDevice.PciDeviceParams_PXCAPDevCap2_set)
    PXCAPDevCapabilities = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPDevCapabilities_get, _param_PciDevice.PciDeviceParams_PXCAPDevCapabilities_set)
    PXCAPDevCtrl = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPDevCtrl_get, _param_PciDevice.PciDeviceParams_PXCAPDevCtrl_set)
    PXCAPDevCtrl2 = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPDevCtrl2_get, _param_PciDevice.PciDeviceParams_PXCAPDevCtrl2_set)
    PXCAPDevStatus = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPDevStatus_get, _param_PciDevice.PciDeviceParams_PXCAPDevStatus_set)
    PXCAPLinkCap = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPLinkCap_get, _param_PciDevice.PciDeviceParams_PXCAPLinkCap_set)
    PXCAPLinkCtrl = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPLinkCtrl_get, _param_PciDevice.PciDeviceParams_PXCAPLinkCtrl_set)
    PXCAPLinkStatus = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPLinkStatus_get, _param_PciDevice.PciDeviceParams_PXCAPLinkStatus_set)
    PXCAPNextCapability = _swig_property(_param_PciDevice.PciDeviceParams_PXCAPNextCapability_get, _param_PciDevice.PciDeviceParams_PXCAPNextCapability_set)
    ProgIF = _swig_property(_param_PciDevice.PciDeviceParams_ProgIF_get, _param_PciDevice.PciDeviceParams_ProgIF_set)
    Revision = _swig_property(_param_PciDevice.PciDeviceParams_Revision_get, _param_PciDevice.PciDeviceParams_Revision_set)
    Status = _swig_property(_param_PciDevice.PciDeviceParams_Status_get, _param_PciDevice.PciDeviceParams_Status_set)
    SubClassCode = _swig_property(_param_PciDevice.PciDeviceParams_SubClassCode_get, _param_PciDevice.PciDeviceParams_SubClassCode_set)
    SubsystemID = _swig_property(_param_PciDevice.PciDeviceParams_SubsystemID_get, _param_PciDevice.PciDeviceParams_SubsystemID_set)
    SubsystemVendorID = _swig_property(_param_PciDevice.PciDeviceParams_SubsystemVendorID_get, _param_PciDevice.PciDeviceParams_SubsystemVendorID_set)
    VendorID = _swig_property(_param_PciDevice.PciDeviceParams_VendorID_get, _param_PciDevice.PciDeviceParams_VendorID_set)
    config_latency = _swig_property(_param_PciDevice.PciDeviceParams_config_latency_get, _param_PciDevice.PciDeviceParams_config_latency_set)
    host = _swig_property(_param_PciDevice.PciDeviceParams_host_get, _param_PciDevice.PciDeviceParams_host_set)
    pci_bus = _swig_property(_param_PciDevice.PciDeviceParams_pci_bus_get, _param_PciDevice.PciDeviceParams_pci_bus_set)
    pci_dev = _swig_property(_param_PciDevice.PciDeviceParams_pci_dev_get, _param_PciDevice.PciDeviceParams_pci_dev_set)
    pci_func = _swig_property(_param_PciDevice.PciDeviceParams_pci_func_get, _param_PciDevice.PciDeviceParams_pci_func_set)
    pio_latency = _swig_property(_param_PciDevice.PciDeviceParams_pio_latency_get, _param_PciDevice.PciDeviceParams_pio_latency_set)

    def __init__(self):
        this = _param_PciDevice.new_PciDeviceParams()
        try:
            self.this.append(this)
        except __builtin__.Exception:
            self.this = this
    __swig_destroy__ = _param_PciDevice.delete_PciDeviceParams
    __del__ = lambda self: None
PciDeviceParams_swigregister = _param_PciDevice.PciDeviceParams_swigregister
PciDeviceParams_swigregister(PciDeviceParams)



