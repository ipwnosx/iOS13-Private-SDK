//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol OISFUBufferedInputStream, SFUInputStream;

@protocol SFUZipArchiveDataRepresentation <NSObject>
- (id <OISFUBufferedInputStream>)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id <SFUInputStream>)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
@end

