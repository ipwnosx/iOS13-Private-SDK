//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SBIcon;

@protocol SBIconDragPreview
@property(retain, nonatomic) SBIcon *icon;
@property(nonatomic) BOOL iconIsEditing;
@property(nonatomic) double iconContentScale;
@property(nonatomic) BOOL iconAllowsLabelArea;
@property(nonatomic, getter=isFlocked) BOOL flocked;
@property(nonatomic) NSUInteger dragState;
- (void)dropDestinationAnimationCompleted;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(NSUInteger)arg1;
@end

