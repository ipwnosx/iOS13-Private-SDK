//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDate, NSString;

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>
{
}

+ (id)socialCommentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)socialComment;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *author;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

