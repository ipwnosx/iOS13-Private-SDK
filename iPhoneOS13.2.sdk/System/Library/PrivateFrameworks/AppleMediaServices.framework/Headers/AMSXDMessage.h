//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AMSXDDevice, NSDate, NSDictionary, NSString;
@protocol NSObject><NSSecureCoding;

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isReply;
    NSString *_objectClassName;
    NSString *_messageID;
    NSDate *_receiptDate;
    AMSXDDevice *_destination;
    double _expirationInterval;
    NSString *_identifier;
    NSString *_logKey;
    id <NSObject><NSSecureCoding> _object;
    AMSXDDevice *_origin;
    long long _purpose;
}

+ (BOOL)supportsSecureCoding;
+ (id)messageFromProtoMessage:(id)arg1;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) AMSXDDevice *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) id <NSObject><NSSecureCoding> object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double expirationInterval; // @synthesize expirationInterval=_expirationInterval;
@property(retain, nonatomic) AMSXDDevice *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDate *receiptDate; // @synthesize receiptDate=_receiptDate;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) BOOL isReply; // @synthesize isReply=_isReply;
@property(retain, nonatomic) NSString *objectClassName; // @synthesize objectClassName=_objectClassName;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
- (id)description;
- (id)createProtoMessage;
@property(readonly, nonatomic) NSDictionary *JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4;

@end

