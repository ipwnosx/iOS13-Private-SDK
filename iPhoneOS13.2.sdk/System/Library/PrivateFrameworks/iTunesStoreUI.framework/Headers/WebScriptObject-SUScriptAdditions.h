//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WebScriptObject.h>

@interface WebScriptObject (SUScriptAdditions)
- (id)safeValueForKey:(id)arg1;
- (id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (id)copyValuesForKeys:(id)arg1;
//  (id)copyJSONDataWithContext:(struct OpaqueJSContext )arg1;
- (id)copyDate;
//  (id)copyArrayOrDictionaryWithContext:(struct OpaqueJSContext )arg1;
- (id)copyArrayValueWithValidator:(/* void * CDUnknownFunctionPointerType */)arg1 context:(void )arg2;
@end

