//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SUCellConfigurationView;

@interface SUCellConfiguration : NSObject
{
    id _context;
    unsigned int _isDeleteConfirmationVisible:1;
    CGSize _layoutSize;
    unsigned int _needsDisplay:1;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (double)minimumRowHeight;
+ (id)copyDefaultContext;
@property(nonatomic) CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) UIView<SUCellConfigurationView> *view; // @synthesize view=_view;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (long long)textAlignmentForLabelAtIndex:(NSUInteger)arg1;
@property(nonatomic) BOOL isDeleteConfirmationVisible;
- (id)stringForLabelAtIndex:(NSUInteger)arg1;
@property(nonatomic) BOOL needsDisplay;
@property(retain, nonatomic) id context;
- (void)reloadData;
@property(readonly, nonatomic) NSUInteger numberOfLabels;
@property(readonly, nonatomic) NSUInteger numberOfImages;
- (NSUInteger)indexOfLabelForPurchaseAnimation;
- (id)imageAtIndex:(NSUInteger)arg1 withModifiers:(NSUInteger)arg2;
- (BOOL)getShadowColor:(id )arg1 offset:(CGSize )arg2 forLabelAtIndex:(NSUInteger)arg3 withModifiers:(NSUInteger)arg4;
- (id)fontForLabelAtIndex:(NSUInteger)arg1;
- (CGRect)frameForLabelAtIndex:(NSUInteger)arg1;
- (CGRect)frameForImageAtIndex:(NSUInteger)arg1;
- (CGRect)frameForAccessoryViewWithFrame:(CGRect)arg1;
- (void)drawWithModifiers:(NSUInteger)arg1;
- (void)drawBackgroundWithModifiers:(NSUInteger)arg1;
- (id)colorForLabelAtIndex:(NSUInteger)arg1 withModifiers:(NSUInteger)arg2;
- (void)dealloc;

@end

