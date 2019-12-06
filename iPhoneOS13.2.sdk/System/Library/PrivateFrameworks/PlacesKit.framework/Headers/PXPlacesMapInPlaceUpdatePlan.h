//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapUpdatePlan-Protocol.h>

@class NSMapTable;
@protocol OS_dispatch_semaphore, PXPlacesMapLayoutResult, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapInPlaceUpdatePlan : NSObject <PXPlacesMapUpdatePlan>
{
    NSObject<OS_dispatch_semaphore> *_sema;
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesMapLayoutResult> _currentLayoutResult;
    NSMapTable *_currentLayoutItemToAnnotationTable;
}

@property(retain) NSMapTable *currentLayoutItemToAnnotationTable; // @synthesize currentLayoutItemToAnnotationTable=_currentLayoutItemToAnnotationTable;
@property(retain) id <PXPlacesMapLayoutResult> currentLayoutResult; // @synthesize currentLayoutResult=_currentLayoutResult;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
// - (void).cxx_destruct;
- (void)reset;
- (id)annotationForLayoutItem:(id)arg1;
- (id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;
- (id)removalPlanResult;
- (id)resultForNewLayoutResult:(id)arg1;
- (id)init;

@end

