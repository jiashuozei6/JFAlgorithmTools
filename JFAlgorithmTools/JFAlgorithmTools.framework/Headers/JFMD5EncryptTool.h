//
//  JFMD5EncryptTool.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFMD5EncryptTool : NSObject

/**
 使用MD5编码

 @param content 待编码字符串内容
 @return 编码结果
 */
+ (NSString *)encodeStringWithMD5:(NSString *)content;

/**
 进行文件MD5校验

 @param path 文件路径
 @return 编码结果
 */
+ (NSString*)getFileMD5WithPath:(NSString*)path;
@end

NS_ASSUME_NONNULL_END
