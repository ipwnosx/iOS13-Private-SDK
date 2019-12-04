//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAuthenticationResponder-Protocol.h>

@class NSString;

@interface SBFUserAuthenticationResponder : NSObject <SBFAuthenticationResponder>
{
    id /* block */ _successHandler;
    id /* block */ _failureHandler;
    id /* block */ _invalidHandler;
}

+ (id)responderWithSuccessHandler:(id /* block */)arg1 failureHandler:(id /* block */)arg2 invalidHandler:(id /* block */)arg3;
@property(copy, nonatomic) id /* block */ invalidHandler; // @synthesize invalidHandler=_invalidHandler;
@property(copy, nonatomic) id /* block */ failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) id /* block */ successHandler; // @synthesize successHandler=_successHandler;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (id)initWithSuccessHandler:(id /* block */)arg1 failureHandler:(id /* block */)arg2 invalidHandler:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
