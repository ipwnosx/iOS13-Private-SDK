//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationAnalyticsLogger-Protocol.h>

@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
// - (void).cxx_destruct;
- (void)noDonatedMeCard;
- (void)noMeCard;
- (void)withinReportingInterval:(id)arg1;
- (void)didReportAnalytics;
- (void)willReportAnalytics;
- (id)init;

@end

