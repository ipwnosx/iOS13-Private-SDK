//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@interface PGGraphIngestNextEdgesProcessor : NSObject <PGGraphIngestProcessor>
{
}

- (void)processNextEdgesWithSortedMomentNodes:(id)arg1 graph:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

@end

