//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString;
@protocol PXDisplayAsset;

@interface PXAssetEditOperationPerformer : NSObject
{
    NSString *_type;
    id <PXDisplayAsset> _asset;
    NSProgress *_progress;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)performEditOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEditOperationType:(id)arg1 asset:(id)arg2;
- (id)init;

@end

