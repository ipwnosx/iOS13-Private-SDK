//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontCollection : OADBaseFontCollection
{
    NSMutableDictionary *_scriptToFontMap;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (BOOL)isEqualToFontCollection:(id)arg1;
- (id)scripts;
- (void)setFont:(id)arg1 forScript:(id)arg2;
- (id)fontForScript:(id)arg1;
- (id)init;

@end

