//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAdDeveloper/HTSHTTPMessage.h>

@class HTSHTTPMessageRequest, NSMutableData, NSString;

@interface HTSHTTPMessageResponse : HTSHTTPMessage
{
    int _statusCode;
    NSString *_statusDescription;
    NSString *_trackingDescription;
    HTSHTTPMessageRequest *_request;
    NSMutableData *_serializedData;
    double _sendTime;
    NSUInteger _written;
}

@property(nonatomic) NSUInteger written; // @synthesize written=_written;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSMutableData *serializedData; // @synthesize serializedData=_serializedData;
@property(retain, nonatomic) HTSHTTPMessageRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *trackingDescription; // @synthesize trackingDescription=_trackingDescription;
@property(copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
//  (struct __CFHTTPMessage )copyMessage;
- (void)dealloc;

@end

