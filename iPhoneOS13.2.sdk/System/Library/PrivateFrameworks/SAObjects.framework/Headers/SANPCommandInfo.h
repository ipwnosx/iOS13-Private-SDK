//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray;

@interface SANPCommandInfo : AceObject <SAAceSerializable>
{
}

+ (id)commandInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandInfo;
@property(copy, nonatomic) NSArray *registeredCommands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

