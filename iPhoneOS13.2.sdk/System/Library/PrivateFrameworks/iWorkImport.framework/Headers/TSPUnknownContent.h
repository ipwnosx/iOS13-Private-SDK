//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPUnknownContent : NSObject
{
    NSArray *_preserveMessages;
    NSArray *_preserveUntilModifiedMessages;
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
}

// - (void).cxx_destruct;
- (void)willModifyObject;
- (void)loadFromUnarchiver:(id)arg1;
- (id)newUnknownContentSnapshot;
- (id)initWithMessages:(id)arg1 messagesAreDiffs:(BOOL)arg2 preserveFields:(id)arg3 preserveUntilModifiedFields:(id)arg4;
- (id)init;

@end

