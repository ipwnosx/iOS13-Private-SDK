//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable>
{
}

+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)operation;
@property(copy, nonatomic) NSString *operationId;
@property(copy, nonatomic) NSString *domainId;
@property(copy, nonatomic) NSDictionary *constraints;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

