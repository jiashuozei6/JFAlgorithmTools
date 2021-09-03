//
//  JFSM3EncryptTool.h
//  ReactNativeWork
//
//  Created by Elvis on 2019/5/27.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFSM3EncryptTool : NSObject

/**
 SM3加密字符串
 
 @param plainString 需要加密的字符串
 @return 加密后的二进制文件
 */
+ (NSString *_Nullable)encryptWithSM3WithString:(NSString * _Nonnull)plainString;

/**
 SM3加密
 
 @param plainData 需要加密的二进制文件
 @return 加密后的二进制文件
 */
+ (NSData *_Nullable)encryptWithSM3WithData:(NSData * _Nonnull)plainData;

/**
 SM3加密路径下的文件
 
 @param path 文件路径
 @param completion 加密回调
 */
+ (void)encryptWithSM3WithPath:(NSString * _Nonnull)path completion:(void (^)(NSError * _Nullable, NSData * _Nullable))completion;

@end

NS_ASSUME_NONNULL_END
