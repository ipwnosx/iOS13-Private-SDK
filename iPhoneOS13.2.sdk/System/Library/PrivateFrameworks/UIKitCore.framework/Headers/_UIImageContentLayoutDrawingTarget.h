//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIImageContentEffect-Protocol.h>
#import <UIKitCore/_UIImageContentLayoutTarget-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget>
{
    double _preferredContentScaleFactor;
    CGRect _bounds;
}

+ (id)targetWithSize:(CGSize)arg1 scale:(double)arg2;
@property(readonly, nonatomic) double preferredContentScaleFactor; // @synthesize preferredContentScaleFactor=_preferredContentScaleFactor;
@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
- (id)_renditionForSource:(id)arg1 size:(CGSize)arg2 withCGImageProvider:(CDUnknownBlockType)arg3 lazy:(BOOL)arg4;
- (id)_effectForRenderingSource:(id)arg1;
@property(readonly, nonatomic) BOOL _hasContentGravity;
@property(readonly, nonatomic) long long contentMode;
@property(readonly, nonatomic) long long semanticContentAttribute;
@property(readonly, nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;

@end

