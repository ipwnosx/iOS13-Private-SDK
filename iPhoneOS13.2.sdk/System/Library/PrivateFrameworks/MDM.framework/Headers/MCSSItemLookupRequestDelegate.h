//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSItemLookupRequestDelegate-Protocol.h>

@class NSArray;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate>
{
    NSArray *_items;
}

+ (id)instance;
// - (void).cxx_destruct;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end

