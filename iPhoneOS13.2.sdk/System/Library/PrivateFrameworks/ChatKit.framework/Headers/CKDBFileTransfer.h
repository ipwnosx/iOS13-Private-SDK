//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKFileTransfer-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL;

@interface CKDBFileTransfer : NSObject <CKFileTransfer>
{
    BOOL _isSticker;
    BOOL _hideAttachment;
    NSString *_guid;
    NSURL *_fileURL;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_stickerUserInfo;
    NSString *_filename;
    long long _transferState;
    NSDictionary *_attributionInfo;
}

@property(copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(nonatomic) long long transferState; // @synthesize transferState=_transferState;
@property(readonly, nonatomic) BOOL hideAttachment; // @synthesize hideAttachment=_hideAttachment;
@property(readonly, nonatomic) BOOL isSticker; // @synthesize isSticker=_isSticker;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // @synthesize stickerUserInfo=_stickerUserInfo;
@property(readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
// - (void).cxx_destruct;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property(readonly, nonatomic) NSUInteger totalBytes;
@property(readonly, nonatomic) NSUInteger currentBytes;
@property(readonly, copy, nonatomic) NSError *error;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4;
@property(readonly, copy) NSString *description;

@end

