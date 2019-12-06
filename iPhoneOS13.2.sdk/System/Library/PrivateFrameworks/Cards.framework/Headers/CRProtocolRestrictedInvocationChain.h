//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/CRInvocationChain.h>

#import <Cards/CRInvocationChainDelegate-Protocol.h>

@class Protocol;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate>
{
    Protocol *_restrictingProtocol;
}

@property(retain, nonatomic) Protocol *restrictingProtocol; // @synthesize restrictingProtocol=_restrictingProtocol;
// - (void).cxx_destruct;
- (BOOL)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2;
- (BOOL)_selectorIsPartOfRestrictingProtocol:(SEL)arg1;
- (BOOL)isEligibleForSelector:(SEL)arg1;
- (BOOL)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)init;

@end

