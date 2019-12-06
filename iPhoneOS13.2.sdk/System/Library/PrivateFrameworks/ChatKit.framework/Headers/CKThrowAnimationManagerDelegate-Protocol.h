//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKMessageEntryView, CKThrowAnimationManager, NSArray;
@protocol CKSendAnimationContext;

@protocol CKThrowAnimationManagerDelegate <NSObject>
- (CGRect)throwAnimationWindowFrame:(CKThrowAnimationManager *)arg1;
- (CGRect)throwAnimationKeyboardFrame:(CKThrowAnimationManager *)arg1;
- (double)throwAnimationManagerTopHeaderHeight:(CKThrowAnimationManager *)arg1;
- (double)throwAnimationManagerAccessoryViewHeight:(CKThrowAnimationManager *)arg1;
- (CKMessageEntryView *)throwAnimationManagerEntryView:(CKThrowAnimationManager *)arg1;
- (void)throwAnimationManagerPrepareForThrowAnimation:(CKThrowAnimationManager *)arg1 context:(id <CKSendAnimationContext>)arg2;
- (void)throwAnimationManager:(CKThrowAnimationManager *)arg1 canNowSendMessages:(NSArray *)arg2;
@end

