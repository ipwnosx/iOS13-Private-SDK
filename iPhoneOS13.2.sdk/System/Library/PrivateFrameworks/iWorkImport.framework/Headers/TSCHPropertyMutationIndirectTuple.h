//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHPropertyMutationTuple.h>

__attribute__((visibility("hidden")))
@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple
{
    int mStyleOwnerType;
    NSUInteger mStyleOwnerIndex;
}

@property(readonly, nonatomic) NSUInteger index; // @synthesize index=mStyleOwnerIndex;
@property(readonly, nonatomic) int type; // @synthesize type=mStyleOwnerType;
- (id)styleOwnerRef;
- (id)indirectTuple;
- (id)styleOwner;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)initWithStyleOwnerType:(int)arg1 index:(NSUInteger)arg2 inChart:(id)arg3 mutations:(id)arg4;

@end

