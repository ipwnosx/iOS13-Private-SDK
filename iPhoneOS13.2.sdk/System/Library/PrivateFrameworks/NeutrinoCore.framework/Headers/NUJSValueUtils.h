//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUJSValueUtils : NSObject
{
}

+ (id)nujs_toObject:(id)arg1;
+ (id)nujs_callWithArguments:(id)arg1 thisObject:(id)arg2 jsValue:(id)arg3;
+ (BOOL)nujs_isString:(id)arg1;
+ (id)nujs_functionSource:(id)arg1;
+ (BOOL)nujs_isFunction:(id)arg1;
+ (id)nujs_toArray:(id)arg1;
+ (id)nujs_toDictionary:(id)arg1;
+ (id)nujs_properties:(id)arg1;
+ (id)nujs_valueWithFunction:(id)arg1 params:(id)arg2 body:(id)arg3 sourceURL:(id)arg4 inContext:(id)arg5;

@end

