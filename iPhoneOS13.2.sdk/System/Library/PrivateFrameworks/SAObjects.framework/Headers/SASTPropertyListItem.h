//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>
{
}

+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)propertyListItem;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(copy, nonatomic) NSArray *decoratedValues;
@property(retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

