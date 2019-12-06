//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXMutableArrayChangeDetails, PXSectionedDataSourceChangeDetails;

@interface PXSectionedChangeDetailsCoalescer : NSObject
{
    NSUInteger _fromDataSourceIdentifier;
    NSUInteger _currentToDataSourceIdentifier;
    PXMutableArrayChangeDetails *_sectionChangeDetails;
    NSMutableArray *_itemChangeEntries;
    PXSectionedDataSourceChangeDetails *_cachedResult;
}

+ (BOOL)_verboseLoggingEnabled;
+ (id)changeDetailsByCoalescingChangeDetails:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;
- (void)addChangeDetails:(id)arg1;
- (id)init;
- (id)initWithSectionedChangeDetails:(id)arg1;

@end

