//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSDate, NSString, NSUUID;

@interface HFAnalyticsCameraDidFailToLoadPosterFrameEvent : HFAnalyticsEvent
{
    NSUUID *_clipID;
    NSUUID *_cameraID;
    double _posterFrameTimeOffset;
    NSDate *_clipStartDate;
    NSString *_errorDomain;
    long long _errorCode;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSDate *clipStartDate; // @synthesize clipStartDate=_clipStartDate;
@property(nonatomic) double posterFrameTimeOffset; // @synthesize posterFrameTimeOffset=_posterFrameTimeOffset;
@property(retain, nonatomic) NSUUID *cameraID; // @synthesize cameraID=_cameraID;
@property(retain, nonatomic) NSUUID *clipID; // @synthesize clipID=_clipID;
// - (void).cxx_destruct;
- (id)payload;
- (id)initWithData:(id)arg1;

@end

