//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions
{
    BOOL _optimizeForSharing;
    NUImageExportFormat *_imageExportFormat;
    id /* CDUnknownBlockType */ _metadataProcessor;
}

@property BOOL optimizeForSharing; // @synthesize optimizeForSharing=_optimizeForSharing;
@property(copy) id /* CDUnknownBlockType */ metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;
@property(copy) NUImageExportFormat *imageExportFormat; // @synthesize imageExportFormat=_imageExportFormat;
// - (void).cxx_destruct;
- (id)imageExportFormatForURL:(id)arg1;
- (void)setImageExportFormatJpegWithQuality:(double)arg1;

@end

