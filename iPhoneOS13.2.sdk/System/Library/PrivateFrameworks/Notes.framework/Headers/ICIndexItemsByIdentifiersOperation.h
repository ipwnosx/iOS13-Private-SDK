//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation
{
    NSArray *_objectIDURIsToIndex;
}

@property(copy, nonatomic) NSArray *objectIDURIsToIndex; // @synthesize objectIDURIsToIndex=_objectIDURIsToIndex;
// - (void).cxx_destruct;
- (void)main;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 objectIDURIsToIndex:(id)arg3;

@end

