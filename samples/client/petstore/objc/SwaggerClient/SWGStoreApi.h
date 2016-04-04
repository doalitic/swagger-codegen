#import <Foundation/Foundation.h>
#import "SWGOrder.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGStoreApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGStoreApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGStoreApi*) sharedAPI;
///
///
/// Delete purchase order by ID
/// For valid response try integer IDs with value < 1000. Anything above 1000 or nonintegers will generate API errors
///
/// @param orderId ID of the order that needs to be deleted
/// 
///
/// @return 
-(NSNumber*) deleteOrderWithOrderId: (NSString*) orderId
    completionHandler: (void (^)(NSError* error)) handler;


///
///
/// Finds orders by status
/// A single status value can be provided as a string
///
/// @param status Status value that needs to be considered for query
/// 
///
/// @return NSArray<SWGOrder>*
-(NSNumber*) findOrdersByStatusWithStatus: (NSString*) status
    completionHandler: (void (^)(NSArray<SWGOrder>* output, NSError* error)) handler;


///
///
/// Returns pet inventories by status
/// Returns a map of status codes to quantities
///
/// 
///
/// @return NSDictionary* /* NSString, NSNumber */
-(NSNumber*) getInventoryWithCompletionHandler: 
    (void (^)(NSDictionary* /* NSString, NSNumber */ output, NSError* error)) handler;


///
///
/// Fake endpoint to test arbitrary object return by 'Get inventory'
/// Returns an arbitrary object which is actually a map of status codes to quantities
///
/// 
///
/// @return NSObject*
-(NSNumber*) getInventoryInObjectWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// Find purchase order by ID
/// For valid response try integer IDs with value <= 5 or > 10. Other values will generated exceptions
///
/// @param orderId ID of pet that needs to be fetched
/// 
///
/// @return SWGOrder*
-(NSNumber*) getOrderByIdWithOrderId: (NSString*) orderId
    completionHandler: (void (^)(SWGOrder* output, NSError* error)) handler;


///
///
/// Place an order for a pet
/// 
///
/// @param body order placed for purchasing the pet
/// 
///
/// @return SWGOrder*
-(NSNumber*) placeOrderWithBody: (SWGOrder*) body
    completionHandler: (void (^)(SWGOrder* output, NSError* error)) handler;



@end
