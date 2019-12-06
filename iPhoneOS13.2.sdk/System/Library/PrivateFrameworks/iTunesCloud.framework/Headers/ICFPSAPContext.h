//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICFPSAPContext : NSObject
{
}

- (BOOL)signData:(id)arg1 returningSignatureData:(id )arg2 error:(id )arg3;
- (BOOL)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id )arg3;
- (BOOL)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id )arg3 exchangeStatus:(char )arg4 error:(id )arg5;
- (void)dealloc;
- (id)initReturningError:(id )arg1;

@end

