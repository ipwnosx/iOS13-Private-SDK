//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ASVBlendableSplineGroup : NSObject
{
    NSMutableArray *_controlPoints;
//     struct vector<ASVPatchData, std::__1::allocator<ASVPatchData>> _patchData;
//     struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)initWithSplineGroups:(id)arg1;
@property(readonly, nonatomic) unsigned int numIndices;
@property(readonly, nonatomic) unsigned short indices;
@property(readonly, nonatomic) unsigned int patchDataLength;
// @property(readonly, nonatomic) CDStruct_183601bc patchData;
@property(readonly, nonatomic) NSArray *controlPoints;

@end

