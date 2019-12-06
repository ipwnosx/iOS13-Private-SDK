//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTextSourceFactory-Protocol.h>

@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXTextSourceFactory : NSObject <SXTextSourceFactory>
{
    id <SXSmartFieldFactory> _smartFieldFactory;
    id <SXDocumentLanguageProviding> _documentLanguageProvider;
    id <SXFontAttributesConstructor> _fontAttributesConstructor;
}

@property(readonly, nonatomic) id <SXFontAttributesConstructor> fontAttributesConstructor; // @synthesize fontAttributesConstructor=_fontAttributesConstructor;
@property(readonly, nonatomic) id <SXDocumentLanguageProviding> documentLanguageProvider; // @synthesize documentLanguageProvider=_documentLanguageProvider;
@property(readonly, nonatomic) id <SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
// - (void).cxx_destruct;
- (id)createTextSourceWithString:(id)arg1 dataSource:(id)arg2;
- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;

@end

