//
//  JFSM4EncryptTool.h
//  ReactNativeWork
//
//  Created by Elvis on 2019/5/27.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFSM4EncryptTool : NSObject

/**
 SM4-CBC加密

 @param string 要存的对象的key值-16位
 @param key 密钥
 @param iv 初始化向量-16位
 @return 加密结果
 */
+ (NSString *)encryptWithSM4CBC:(NSString *)string secretKey:(NSString *)key iv:(NSString *)iv;

/**
 SM4-CBC解密

 @param string 对象的key值-16位
 @param key 密钥
 @param iv 初始化向量-16位
 @return 解密结果
 */
+ (NSString *)decryptWithSM4CBC:(NSString *)string secretKey:(NSString *)key iv:(NSString *)iv;

/**
 SM4-ECB加密

 @param string 要存的对象的key值-16位
 @param key 密钥
 @return 加密结果
 */
+ (NSString *)encryptWithSM4ECB:(NSString *)string secretKey:(NSString *)key;

/**
 SM4-ECB解密

 @param string 对象的key值-16位
 @param key 密钥
 @return 解密结果
 */
+ (NSString *)decryptWithSM4ECB:(NSString *)string secretKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
