//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject
{
    id <CALNCoreLocationProvider> _coreLocationProvider;
}

@property(readonly, nonatomic) id <CALNCoreLocationProvider> coreLocationProvider; // @synthesize coreLocationProvider=_coreLocationProvider;
// - (void).cxx_destruct;
- (void)markAsHavingReceivedLocation;
@property(readonly, nonatomic) BOOL allowsLocationAlerts;
- (id)initWithCoreLocationProvider:(id)arg1;

@end

