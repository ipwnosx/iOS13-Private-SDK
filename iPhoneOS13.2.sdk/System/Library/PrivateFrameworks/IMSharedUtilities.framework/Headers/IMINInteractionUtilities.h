//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject
{
    CSSearchableIndex *_searchableIndex;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;
- (void)deleteInteractionsWithMessageGUIDs:(id)arg1;
- (void)deleteInteractionsWithChatGUIDs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

