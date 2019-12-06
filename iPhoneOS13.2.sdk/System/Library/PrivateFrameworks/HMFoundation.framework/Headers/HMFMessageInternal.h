//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMFActivity, HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMessageInternal : HMFObject <NSCopying>
{
    NSUUID *_identifier;
    NSString *_name;
    double _timeout;
    long long _qualityOfService;
    HMFMessageDestination *_destination;
    HMFMessageTransport *_transport;
    HMFActivity *_activity;
    NSDictionary *_userInfo;
    NSDictionary *_headers;
    NSDictionary *_messagePayload;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) __weak HMFMessageTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

