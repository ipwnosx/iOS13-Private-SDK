//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmbeddedAcousticRecognition/_EARSystemResult.h>

@class NSArray;

@interface _EARCombinedResult : _EARSystemResult
{
    NSArray *_nBestStrings;
    NSArray *_nBestSourceIndexes;
    NSArray *_originalRanks;
}

@property(copy, nonatomic) NSArray *originalRanks; // @synthesize originalRanks=_originalRanks;
@property(copy, nonatomic) NSArray *nBestSourceIndexes; // @synthesize nBestSourceIndexes=_nBestSourceIndexes;
@property(copy, nonatomic) NSArray *nBestStrings; // @synthesize nBestStrings=_nBestStrings;
// - (void).cxx_destruct;

@end

