//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNSlideExporter.h>

#import <iWorkImport/TSKImageExporter-Protocol.h>

__attribute__((visibility("hidden")))
@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>
{
}

- (void)setup;
@property(nonatomic) BOOL scaleToFit;
@property(nonatomic) NSUInteger height;
@property(nonatomic) NSUInteger width;
- (id)p_renderingExporterDelegate;

@end

