//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFamilyProvider-Protocol.h>

@class NSArray, NSString;

@interface SXSystemFontFamilyProvider : NSObject <SXFontFamilyProvider>
{
    NSArray *_fonts;
}

@property(readonly, nonatomic) NSArray *fonts; // @synthesize fonts=_fonts;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)fontsForMetadata:(id)arg1;
- (id)fontFamilies;
- (id)initWithFontMetaData:(id)arg1;
- (id)init;

@end

