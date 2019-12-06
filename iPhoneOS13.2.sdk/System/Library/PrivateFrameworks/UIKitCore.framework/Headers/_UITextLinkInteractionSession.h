//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextItemInteractionInteraction, UIView;
@protocol UITextLinkInteraction;

__attribute__((visibility("hidden")))
@interface _UITextLinkInteractionSession : NSObject
{
    UITextItemInteractionInteraction *_interaction;
    UIView<UITextLinkInteraction> *_linkInteractionView;
}

// - (void).cxx_destruct;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (BOOL)_allowItemInteractions;
- (BOOL)canInteractWithLinkAtPoint:(CGPoint)arg1;
- (void)dealloc;
- (id)initWithTextItemInteraction:(id)arg1;

@end

