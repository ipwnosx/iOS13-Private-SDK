//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLByClassExtractionStep : CPLBatchExtractionStep
{
    /* void * CDUnknownFunctionPointerType _query */;
    Class _extractionClass;
    NSUInteger _maximumCount;
    NSString *_queryDescription;
}

@property(readonly, copy, nonatomic) NSString *queryDescription; // @synthesize queryDescription=_queryDescription;
@property(readonly, nonatomic) NSUInteger maximumCount; // @synthesize maximumCount=_maximumCount;
@property(readonly, nonatomic) Class extractionClass; // @synthesize extractionClass=_extractionClass;
// - (void).cxx_destruct;
- (id)shortDescription;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (BOOL)extractToBatch:(id)arg1 maximumCount:(NSUInteger)arg2 maximumResourceSize:(NSUInteger)arg3 error:(id )arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 description:(id)arg3 class:(Class)arg4 maximumCount:(NSUInteger)arg5 query:(/* void * CDUnknownFunctionPointerType */)arg6;

@end

