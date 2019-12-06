//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSArray, NSString, NSURL, STPerson;

@interface STEmailMessage : STSiriModelObject
{
    NSString *_messageBody;
    NSURL *_messageIdentifier;
    STPerson *_sender;
    NSString *_subject;
    long long _type;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSArray *_receivingAddresses;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *receivingAddresses; // @synthesize receivingAddresses=_receivingAddresses;
@property(retain, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(retain, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(retain, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) STPerson *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSURL *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_personAttributesForRecipients:(id)arg1;
- (id)_aceContextObjectValue;

@end

