//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, _UIFocusMapSearchInfo, _UIFocusMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotDebugInfo : NSObject
{
    UIImage *_image;
    _UIFocusMapSnapshot *_snapshot;
    _UIFocusMapSearchInfo *_focusMapSearchInfo;
    CGPoint _imageAnchorPoint;
}

+ (id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3;
@property(readonly, nonatomic) __weak _UIFocusMapSearchInfo *focusMapSearchInfo; // @synthesize focusMapSearchInfo=_focusMapSearchInfo;
@property(readonly, nonatomic) _UIFocusMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;
// - (void).cxx_destruct;
- (id)_drawImage;
- (CGRect)_rectContainingAllFocusRegions;
@property(readonly, nonatomic) CGPoint imageAnchorPoint; // @synthesize imageAnchorPoint=_imageAnchorPoint;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2;

@end

