//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TUIAssistantButtonBarView, UIView;

@interface TUISystemInputAssistantLayoutViewSet : NSObject
{
    TUIAssistantButtonBarView *_leftButtonBar;
    TUIAssistantButtonBarView *_rightButtonBar;
    TUIAssistantButtonBarView *_unifiedButtonBar;
    UIView *_centerView;
}

@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar; // @synthesize unifiedButtonBar=_unifiedButtonBar;
@property(retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar; // @synthesize rightButtonBar=_rightButtonBar;
@property(retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar; // @synthesize leftButtonBar=_leftButtonBar;
// - (void).cxx_destruct;

@end

