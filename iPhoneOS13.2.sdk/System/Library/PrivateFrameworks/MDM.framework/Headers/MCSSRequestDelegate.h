//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MDM/SSRequestDelegate-Protocol.h>

@class NSTimer, SSRequest;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate>
{
    SSRequest *_request;
    id /* CDUnknownBlockType */ _completionBlock;
    NSTimer *_timeoutTimer;
}

@property(readonly, retain, nonatomic) SSRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (void)_timerDidFire:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (void)_startTimeout:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

