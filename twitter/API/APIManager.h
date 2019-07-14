//
//  APIManager.h
//  twitter
//
//

#import "BDBOAuth1SessionManager.h"
#import "BDBOAuth1SessionManager+SFAuthenticationSession.h"

@interface APIManager : BDBOAuth1SessionManager

+ (instancetype)shared;

- (void)getHomeTimelineWithCompletion:(void(^)(NSArray *tweets, NSError *error))completion;

@end
