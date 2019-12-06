//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface NNMKComposedMessage : NSObject <NSSecureCoding>
{
    BOOL _includeAttachments;
    NSString *_composedMessageId;
    NSUInteger _sendingType;
    NSArray *_to;
    NSArray *_cc;
    NSString *_subject;
    NSString *_body;
    NSString *_referenceMessageId;
    NSString *_standaloneReferenceMessageId;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property(retain, nonatomic) NSString *standaloneReferenceMessageId; // @synthesize standaloneReferenceMessageId=_standaloneReferenceMessageId;
@property(retain, nonatomic) NSString *referenceMessageId; // @synthesize referenceMessageId=_referenceMessageId;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(retain, nonatomic) NSArray *to; // @synthesize to=_to;
@property(nonatomic) NSUInteger sendingType; // @synthesize sendingType=_sendingType;
@property(retain, nonatomic) NSString *composedMessageId; // @synthesize composedMessageId=_composedMessageId;
// - (void).cxx_destruct;
- (id)description;
- (id)copyWithNewId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

