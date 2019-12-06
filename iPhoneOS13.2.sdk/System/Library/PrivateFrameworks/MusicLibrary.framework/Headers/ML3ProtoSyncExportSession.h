//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3ExportSession.h>

@class MSVStreamWriter, NSString;

@interface ML3ProtoSyncExportSession : ML3ExportSession
{
    NSString *_libraryUUID;
    int _syncType;
    MSVStreamWriter *_streamWriter;
   struct {
        int trackAdds;
        int trackUpdates;
        int trackDeletes;
        int playlistAdds;
        int playlistDeletes;
        unsigned int totalSize;
    } _stats;
    double _sessionStartTime;
}

// - (void).cxx_destruct;
- (id)_writSyncPackageToStream:(id)arg1;
- (id)exportPlaylistDeleted:(NSUInteger)arg1;
- (id)exportPlaylistAdded:(NSUInteger)arg1;
- (id)exportTrackDeleted:(NSUInteger)arg1;
- (id)exportTrackUpdated:(NSUInteger)arg1;
- (id)exportTrackAdded:(NSUInteger)arg1;
- (id)end;
- (id)begin:(unsigned int)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2 syncType:(int)arg3;

@end

