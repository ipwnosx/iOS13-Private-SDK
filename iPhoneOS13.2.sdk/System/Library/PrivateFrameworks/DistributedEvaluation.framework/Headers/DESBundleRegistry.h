//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DESBundleRegistry : NSObject
{
    NSDictionary *_bundleMap;
}

+ (id)sharedInstance;
+ (void)initialize;
// - (void).cxx_destruct;
- (BOOL)containsBundleId:(id)arg1;
- (id)allBundleIds;
- (id)coreDuetEventQueryForBundleId:(id)arg1;
- (id)supportedCoreDuetEventStreamNamesForBundleId:(id)arg1;
- (id)supportedRecordTypesForBundleId:(id)arg1;
- (NSUInteger)daysToExpirationOfRecordsForBundleId:(id)arg1;
- (NSUInteger)maximumNumberOfRecordsForBundleId:(id)arg1;
- (id)evaluatorForBundleId:(id)arg1 error:(id )arg2;
- (id)_init;
- (id)init;

@end

