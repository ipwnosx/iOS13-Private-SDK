//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray;

@interface SASTTableHeaderItem : AceObject <SASTTemplateItem>
{
}

+ (id)tableHeaderItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tableHeaderItem;
@property(copy, nonatomic) NSArray *columnValues;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

