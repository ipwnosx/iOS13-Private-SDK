//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PLMetricEvent-Protocol.h>

@class NSDictionary, NSString, PGGraph, PHPhotoLibrary;

@interface PGCuratedLibraryFTEMetricEvent : NSObject <PLMetricEvent>
{
    NSString *_identifier;
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_payload;
}

@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (id)initWithGraphManager:(id)arg1;

@end

