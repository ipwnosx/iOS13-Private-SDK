//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/BSXPCCoding-Protocol.h>

@class NSString;

@interface STKClass0SMSSessionData : NSObject <BSXPCCoding>
{
    BOOL _showsFromAddress;
    NSString *_body;
    NSString *_address;
}

@property(readonly, nonatomic) BOOL showsFromAddress; // @synthesize showsFromAddress=_showsFromAddress;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
// - (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithBody:(id)arg1 address:(id)arg2 showsFromAddress:(BOOL)arg3;

@end

