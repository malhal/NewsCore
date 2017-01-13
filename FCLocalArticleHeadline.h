//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

@class NSDictionary, NSString;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline
{
    NSDictionary *_dictionary;
    NSString *_path;
    id <FCChannelProviding> _channel;
}

@property(readonly, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (_Bool)isPremium;
- (id)localDraftPath;
- (_Bool)isFeatured;
- (id)surfacedByBinID;
- (_Bool)isDraft;
- (_Bool)isDeleted;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (id)displayTopicID;
- (_Bool)isSponsored;
- (_Bool)isFeatureCandidate;
- (id)headlineTemplate;
- (double)videoDuration;
- (id)videoURL;
- (id)endOfArticleTopicIDs;
- (id)topicIDs;
- (id)lastModifiedDate;
- (id)contentURL;
- (id)accessoryText;
- (id)shortExcerpt;
- (struct CGSize)thumbnailSize;
- (id)thumbnailAssetHandle;
- (id)sourceName;
- (id)sourceChannel;
- (id)publishDate;
- (id)subtitle;
- (id)title;
- (id)primaryAudience;
- (unsigned long long)contentType;
- (id)articleID;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3;
- (id)contentManifestWithContext:(id)arg1;

@end

