//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface RBEventQueueEvent : NSObject <BSDescriptionProviding>
{
    id _context;
    double _eventTime;
    id /* CDUnknownBlockType */ _action;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ action; // @synthesize action=_action;
@property(nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) id context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;

@end

