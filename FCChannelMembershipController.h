//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCChannelMembershipRecordSource, FCCloudKitConnection;

@interface FCChannelMembershipController : NSObject
{
    FCCloudKitConnection *_connection;
    FCChannelMembershipRecordSource *_recordSource;
}

@property(readonly, nonatomic) FCChannelMembershipRecordSource *recordSource; // @synthesize recordSource=_recordSource;
@property(readonly, nonatomic) FCCloudKitConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)cachedChannelMembershipsForIDs:(id)arg1;
- (id)channelMembershipsFromHeldRecords:(id)arg1;
- (void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithConnection:(id)arg1 channelMembershipRecordSource:(id)arg2;

@end

