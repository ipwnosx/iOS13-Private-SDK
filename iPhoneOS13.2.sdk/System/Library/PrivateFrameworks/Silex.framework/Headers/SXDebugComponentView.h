//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

@protocol SXLayoutInvalidator;

@interface SXDebugComponentView : SXComponentView
{
    id <SXLayoutInvalidator> _invalidator;
}

@property(readonly, nonatomic) id <SXLayoutInvalidator> invalidator; // @synthesize invalidator=_invalidator;
// - (void).cxx_destruct;
// - (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)loadComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5;

@end

