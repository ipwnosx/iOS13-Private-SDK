//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface TSDInfoHyperlinkSelection : TSKSelection
{
    NSSet *_infos;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithInfos:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *infos; // @synthesize infos=_infos;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSUInteger infoCount;
- (id)initWithInfos:(id)arg1;

@end

