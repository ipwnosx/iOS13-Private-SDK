//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WRReplyStoreInfo : NSObject
{
    BOOL _supportsSmartReplies;
    NSUInteger _defaultCount;
    NSString *_defaultsDomain;
    NSString *_defaultsKey;
    NSString *_defaultsChangedNotificationName;
}

+ (id)infoForCategory:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL supportsSmartReplies; // @synthesize supportsSmartReplies=_supportsSmartReplies;
@property(readonly, nonatomic) NSString *defaultsChangedNotificationName; // @synthesize defaultsChangedNotificationName=_defaultsChangedNotificationName;
@property(readonly, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
@property(readonly, nonatomic) NSString *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property(readonly, nonatomic) NSUInteger defaultCount; // @synthesize defaultCount=_defaultCount;
// - (void).cxx_destruct;

@end

