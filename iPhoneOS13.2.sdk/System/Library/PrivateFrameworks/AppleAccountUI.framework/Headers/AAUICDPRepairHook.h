//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@protocol AAUIServerHookDelegate;

@interface AAUICDPRepairHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_performCDPRepairWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)shouldMatchModel:(id)arg1;
- (BOOL)shouldMatchElement:(id)arg1;

@end

