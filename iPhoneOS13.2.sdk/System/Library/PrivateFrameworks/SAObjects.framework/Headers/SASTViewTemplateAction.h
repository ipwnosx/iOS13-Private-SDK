//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateAction-Protocol.h>

@class NSArray, NSString, SASTItemGroup;

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>
{
}

+ (id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)viewTemplateAction;
@property(copy, nonatomic) NSString *viewTitle;
@property(retain, nonatomic) SASTItemGroup *itemGroupView;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

