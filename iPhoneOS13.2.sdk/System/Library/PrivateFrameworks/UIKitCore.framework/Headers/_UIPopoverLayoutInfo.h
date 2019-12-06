//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying>
{
    UIEdgeInsets _contentInset;
    double _arrowHeight;
    double _arrowOffset;
    CGSize _preferredContentSize;
    NSUInteger _preferredArrowDirections;
    CGRect _containingFrame;
    UIEdgeInsets _containingFrameInsets;
    CGRect _sourceViewRect;
    BOOL _canOverlapSourceViewRect;
    CGRect _frame;
    double _offset;
    NSUInteger _arrowDirection;
    BOOL _preferLandscapeOrientations;
    BOOL _updatesEnabled;
    NSMutableArray *_candidates;
}

+ (id)_observationKeys;
@property(nonatomic) BOOL preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property(nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(readonly, nonatomic) NSUInteger arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) BOOL canOverlapSourceViewRect; // @synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect;
@property(nonatomic) CGRect sourceViewRect; // @synthesize sourceViewRect=_sourceViewRect;
@property(nonatomic) UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property(nonatomic) CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(nonatomic) NSUInteger preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
@property(nonatomic) CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_updateOutputs;
- (CGSize)_popoverViewSizeForContentSize:(CGSize)arg1 arrowDirection:(NSUInteger)arg2;
- (id)candidates;
- (void)updateProperties:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

