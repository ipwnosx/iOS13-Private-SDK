//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ESUserNotificationInfo : NSObject
{
    id /* CDUnknownBlockType */ _handler;
    NSString *_groupIdentifier;
}

@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
// - (void).cxx_destruct;
- (CDUnknownBlockType)handler;
- (void)setHandler:(CDUnknownBlockType)arg1;

@end

