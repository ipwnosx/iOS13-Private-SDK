//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, UIImage;
@protocol OS_dispatch_queue;

@interface SKUIOffscreenRenderOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* CDUnknownBlockType */ _createLayerBlock;
    UIImage *_outputImage;
}

+ (void)preheatOffscreenRenderOperations;
// - (void).cxx_destruct;
@property(copy, nonatomic) id /* CDUnknownBlockType */ createLayerBlock;
@property(readonly, nonatomic) UIImage *outputImage;
- (void)main;
- (id)init;

@end

