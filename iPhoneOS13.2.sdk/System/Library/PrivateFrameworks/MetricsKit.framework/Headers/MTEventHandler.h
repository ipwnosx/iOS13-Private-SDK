//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventDataProvider.h>

@interface MTEventHandler : MTEventDataProvider
{
}

+ (id)cachableWithKey:(id)arg1 onBackgroundThread:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (void)clearEventContextCache;
+ (void)createEventContextCache;
+ (id)currentEventContextCache;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (BOOL)mtIncludeBaseFields;
- (id)knownFields;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;

@end

