//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAction.h>


@class NSURL, PDFActionURLPrivateVars;

@interface PDFActionURL : PDFAction <NSCopying>
{
    PDFActionURLPrivateVars *_private2;
}

// - (void).cxx_destruct;
- (id)toolTip;
// - (const struct __CFDictionary )createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(CGPDFDictionary )arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(copy, nonatomic) NSURL *URL;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithURL:(id)arg1;

@end

