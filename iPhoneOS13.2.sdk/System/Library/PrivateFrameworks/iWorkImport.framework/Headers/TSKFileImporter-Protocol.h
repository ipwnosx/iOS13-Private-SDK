//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKImporter-Protocol.h>

@class NSString;
@protocol TSDImportExportDelegate;

@protocol TSKFileImporter <TSKImporter>
- (BOOL)importToPath:(NSString *)arg1 delegate:(id <TSDImportExportDelegate>)arg2 error:(id )arg3;
- (BOOL)canCreateFile;
@end

