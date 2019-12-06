//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSDate;

@interface WFDateContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic) NSDate *date;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (id)richListTitle;

@end

