//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery
{
    MFSMTPConnection *_connection;
}

- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)_openConnection;
- (Class)deliveryClass;
- (void)dealloc;

@end

