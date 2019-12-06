//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject
{
}

@property(nonatomic) double responseEnd;
@property(nonatomic) double responseStart;
@property(nonatomic) double requestStart;
@property(nonatomic) double secureConnectionStart;
@property(nonatomic) double connectEnd;
@property(nonatomic) double connectStart;
@property(nonatomic) double domainLookupEnd;
@property(nonatomic) double domainLookupStart;
@property(nonatomic) double fetchStart;
@property(nonatomic) double redirectEnd;
@property(nonatomic) double redirectStart;
@property(nonatomic) double startTime;
- (id)initWithStartTime:(double)arg1 redirectStart:(double)arg2 redirectEnd:(double)arg3 fetchStart:(double)arg4 domainLookupStart:(double)arg5 domainLookupEnd:(double)arg6 connectStart:(double)arg7 connectEnd:(double)arg8 secureConnectionStart:(double)arg9 requestStart:(double)arg10 responseStart:(double)arg11 responseEnd:(double)arg12;

@end

