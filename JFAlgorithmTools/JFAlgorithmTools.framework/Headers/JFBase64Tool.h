//
//  JFBase64Tools.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFBase64Tool : NSObject

@end
/// Base64
@interface JFBase64Encoder : JFBase64Tool

/**
 Base64编码

 @param encodeData 二进制数据
 @return 编码后字符串数据
 */
+ (NSString *)stringByBase64EncodedData:(NSData *)encodeData API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

/**
 Base64编码

 @param encodeData 二进制数据
 @return 编码后二进制数据
 */
+ (NSData *)dataByBase64EncodedData:(NSData *)encodeData API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

/**
 Base64编码

 @param decodeString 字符串数据
 @return 编码后字符串数据
 */
+ (NSString *)stringByBase64EncodedString:(NSString *)decodeString API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

/**
 Base64编码

 @param decodeString 字符串数据
 @return 编码后二进制数据
 */
+ (NSData *)dataByBase64EncodedString:(NSString *)decodeString API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

@end

@interface JFBase64Decoder : JFBase64Tool

/**
 Base64解码
 
 @param decodeData 二进制数据
 @return 解码后字符串数据
 */
+ (NSString *)stringByBase64DecodedData:(NSData *)decodeData API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

/**
 Base64解码
 
 @param decodeString 字符串数据
 @return 解码后二进制数据
 */
+ (NSData *)dataByBase64DecodedString:(NSString *)decodeString API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

/**
 Base64解码
 
 @param decodeString 字符串数据
 @return 解码后字符串数据
 */
+ (NSString *)stringByBase64DecodedString:(NSString *)decodeString API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));

/**
 Base64解码
 
 @param decodeData 二进制数据
 @return 解码后二进制数据
 */
+ (NSData *)dataByBase64DecodedData:(NSData *)decodeData API_AVAILABLE(macos(10.9), ios(7.0), watchos(2.0), tvos(9.0));
@end

NS_ASSUME_NONNULL_END
