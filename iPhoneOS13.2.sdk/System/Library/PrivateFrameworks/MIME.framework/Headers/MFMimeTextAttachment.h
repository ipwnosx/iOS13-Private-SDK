//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMessageTextAttachment.h>

@interface MFMimeTextAttachment : MFMessageTextAttachment
{
}

- (id)persistentUniqueIdentifier;
- (unsigned int)approximateSize;
- (BOOL)hasBeenDownloaded;
- (void)download;
- (id)_displayedMimePart;
- (id)initWithMimePart:(id)arg1;

@end

