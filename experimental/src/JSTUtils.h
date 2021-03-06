//
//  JSTUtil.h
//  jstalk
//
//  Created by August Mueller on 9/24/10.
//  Copyright 2010 Flying Meat Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import "JSTBridge.h"
#include <ffi/ffi.h>

extern ffi_type ffi_type_jst_structure;

void JSTAssignException(JSTBridge *bridge, JSValueRef *exception, NSString *reason);
id JSTNSObjectFromValue(JSTBridge *bridge, JSValueRef value);
SEL JSTSelectorFromValue(JSTBridge *bridge, JSValueRef value);
ffi_type* JSTFFITypeForTypeEncoding(NSString *encoding);
int JSTSizeOfTypeEncoding(NSString *encoding);
NSString *JSTStringForFFIType(ffi_type* type);
ffi_type* JSTFFITypeForBridgeDeclaredType(NSString *type);
JSValueRef JSTMakeJSValueWithFFITypeAndValue(ffi_type *type, void *value, JSTBridge *bridge);
//JSValueRef JSTMakeJSValueWithTypeAndValue(NSString *type, void *value, JSTBridge *bridge);
long JSTLongFromValue(JSTBridge *bridge, JSValueRef value);
long double JSTDoubleFromValue(JSTBridge *bridge, JSValueRef value);
NSArray *JSTTypeEncodingsFromStructureTypeEncoding(NSString *structureTypeEncoding);
BOOL JSTSetJSValueToPointerForType(JSValueRef jsValue, void *pointer, NSString *typeInfo, JSTBridge *bridge);
NSString *NSStringFromJSTType(int type);

