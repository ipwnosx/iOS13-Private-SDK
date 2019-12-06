//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloProxyDelegateProtocol-Protocol.h>

@class CLSilo, NSArray;
@protocol CLIntersiloProxyDelegateProtocol;

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
+ (void)performSyncOnSilo:(CLSilo *)arg1 invoker:(void (^)(void))arg2;
+ (void)becameFatallyBlocked:(NSArray *)arg1 index:(NSUInteger)arg2;
+ (CLSilo *)getSilo;
+ (BOOL)isSupported;

@optional
- (void)setDelegateEntityName:(const char )arg1;
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)endService;
- (void)beginService;
@end

