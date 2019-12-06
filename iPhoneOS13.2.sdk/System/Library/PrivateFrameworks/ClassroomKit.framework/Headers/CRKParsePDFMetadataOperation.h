//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation
{
    BOOL _parseImage;
    CRKBook *_book;
    NSString *_filePath;
}

@property(readonly, nonatomic) BOOL parseImage; // @synthesize parseImage=_parseImage;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) CRKBook *book; // @synthesize book=_book;
// - (void).cxx_destruct;
- (id)fileName;
- (id)titleFromDictionaryRef:(CGPDFDictionary )arg1;
- (void)updateTitleWithDictionaryRef:(CGPDFDictionary )arg1;
- (void)main;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(BOOL)arg3;

@end

