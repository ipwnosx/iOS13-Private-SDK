//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSSet;

@interface CHStrokeClassificationResult : NSObject <NSCopying>
{
    NSSet *_textStrokeIdentifiers;
    NSDictionary *_strokeClassificationsByStrokeIdentifier;
    NSDictionary *_substrokesByStrokeIdentifier;
    NSSet *_nontextCandidates;
}

@property(readonly, copy, nonatomic) NSSet *nontextCandidates; // @synthesize nontextCandidates=_nontextCandidates;
@property(readonly, copy, nonatomic) NSDictionary *substrokesByStrokeIdentifier; // @synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *strokeClassificationsByStrokeIdentifier; // @synthesize strokeClassificationsByStrokeIdentifier=_strokeClassificationsByStrokeIdentifier;
- (BOOL)isEquivalentToStrokeClassificationResult:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *textStrokeIdentifiers;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;
- (id)init;
- (id)mutableCopyWithZone:(_NSZone )arg1;

@end

