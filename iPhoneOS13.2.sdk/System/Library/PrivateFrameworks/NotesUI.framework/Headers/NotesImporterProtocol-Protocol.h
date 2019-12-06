//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString;

@protocol NotesImporterProtocol
- (void)cleanupArchiveId:(NSString *)arg1 completionBlock:(void (^)(void))arg2;
- (void)unarchiveEvernoteResourceFromArchiveId:(NSString *)arg1 resourceArchiveId:(NSString *)arg2 completionBlock:(void (^)(ICEvernoteResource *))arg3;
- (void)unarchiveEvernoteNoteFromArchiveId:(NSString *)arg1 noteArchiveId:(NSString *)arg2 completionBlock:(void (^)(ICEvernoteNote *))arg3;
- (void)archiveEvernoteNotesFromBookmarkData:(NSData *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)parseTitleFromHTMLString:(NSString *)arg1 completionBlock:(void (^)(NSString *))arg2;
- (void)countEvernoteNotesFromBookmarkData:(NSData *)arg1 completionBlock:(void (^)(NSUInteger))arg2;
- (void)parseHTMLStringFromEvernoteContentString:(NSString *)arg1 completionBlock:(void (^)(NSString *))arg2;
@end

