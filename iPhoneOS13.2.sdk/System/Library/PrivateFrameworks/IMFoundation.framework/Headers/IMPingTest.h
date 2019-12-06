//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface IMPingTest : NSObject
{
    NSString *_address;
    BOOL _usesWifi;
    id _collector;
    BOOL _isRunning;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_socketReadSource;
    double _secondsToRun;
}

@property(readonly, nonatomic) double secondsToRun; // @synthesize secondsToRun=_secondsToRun;
- (double)longTimeInterval;
//  (void)_setupReadSource:(int)arg1 address:(struct sockaddr_in)arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(CDUnknownBlockType)arg5;
//  (void)_doPingWithSocket:(int)arg1 address:(struct sockaddr_in)arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)writeResultsToFile:(id)arg1 error:(id )arg2;
- (id)pingStats:(double)arg1;
- (id)pingStats;
- (void)stop;
- (void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 wifi:(BOOL)arg2;

@end

