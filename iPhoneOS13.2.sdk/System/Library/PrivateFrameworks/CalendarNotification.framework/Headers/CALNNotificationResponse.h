//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint, CALNNotification, NSString;

@interface CALNNotificationResponse : NSObject
{
    CALNNotification *_notification;
    NSString *_actionIdentifier;
    NSString *_originIdentifier;
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;
}

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // @synthesize targetConnectionEndpoint=_targetConnectionEndpoint;
@property(readonly, copy, nonatomic) NSString *originIdentifier; // @synthesize originIdentifier=_originIdentifier;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic) CALNNotification *notification; // @synthesize notification=_notification;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToResponse:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

@end

