//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRDataFileHistoryHelpers : NSObject
{
}

+ (id)unarchiveSecureProperties;
+ (BOOL)archiveSecureProperties:(id)arg1;
+ (BOOL)createMissingDates:(id)arg1;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)findPairedDateForDeviceID:(id)arg1 inHistory:(id)arg2;
+ (BOOL)archiveDeviceHistory:(id)arg1;
+ (id)unarchiveDeviceHistory;

@end

