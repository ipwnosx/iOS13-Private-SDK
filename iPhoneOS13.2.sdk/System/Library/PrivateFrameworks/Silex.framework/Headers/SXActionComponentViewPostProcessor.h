//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewPostProcessor-Protocol.h>

@protocol SXActionComponentInteractionHandlerFactory, SXActionProvider, SXComponentInteractionHandlerManager;

@interface SXActionComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>
{
    id <SXActionProvider> _actionProvider;
    id <SXActionComponentInteractionHandlerFactory> _factory;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
}

@property(readonly, nonatomic) id <SXComponentInteractionHandlerManager> interactionHandlerManager; // @synthesize interactionHandlerManager=_interactionHandlerManager;
@property(readonly, nonatomic) id <SXActionComponentInteractionHandlerFactory> factory; // @synthesize factory=_factory;
@property(readonly, nonatomic) id <SXActionProvider> actionProvider; // @synthesize actionProvider=_actionProvider;
// - (void).cxx_destruct;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)initWithActionProvider:(id)arg1 interactionHandlerFactory:(id)arg2 interactionHandlerManager:(id)arg3;

@end

