//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNotificationDropboxData-Protocol.h>

@class NSDictionary, NSString;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData>
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy, nonatomic) NSString *storefrontID;
@property(readonly, copy, nonatomic) NSString *deviceToken;
@property(readonly, copy, nonatomic) NSString *notificationUserID;
@property(readonly, copy, nonatomic) NSString *baseURLString;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

