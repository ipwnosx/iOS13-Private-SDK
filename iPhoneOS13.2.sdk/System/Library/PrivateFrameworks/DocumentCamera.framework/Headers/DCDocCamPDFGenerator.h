//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCDocCamPDFGenerator : NSObject
{
}

+ (void)performPDFGenerationWithGenerator:(id)arg1 docInfoCollection:(id)arg2 imageCache:(id)arg3 progress:(id)arg4;
+ (id)blockingGeneratepdfURLForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 withProgress:(id)arg3 error:(id )arg4;
+ (void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 displayWindow:(UIWindow )arg3 presentingViewController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)pdfURLForDocumentInfoCollection:(id)arg1;
+ (void)deleteAllDocCamPDFs;
+ (void)applicationWillTerminate:(id)arg1;
+ (void)deletePDFForDocumentInfoCollectionIfExists:(id)arg1;
+ (void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)arg1;
+ (void)createTmpDirectory:(id)arg1;
+ (void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)arg1;
+ (id)versionPDFPathForDocumentInfoCollection:(id)arg1;
+ (id)versionfolderPathForDocumentInfoCollection:(id)arg1;
+ (id)folderPathForDocumentInfoCollection:(id)arg1;
+ (id)folderPathForDocumentInfoCollectionIdentifier:(id)arg1;
+ (id)rootPDFFolderPath;
+ (id)fileManager;
+ (id)fileQueue;
+ (id)syncGeneratorQueue;
+ (void)initialize;

@end

