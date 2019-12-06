//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSDate, NSURL, TSKStructuredTextImportSettings, TSTCellRegion;

__attribute__((visibility("hidden")))
@interface TSTStructuredTextImportRecord : NSObject <NSCopying>
{
    BOOL _pasteWasUpdate;
    TSKStructuredTextImportSettings *_importSettings;
    NSURL *_importSource;
    NSDate *_importDate;
    NSData *_sourceData;
    double _confidence;
    TSTCellRegion *_importedRegion;
    NSUInteger _sourceColumnCount;
    NSUInteger _sourceRowCount;
    NSArray *_pasteInverseCommands;
    NSUInteger _pasteType;
}

// + (id)recordFromArchive:(const struct StructuredTextImportRecord )arg1;
+ (id)record;
@property(nonatomic) BOOL pasteWasUpdate; // @synthesize pasteWasUpdate=_pasteWasUpdate;
@property(nonatomic) NSUInteger pasteType; // @synthesize pasteType=_pasteType;
@property(retain, nonatomic) NSArray *pasteInverseCommands; // @synthesize pasteInverseCommands=_pasteInverseCommands;
@property(nonatomic) NSUInteger sourceRowCount; // @synthesize sourceRowCount=_sourceRowCount;
@property(nonatomic) NSUInteger sourceColumnCount; // @synthesize sourceColumnCount=_sourceColumnCount;
@property(retain, nonatomic) TSTCellRegion *importedRegion; // @synthesize importedRegion=_importedRegion;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSData *sourceData; // @synthesize sourceData=_sourceData;
@property(retain, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(retain, nonatomic) NSURL *importSource; // @synthesize importSource=_importSource;
@property(retain, nonatomic) TSKStructuredTextImportSettings *importSettings; // @synthesize importSettings=_importSettings;
// - (void).cxx_destruct;
// - (void)encodeToArchive:(struct StructuredTextImportRecord )arg1;
// - (id)initFromArchive:(const struct StructuredTextImportRecord )arg1;
@property(readonly, nonatomic, getter=isReimportable) BOOL reimportable;
@property(readonly, nonatomic, getter=isWholeTableImport) BOOL wholeTableImport;
// - (id)copyWithZone:(_NSZone )arg1;

@end

