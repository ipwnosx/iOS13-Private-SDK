//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder>
{
    NSDate *_signingTime;
}

@property(readonly, retain) NSDate *signingTime; // @synthesize signingTime=_signingTime;
// - (void).cxx_destruct;
- (id)encodeAttributeWithError:(id )arg1;
- (id)initWithSigningTime:(id)arg1;
- (id)initWithAttribute:(id)arg1 error:(id )arg2;

@end

