//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface MFMessageFileWrapper : NSObject
{
    NSString *_path;
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)fileAttributes;
- (void)setFileAttributes:(id)arg1;
- (id)regularFileContents;
- (id)symbolicLinkDestination;
- (id)fileWrappers;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)preferredFilename;
- (void)setPreferredFilename:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (BOOL)isPlaceholder;
- (id)initWithPath:(id)arg1;
- (BOOL)isUnzippableFile;
- (BOOL)isPDFFile;
- (BOOL)isImageFile;
- (void)_isImage:(BOOL )arg1 orPDFFile:(BOOL )arg2;
- (NSUInteger)fileSize;
- (id)fileProtection;
- (void)setFileProtection:(id)arg1;
- (id)icsRepresentation;
- (void)setICSRepresentation:(id)arg1;
- (id)meetingStorePersistentID;
- (void)setMeetingStorePersistentID:(id)arg1;
- (id)eventUniqueID;
- (void)setEventUniqueID:(id)arg1;
- (id)messageID;
- (void)setMessageID:(id)arg1;
- (id)contentID;
- (void)setContentID:(id)arg1;
- (id)inferredMimeType;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (unsigned short)finderFlags;
- (void)setFinderFlags:(unsigned short)arg1;
- (unsigned int)creator;
- (void)setCreator:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;

@end

