//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
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
- (id /* CDUnknownBlockType */)handler;
- (void)setHandler:(id /* CDUnknownBlockType */)arg1;

@end
