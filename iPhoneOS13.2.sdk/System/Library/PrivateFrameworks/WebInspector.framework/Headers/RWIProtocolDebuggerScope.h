//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL empty;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long type;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *object;
- (id)initWithObject:(id)arg1 type:(long long)arg2;

@end

