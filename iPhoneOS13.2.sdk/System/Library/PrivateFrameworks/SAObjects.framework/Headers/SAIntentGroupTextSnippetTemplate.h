//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSArray, NSString;

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

+ (id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)textSnippetTemplate;
@property(nonatomic) BOOL showsDisclosureIndicator;
@property(copy, nonatomic) NSArray *labelComponents;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

