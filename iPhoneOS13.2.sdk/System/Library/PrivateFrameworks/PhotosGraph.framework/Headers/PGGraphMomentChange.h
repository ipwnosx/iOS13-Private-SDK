//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange
{
    NSString *_momentLocalIdentifier;
    PGGraphMomentNode *_momentNode;
    NSUInteger _updateTypes;
}

@property(readonly, nonatomic) NSUInteger updateTypes; // @synthesize updateTypes=_updateTypes;
@property(retain, nonatomic) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
@property(readonly, nonatomic) NSString *momentLocalIdentifier; // @synthesize momentLocalIdentifier=_momentLocalIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)type;
- (void)mergeChange:(id)arg1;
- (id)initWithMomentLocalIdentifier:(id)arg1 updateTypes:(NSUInteger)arg2;

@end

