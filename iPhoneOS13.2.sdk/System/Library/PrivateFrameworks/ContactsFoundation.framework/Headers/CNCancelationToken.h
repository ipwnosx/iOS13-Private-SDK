//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCancelable-Protocol.h>
#import <ContactsFoundation/CNCancelationToken-Protocol.h>

@class NSMutableArray;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken>
{
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
// - (void).cxx_destruct;
- (void)callCancelationBlocks:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCanceled;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (id)nts_cancel;
- (void)cancel;
- (id)init;

@end

