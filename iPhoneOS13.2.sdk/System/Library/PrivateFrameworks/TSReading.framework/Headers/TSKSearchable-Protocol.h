//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKModel-Protocol.h>

@class NSString, TSKReplaceAllChildCommand, TSKReplaceAllCommand, TSKSearch;

@protocol TSKSearchable <TSKModel>

@optional
- (TSKReplaceAllChildCommand *)childCommandForReplaceAllCommand:(TSKReplaceAllCommand *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)continueSearch:(TSKSearch *)arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (TSKSearch *)searchForString:(NSString *)arg1 options:(NSUInteger)arg2 onHit:(void (^)(id <TSKSearchReference>))arg3;
@end

