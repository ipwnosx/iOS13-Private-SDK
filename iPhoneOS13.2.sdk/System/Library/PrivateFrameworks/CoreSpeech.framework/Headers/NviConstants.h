//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NviConstants : NSObject
{
}

+ (id)nviLogsRootDir;
// + (struct AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
// + (struct AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
// + (struct AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
// + (struct AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
// + (struct AudioStreamBasicDescription)monoChannelLpcmASBD;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)numChannelsForNviDirectionality;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRate;

@end

