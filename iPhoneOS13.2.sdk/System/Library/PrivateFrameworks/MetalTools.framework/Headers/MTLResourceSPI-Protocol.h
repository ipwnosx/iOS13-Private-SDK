//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLResource-Protocol.h>

@class MTLResourceAllocationInfo;
@protocol MTLResource;

@protocol MTLResourceSPI <MTLResource>
@property(readonly) NSUInteger unfilteredResourceOptions;
@property(readonly) NSUInteger protectionOptions;
@property(readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property(readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property int responsibleProcess;
- (BOOL)doesAliasAnyResources:(const id )arg1 count:(NSUInteger)arg2;
- (BOOL)doesAliasAllResources:(const id )arg1 count:(NSUInteger)arg2;
- (BOOL)doesAliasResource:(id <MTLResource>)arg1;
- (void)waitUntilComplete;
- (BOOL)isComplete;
- (BOOL)isPurgeable;
@end

