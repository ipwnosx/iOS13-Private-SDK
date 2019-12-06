//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageProtection/SignatureFormatter-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter>
{
    double _timestamp;
    NSData *_prekeyPublic;
}

@property(readonly, nonatomic) NSData *prekeyPublic; // @synthesize prekeyPublic=_prekeyPublic;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)signedData;
- (id)initWithPublicPrekey:(id)arg1;
- (id)initToSignKey:(id)arg1;

@end

