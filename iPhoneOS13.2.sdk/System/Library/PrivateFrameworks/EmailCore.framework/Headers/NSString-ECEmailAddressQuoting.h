//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <EmailCore/ECEmailAddressConvertible-Protocol.h>

@class ECEmailAddress;

@interface NSString (ECEmailAddressQuoting) <ECEmailAddressConvertible>
@property(readonly, copy, nonatomic) NSString *ecemailaddress_uniquedDomain;
- (id)ecemailaddress_quotedString;
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedDisplayName;
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedLocalPart;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property(readonly, copy) NSString *ec_messageIDSubstring;
@end

