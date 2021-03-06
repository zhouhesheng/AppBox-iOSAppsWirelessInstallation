///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMTeamFolderIdArg.h"

@class DBTEAMTeamFolderArchiveArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderArchiveArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderArchiveArg : DBTEAMTeamFolderIdArg <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether to force the archive to happen synchronously.
@property (nonatomic, readonly) NSNumber *forceAsyncOff;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamFolderId The ID of the team folder.
/// @param forceAsyncOff Whether to force the archive to happen synchronously.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolderId:(NSString *)teamFolderId forceAsyncOff:(nullable NSNumber *)forceAsyncOff;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param teamFolderId The ID of the team folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolderId:(NSString *)teamFolderId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderArchiveArg` struct.
///
@interface DBTEAMTeamFolderArchiveArgSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderArchiveArg` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderArchiveArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderArchiveArg` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMTeamFolderArchiveArg *)instance;

///
/// Deserializes `DBTEAMTeamFolderArchiveArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderArchiveArg` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderArchiveArg` object.
///
+ (DBTEAMTeamFolderArchiveArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
