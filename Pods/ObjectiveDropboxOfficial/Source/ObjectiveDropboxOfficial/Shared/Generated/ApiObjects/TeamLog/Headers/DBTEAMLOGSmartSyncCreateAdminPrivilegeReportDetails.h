///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SmartSyncCreateAdminPrivilegeReportDetails` struct.
///
/// Created Smart Sync non-admin devices report.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SmartSyncCreateAdminPrivilegeReportDetails`
/// struct.
///
@interface DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails *)instance;

///
/// Deserializes `DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails` object.
///
+ (DBTEAMLOGSmartSyncCreateAdminPrivilegeReportDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
