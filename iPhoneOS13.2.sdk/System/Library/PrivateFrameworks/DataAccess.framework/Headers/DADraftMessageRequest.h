//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest
{
    BOOL _send;
    DAMailMessage *_message;
}

@property(nonatomic) BOOL send; // @synthesize send=_send;
@property(retain, nonatomic) DAMailMessage *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRequestType:(int)arg1 message:(id)arg2 send:(BOOL)arg3;

@end

