//
//  JFSM2EncryptTool.h
//  sm2
//
//  Created by Elvis on 2020/12/4.
//  Copyright © 2020 yfc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFSM2EncryptTool : NSObject

/// SM2加密
/// @param encryptString 待加密字符串
/// @param publicSecret 加密公钥
/// @return 加密结果
+ (NSString *)encryptUseSM2:(NSString *)encryptString publicSecret:(NSString *)publicSecret;

/// SM2解密
/// @param decryptString 待解密字符串
/// @param privateSecret 解密私钥
/// @return 解密结果
+ (NSString *)decryptWithSM2:(NSString *)decryptString privateSecret:(NSString *)privateSecret;

@end

NS_ASSUME_NONNULL_END
