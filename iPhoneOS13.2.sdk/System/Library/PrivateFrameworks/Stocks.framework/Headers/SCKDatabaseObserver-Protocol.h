//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SCKDatabase;
@protocol SCKZoneReading;

@protocol SCKDatabaseObserver
- (void)database:(SCKDatabase *)arg1 didChangeZone:(NSString *)arg2 from:(id <SCKZoneReading>)arg3 to:(id <SCKZoneReading>)arg4;
@end

